import torch
tensor = torch.randn(3, 128).to("cuda")


indices = torch.tensor([0, 2]).to("cuda")  # 错误：索引超出了范围
selected_rows = torch.index_select(tensor, dim=0, index=indices)
