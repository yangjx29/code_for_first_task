"""
    测试如何使用gpt系列模型生成文本
"""

from openai import OpenAI
import os
import openai 

# # openai.base_url = 'https://api2.aigcbest.top/v1/'
# client = OpenAI(
#     api_key=os.environ.get("OPENAI_API_KEY"),
#     base_url='https://api.openai-proxy.org/v1',
# )
# print(client.api_key)

# gpt_response = client.chat.completions.create(
    
#     model="gpt-3.5-turbo",
#     temperature=0.3,
#     messages=[
#         {
#             "role": "user",
#             "content": "用c++写一个快速排序",
#         }
#     ],
# )

# # print(gpt_response.choices[0].message.content)
class dsdd():
    def __init__(self) -> None:
        pass    
    def se(self, **kwargs):
        print(''.join(filter(str.isalpha, os.path.splitext(kwargs['file'])[0])))

    def test(self):
        self.se(file='py1230.txt')
obj = dsdd().test()