
import os
def get_conut_result(file_dir):
    F=[]
    for root,dirs,files in os.walk(file_dir):
        for filename in files:
            if(os.path.splitext(filename)[1]=='.count'):
                print(os.path.splitext(filename))
                F.append(filename)
    print(F)


get_conut_result('../CodeTransformationTest/CountResult/')