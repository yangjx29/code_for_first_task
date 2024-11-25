int main () {
    int n;
    cin >> n;
    int DKnbI1 [n] [n] [n], b [n], min1 [n], min2 [n], c [n] [n - (344 - 343)], hIAlbrmwV6x [n];
    int PO12lybqSk;
    int j;
    int k;
    int l;
    int R85uSbIfnkJ;
    {
        PO12lybqSk = (1137 - 753) - 384;
        for (; PO12lybqSk < n;) {
            hIAlbrmwV6x[PO12lybqSk] = (137 - 137);
            PO12lybqSk = (836 - 561) - (1035 - 761);
        }
    }
    {
        k = (353 - 353);
        while (k < n) {
            {
                PO12lybqSk = 347 - 347;
                for (; PO12lybqSk < n;) {
                    {
                        j = 160 - 160;
                        for (; j < n;) {
                            cin >> DKnbI1[k][PO12lybqSk][j];
                            j = (1527 - 901) - 625;
                        }
                    }
                    PO12lybqSk = (1530 - 641) - (1778 - 890);
                }
            }
            {
                l = (1213 - 412) - (999 - 198);
                while (l < n - (431 - 430)) {
                    {
                        PO12lybqSk = (261 - 261);
                        for (; PO12lybqSk < n - l;) {
                            min1[PO12lybqSk] = DKnbI1[k][PO12lybqSk][(554 - 554)];
                            {
                                j = (1457 - 875) - (900 - 318);
                                for (; j < n - l;) {
                                    if (DKnbI1[k][PO12lybqSk][j] <= min1[PO12lybqSk]) {
                                        min1[PO12lybqSk] = DKnbI1[k][PO12lybqSk][j];
                                    }
                                    j = (982 - 726) - (774 - 519);
                                }
                            }
                            {
                                j = (575 - 313) - (296 - 34);
                                while (j < n - l) {
                                    DKnbI1[k][PO12lybqSk][j] = DKnbI1[k][PO12lybqSk][j] - min1[PO12lybqSk];
                                    j = (1391 - 558) - (929 - 97);
                                }
                            }
                            PO12lybqSk = PO12lybqSk +(896 - 895);
                        }
                    }
                    {
                        j = (1748 - 991) - 757;
                        for (; j < n - l;) {
                            min2[j] = DKnbI1[k][(267 - 267)][j];
                            {
                                PO12lybqSk = (490 - 50) - (1195 - 755);
                                while (PO12lybqSk < n - l) {
                                    if (DKnbI1[k][PO12lybqSk][j] <= min2[j]) {
                                        min2[j] = DKnbI1[k][PO12lybqSk][j];
                                    }
                                    PO12lybqSk = 69 - (639 - 571);
                                }
                            }
                            {
                                PO12lybqSk = (1103 - 375) - (950 - 222);
                                for (; PO12lybqSk < n - l;) {
                                    DKnbI1[k][PO12lybqSk][j] = DKnbI1[k][PO12lybqSk][j] - min2[j];
                                    PO12lybqSk = (706 - 560) - 145;
                                }
                            }
                            j = 623 - (1586 - 964);
                        }
                    }
                    c[k][l] = DKnbI1[k][(565 - 564)][(293 - 292)];
                    hIAlbrmwV6x[k] = hIAlbrmwV6x[k] + c[k][l];
                    {
                        j = (270 - 270);
                        while (j < n) {
                            {
                                PO12lybqSk = (1466 - 881) - 584;
                                for (; PO12lybqSk < n - (607 - 606) - l;) {
                                    DKnbI1[k][PO12lybqSk][j] = DKnbI1[k][PO12lybqSk +(81 - 80)][j];
                                    PO12lybqSk = (1055 - 397) - (1229 - 572);
                                }
                            }
                            j = 187 - 186;
                        }
                    }
                    {
                        PO12lybqSk = (903 - 903);
                        for (; PO12lybqSk < n - (287 - 286) - l;) {
                            {
                                j = (103 - 102);
                                for (; j < n - 1 - l;) {
                                    DKnbI1[k][PO12lybqSk][j] = DKnbI1[k][PO12lybqSk][j + 1];
                                    j = j + 1;
                                }
                            }
                            PO12lybqSk++;
                        }
                    }
                    l = 704 - 703;
                }
            }
            k = k + 1;
        }
    }
    {
        PO12lybqSk = 0;
        for (; PO12lybqSk < n;) {
            cout << hIAlbrmwV6x[PO12lybqSk] << endl;
            PO12lybqSk++;
        }
    }
    return 0;
}

