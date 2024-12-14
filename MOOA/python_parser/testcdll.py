import os
import ctypes
ld_library_path = os.environ.get("LD_LIBRARY_PATH", "")
# 添加 my-languages.so 所在的目录路径
# new_library_path = "/data/yjx/code_for_first_task/MOOA/python_parser:"
# os.environ["LD_LIBRARY_PATH"] = f"{ld_library_path}{new_library_path}" if ld_library_path else new_library_path
# print(os.environ)


try:
    ctypes.cdll.LoadLibrary("my-languages.so")
    print("Library loaded successfully!")
except OSError as e:
    print(f"Failed to load library: {e}")
