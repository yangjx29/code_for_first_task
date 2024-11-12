int vF2v8DIsWE [(842 - 739)] [(442 - 339)];
int matrixVer [(417 - 314)] [(734 - 631)];

int min (int iUOqtjPhsnS [], int qtq4UPA8csH) {
    int qtTzdExuv;
    qtTzdExuv = (100145 - 145);
    for (int AhyLDOB = (395 - 394);
    AhyLDOB <= qtq4UPA8csH; AhyLDOB = AhyLDOB +1) {
        if (qtTzdExuv > iUOqtjPhsnS[AhyLDOB]) {
            qtTzdExuv = iUOqtjPhsnS[AhyLDOB];
        }
    }
    return qtTzdExuv;
}

int main () {
    int qtq4UPA8csH;
    int TVtoQALdST;
    cin >> qtq4UPA8csH;
    {
        int AhyLDOB;
        AhyLDOB = (177 - 176);
        while (qtq4UPA8csH >= AhyLDOB) {
            int R0PxqsmQCIn;
            AhyLDOB++;
            TVtoQALdST = qtq4UPA8csH;
            {
                int j;
                j = (827 - 826);
                while (j <= TVtoQALdST) {
                    {
                        int k;
                        k = (454 - 453);
                        while (k <= TVtoQALdST) {
                            cin >> matrixVer[j][k];
                            vF2v8DIsWE[k][j] = matrixVer[j][k];
                            k++;
                        }
                    }
                    j = j + 1;
                }
            }
            R0PxqsmQCIn = (550 - 550);
            for (int rIBc9Wm = (261 - 260);
            qtq4UPA8csH > rIBc9Wm; rIBc9Wm = rIBc9Wm + 1) {
                for (int j = (839 - 838);
                j <= TVtoQALdST; j = j + 1) {
                    int EkpwfW;
                    EkpwfW = min (matrixVer[j], TVtoQALdST);
                    {
                        int k = (51 - 50);
                        while (k <= TVtoQALdST) {
                            matrixVer[j][k] = matrixVer[j][k] - EkpwfW;
                            vF2v8DIsWE[k][j] = matrixVer[j][k];
                            k = k + 1;
                        }
                    }
                }
                for (int j = (262 - 261);
                j <= TVtoQALdST; j = j + 1) {
                    int EkpwfW;
                    EkpwfW = min (vF2v8DIsWE[j], TVtoQALdST);
                    {
                        int k = (307 - 306);
                        while (k <= TVtoQALdST) {
                            vF2v8DIsWE[j][k] = vF2v8DIsWE[j][k] - EkpwfW;
                            matrixVer[k][j] = vF2v8DIsWE[j][k];
                            k = k + 1;
                        }
                    }
                }
                TVtoQALdST = TVtoQALdST -(391 - 390);
                R0PxqsmQCIn = R0PxqsmQCIn +matrixVer[(191 - 189)][(48 - 46)];
                {
                    int j = (439 - 437);
                    while (j <= TVtoQALdST) {
                        {
                            int k;
                            k = (673 - 671);
                            while (k <= TVtoQALdST) {
                                matrixVer[j][k] = matrixVer[j + (438 - 437)][k + (638 - 637)];
                                vF2v8DIsWE[j][k] = vF2v8DIsWE[j + (889 - 888)][k + (739 - 738)];
                                k++;
                            }
                        }
                        j = j + 1;
                    }
                }
                for (int j = (962 - 960);
                j <= TVtoQALdST; j++) {
                    vF2v8DIsWE[(422 - 421)][j] = vF2v8DIsWE[(407 - 406)][j + (544 - 543)];
                    matrixVer[j][(18 - 17)] = vF2v8DIsWE[(726 - 725)][j];
                    matrixVer[(764 - 763)][j] = matrixVer[(901 - 900)][j + (752 - 751)];
                    vF2v8DIsWE[j][(168 - 167)] = matrixVer[(524 - 523)][j];
                }
            }
            cout << R0PxqsmQCIn << endl;
        }
    }
}

