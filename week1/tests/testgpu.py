import torch
import time
x = torch.rand(5, 3).cuda()
print(x)
# time.sleep(10)

import auto_gptq
# print("auto_gptq version:", auto_gptq.__version__)

# import torch
# print(torch.__version__)
# print(torch.version.cuda)
