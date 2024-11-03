from vllm import LLM

llm = LLM(model="codellama/CodeLlama-7b-hf")  # Name or path of your model
output = llm.generate("Hello, my name is")
print(output)