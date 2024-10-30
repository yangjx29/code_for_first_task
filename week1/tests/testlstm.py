import torch
import torch.nn as nn
import torch.optim as optim
from torchtext.data import Field, BucketIterator, TabularDataset

# 1. 准备数据
tokenize = lambda x: x.split()
TEXT = Field(tokenize=tokenize, init_token='<sos>', eos_token='<eos>', lower=True)
TARGET = Field(tokenize=tokenize, init_token='<sos>', eos_token='<eos>', lower=True)

# 使用TabularDataset加载示例数据集
data_fields = [('src', TEXT), ('trg', TARGET)]
train_data, valid_data = TabularDataset.splits(
    path='data/', train='train.csv', validation='valid.csv', format='csv', fields=data_fields
)

# 构建词汇表
TEXT.build_vocab(train_data, max_size=10000, min_freq=2)
TARGET.build_vocab(train_data, max_size=10000, min_freq=2)

# 创建数据迭代器
BATCH_SIZE = 32
device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
train_iterator, valid_iterator = BucketIterator.splits(
    (train_data, valid_data), batch_size=BATCH_SIZE, device=device
)

# 2. 定义LSTM文本生成模型
class LSTMTextGenerator(nn.Module):
    def __init__(self, input_dim, embedding_dim, hidden_dim, output_dim):
        super(LSTMTextGenerator, self).__init__()
        self.embedding = nn.Embedding(input_dim, embedding_dim)
        self.lstm = nn.LSTM(embedding_dim, hidden_dim, batch_first=True)
        self.fc = nn.Linear(hidden_dim, output_dim)
    
    def forward(self, x, hidden=None):
        embedded = self.embedding(x)
        output, (hn, cn) = self.lstm(embedded, hidden)
        prediction = self.fc(output)
        return prediction, (hn, cn)

# 超参数
INPUT_DIM = len(TEXT.vocab)
EMBEDDING_DIM = 256
HIDDEN_DIM = 512
OUTPUT_DIM = len(TARGET.vocab)

# 创建模型
model = LSTMTextGenerator(INPUT_DIM, EMBEDDING_DIM, HIDDEN_DIM, OUTPUT_DIM).to(device)

# 3. 定义损失函数和优化器
criterion = nn.CrossEntropyLoss(ignore_index=TARGET.vocab.stoi[TARGET.pad_token])
optimizer = optim.Adam(model.parameters(), lr=0.001)

# 4. 训练模型
epochs = 10
for epoch in range(epochs):
    model.train()
    epoch_loss = 0
    for batch in train_iterator:
        src = batch.src
        trg = batch.trg
        optimizer.zero_grad()
        output, _ = model(src)
        output = output.view(-1, OUTPUT_DIM)
        trg = trg.view(-1)
        loss = criterion(output, trg)
        loss.backward()
        optimizer.step()
        epoch_loss += loss.item()
    print(f'Epoch [{epoch+1}/{epochs}], Loss: {epoch_loss / len(train_iterator):.4f}')

# 5. 文本生成（基于初始词）
def generate_text(model, start_token, max_len=20):
    model.eval()
    with torch.no_grad():
        tokens = [TEXT.vocab.stoi[start_token]]
        input_seq = torch.tensor(tokens, device=device).unsqueeze(0)
        hidden = None
        generated_text = [start_token]
        for _ in range(max_len):
            output, hidden = model(input_seq, hidden)
            next_token = output.argmax(2)[:, -1].item()
            next_word = TEXT.vocab.itos[next_token]
            if next_word == '<eos>':
                break
            generated_text.append(next_word)
            input_seq = next_token.unsqueeze(0).unsqueeze(0)
        return ' '.join(generated_text)

# 使用初始词生成文本
start_token = "hello"
print(f'生成的文本：{generate_text(model, start_token)}')
