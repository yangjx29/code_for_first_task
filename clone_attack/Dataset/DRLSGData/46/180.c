int main () {
    int ihjVKFg [(1091 - 987)] [(513 - 409)] = {0}, VixXltKfs9 [10001] = {0}, PGiZ98JIbDnE;
    int DYtABjOkn8D, ony1eP, wuiBhbf0rkW, anjVrf7, ANpY4iRg2dEF, DJgDO5cnPU = (58 - 57), HXDBhSU;
    cin >> DYtABjOkn8D >> ony1eP;
    {
        wuiBhbf0rkW = 761 - 760;
        while (wuiBhbf0rkW <= DYtABjOkn8D) {
            {
                anjVrf7 = 403 - 402;
                while (anjVrf7 <= ony1eP) {
                    cin >> ihjVKFg[wuiBhbf0rkW][anjVrf7];
                    anjVrf7++;
                }
            }
            wuiBhbf0rkW++;
        }
    }
    PGiZ98JIbDnE = DYtABjOkn8D *ony1eP;
    wuiBhbf0rkW = 1, anjVrf7 = 1;
    if (ony1eP < DYtABjOkn8D)
        HXDBhSU = ony1eP;
    else
        HXDBhSU = DYtABjOkn8D;
    {
        ANpY4iRg2dEF = 1;
        while (ANpY4iRg2dEF <= HXDBhSU) {
            {
                anjVrf7 = ANpY4iRg2dEF;
                while (anjVrf7 <= ony1eP - ANpY4iRg2dEF) {
                    if (DJgDO5cnPU > PGiZ98JIbDnE)
                        break;
                    VixXltKfs9[DJgDO5cnPU] = ihjVKFg[ANpY4iRg2dEF][anjVrf7];
                    DJgDO5cnPU++;
                    anjVrf7++;
                }
            }
            for (wuiBhbf0rkW = ANpY4iRg2dEF; wuiBhbf0rkW <= DYtABjOkn8D -ANpY4iRg2dEF; wuiBhbf0rkW++) {
                if (DJgDO5cnPU > PGiZ98JIbDnE)
                    break;
                VixXltKfs9[DJgDO5cnPU] = ihjVKFg[wuiBhbf0rkW][ony1eP - ANpY4iRg2dEF +1];
                DJgDO5cnPU++;
            }
            for (anjVrf7 = ony1eP - ANpY4iRg2dEF +1; anjVrf7 >= ANpY4iRg2dEF +1; anjVrf7--) {
                if (DJgDO5cnPU > PGiZ98JIbDnE)
                    break;
                VixXltKfs9[DJgDO5cnPU] = ihjVKFg[DYtABjOkn8D -ANpY4iRg2dEF+1][anjVrf7];
                DJgDO5cnPU++;
            }
            {
                wuiBhbf0rkW = DYtABjOkn8D -ANpY4iRg2dEF+1;
                while (wuiBhbf0rkW >= ANpY4iRg2dEF +1) {
                    if (DJgDO5cnPU > PGiZ98JIbDnE)
                        break;
                    VixXltKfs9[DJgDO5cnPU] = ihjVKFg[wuiBhbf0rkW][ANpY4iRg2dEF];
                    DJgDO5cnPU++;
                    wuiBhbf0rkW--;
                }
            }
            ANpY4iRg2dEF++;
        }
    }
    if (ony1eP == DYtABjOkn8D &&ony1eP % 2 != 0)
        VixXltKfs9[PGiZ98JIbDnE] = ihjVKFg[(ony1eP + 1) / 2][(ony1eP + 1) / 2];
    for (DJgDO5cnPU = 1; DJgDO5cnPU <= PGiZ98JIbDnE; DJgDO5cnPU++)
        cout << VixXltKfs9[DJgDO5cnPU] << endl;
    return 0;
}

