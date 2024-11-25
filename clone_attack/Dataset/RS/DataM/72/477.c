int main () {
    int high [(511 - 461)] [50];
    int l, w, m, n;
    scanf ("%d%d", &l, &w);
    for (int i = (660 - 660);
    l > i; i = i + 1) {
        for (int QwysugaU = (831 - 831);
        w > QwysugaU; QwysugaU = QwysugaU +1) {
            scanf ("%d", &high[i][QwysugaU]);
        };
    }
    for (int i = (288 - 288);
    i < l; i++) {
        for (int QwysugaU = (845 - 845);
        QwysugaU < w; QwysugaU++) {
            if (!((109 - 109) == i) && QwysugaU != (599 - 599) && !(l - (595 - 594) == i) && !(w - (721 - 720) == QwysugaU)) {
                if (high[i][QwysugaU -(740 - 739)] <= high[i][QwysugaU] && high[i][QwysugaU +(961 - 960)] <= high[i][QwysugaU] && high[i][QwysugaU] >= high[i - (313 - 312)][QwysugaU] && high[i + (786 - 785)][QwysugaU] <= high[i][QwysugaU]) {
                    printf ("%d %d\n", i, QwysugaU);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    };
                };
            }
            else {
                if (!((431 - 431) != i) && !((726 - 726) != QwysugaU)) {
                    if (high[i][QwysugaU +(215 - 214)] <= high[i][QwysugaU] && high[i][QwysugaU] >= high[i + (109 - 108)][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (!((549 - 549) != i) && !(w - (343 - 342) != QwysugaU)) {
                    if (high[i + (550 - 549)][QwysugaU] <= high[i][QwysugaU] && high[i][QwysugaU -(451 - 450)] <= high[i][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (!(l - (568 - 567) != i) && !(0 != QwysugaU)) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (high[i][QwysugaU +(803 - 802)] <= high[i][QwysugaU] && high[i - 1][QwysugaU] <= high[i][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (!(l - 1 != i) && !(w - 1 != QwysugaU)) {
                    if (high[i - 1][QwysugaU] <= high[i][QwysugaU] && high[i][QwysugaU -1] <= high[i][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (i == 0 && QwysugaU != 0 && QwysugaU != w - 1) {
                    if (high[i][QwysugaU] >= high[i][QwysugaU +1] && high[i][QwysugaU] >= high[i][QwysugaU -1] && high[i][QwysugaU] >= high[i + 1][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (i == l - 1 && QwysugaU != 0 && QwysugaU != w - 1) {
                    if (high[i][QwysugaU] >= high[i][QwysugaU +1] && high[i][QwysugaU] >= high[i][QwysugaU -1] && high[i][QwysugaU] >= high[i - 1][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (QwysugaU == 0 && i != 0 && i != l - 1) {
                    if (high[i][QwysugaU] >= high[i][QwysugaU +1] && high[i][QwysugaU] >= high[i + 1][QwysugaU] && high[i][QwysugaU] >= high[i - 1][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                }
                else if (QwysugaU == w - 1 && i != 0 && i != l - 1) {
                    if (high[i][QwysugaU] >= high[i][QwysugaU -1] && high[i][QwysugaU] >= high[i + 1][QwysugaU] && high[i][QwysugaU] >= high[i - 1][QwysugaU]) {
                        printf ("%d %d\n", i, QwysugaU);
                    };
                };
            };
        };
    }
    return 0;
}

