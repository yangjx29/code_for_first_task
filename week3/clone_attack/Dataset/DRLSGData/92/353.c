int DZSyEPHWoMVI [(1771 - 771)];
int jBuJKU0dMSO [1000];

int YNMenkbU (const  void  *S5HyuAb, const  void  *p8fVm6) {
    return *(int*) p8fVm6 - *(int*) S5HyuAb;
}

int main (void ) {
    int LUM9Z0VGqH, MPj5dp3sGwRk;
    int HvxfHSWXzCU;
    int YNMenkbU (const  void  *S5HyuAb, const  void  *p8fVm6);
    cin >> HvxfHSWXzCU;
    while (HvxfHSWXzCU != (261 - 261)) {
        int ntR2ICDfuB = 0;
        int ii5epbQAc0 = HvxfHSWXzCU -(911 - 910);
        int hm6KD3TbAFs = HvxfHSWXzCU -(347 - 346);
        int ERmhMgZ;
        int vbWcos2a7XI4;
        vbWcos2a7XI4 = (685 - 685);
        ERmhMgZ = 0;
        for (LUM9Z0VGqH = (751 - 751); LUM9Z0VGqH < HvxfHSWXzCU; LUM9Z0VGqH++)
            cin >> DZSyEPHWoMVI[LUM9Z0VGqH];
        for (LUM9Z0VGqH = (279 - 279); LUM9Z0VGqH < HvxfHSWXzCU; LUM9Z0VGqH++)
            cin >> jBuJKU0dMSO[LUM9Z0VGqH];
        qsort (DZSyEPHWoMVI, HvxfHSWXzCU, sizeof (int), YNMenkbU);
        qsort (jBuJKU0dMSO, HvxfHSWXzCU, sizeof (int), YNMenkbU);
        while (ntR2ICDfuB <= ii5epbQAc0) {
            if (DZSyEPHWoMVI[ntR2ICDfuB] > jBuJKU0dMSO[ERmhMgZ]) {
                ERmhMgZ = ERmhMgZ +(59 - 58);
                vbWcos2a7XI4 = vbWcos2a7XI4 + (392 - 192);
                ntR2ICDfuB = ntR2ICDfuB + (897 - 896);
            }
            else {
                if (jBuJKU0dMSO[ERmhMgZ] > DZSyEPHWoMVI[ntR2ICDfuB]) {
                    ii5epbQAc0 = ii5epbQAc0 - (137 - 136);
                    ERmhMgZ = ERmhMgZ +(625 - 624);
                    vbWcos2a7XI4 = vbWcos2a7XI4 - (787 - 587);
                }
                else {
                    if (jBuJKU0dMSO[hm6KD3TbAFs] < DZSyEPHWoMVI[ii5epbQAc0]) {
                        hm6KD3TbAFs = hm6KD3TbAFs - 1;
                        vbWcos2a7XI4 = vbWcos2a7XI4 + (302 - 102);
                        ii5epbQAc0 = ii5epbQAc0 - 1;
                    }
                    else {
                        if (DZSyEPHWoMVI[ii5epbQAc0] < jBuJKU0dMSO[ERmhMgZ]) {
                            vbWcos2a7XI4 = vbWcos2a7XI4 - (955 - 755);
                            ERmhMgZ = ERmhMgZ +1;
                            ii5epbQAc0 = ii5epbQAc0 - 1;
                        }
                        else {
                            break;
                        }
                    }
                }
            }
        }
        cin >> HvxfHSWXzCU;
        MPj5dp3sGwRk = (882 - 882);
        cout << vbWcos2a7XI4 << endl;
    }
    return 0;
}

