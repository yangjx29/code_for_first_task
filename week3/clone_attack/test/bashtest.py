import subprocess # 用于执行外部命令

def _external_cmd(self, cmd, msg_in=''):
        """
        执行外部 shell 命令并获取返回的标准输出和标准错误
        """
        try:
            # subprocess.Popen() 来启动一个新的进程，执行传入的 shell 命令
            proc = subprocess.Popen(cmd,
                                    shell=True,
                                    stdin=subprocess.PIPE,
                                    stdout=subprocess.PIPE,
                                    stderr=subprocess.PIPE,
                                    )
            stdout_value, stderr_value = proc.communicate(msg_in)
            # print(f"msg_in: {msg_in}")
            return stdout_value, stderr_value
        except ValueError as err:
            return None, None
        except IOError as err:
            return None, None
        

div_command = "/data/yjx/code_for_first_task/week3/clone_attack/DRLSG/CloneRM/runner.sh"