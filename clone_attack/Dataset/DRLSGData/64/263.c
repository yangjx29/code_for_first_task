int main () {
    int n, i, j, WznZqMv4BA, qOY1k3ZIr, zIe5Zg12;
    int m6tqCe4xHBrN [(868 - 857)] [(764 - 760)], MUYXEqPf [(474 - 424)] [7];
    double  d [50], eGo6xuDipy;
    scanf ("%d", &n);
    WznZqMv4BA = n * (n - (851 - 850)) / (428 - 426);
    {
        i = (764 - 763);
        for (; i <= n;) {
            {
                j = (468 - 467);
                for (; j <= (511 - 508);) {
                    scanf ("%d", &m6tqCe4xHBrN[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    zIe5Zg12 = (719 - 718);
    {
        i = (728 - 727);
        for (; i < n;) {
            {
                j = i + (772 - 771);
                for (; j <= n;) {
                    MUYXEqPf[zIe5Zg12][(605 - 602)] = m6tqCe4xHBrN[i][(678 - 675)];
                    MUYXEqPf[zIe5Zg12][(339 - 338)] = m6tqCe4xHBrN[i][(261 - 260)];
                    MUYXEqPf[zIe5Zg12][(854 - 852)] = m6tqCe4xHBrN[i][(355 - 353)];
                    MUYXEqPf[zIe5Zg12][(273 - 267)] = m6tqCe4xHBrN[j][(685 - 682)];
                    MUYXEqPf[zIe5Zg12][(586 - 582)] = m6tqCe4xHBrN[j][(495 - 494)];
                    MUYXEqPf[zIe5Zg12][(501 - 496)] = m6tqCe4xHBrN[j][(363 - 361)];
                    j++;
                    zIe5Zg12++;
                }
            }
            i++;
        }
    }
    for (zIe5Zg12 = (374 - 373); zIe5Zg12 <= WznZqMv4BA; zIe5Zg12++) {
        d[zIe5Zg12] = sqrt ((MUYXEqPf[zIe5Zg12][3] - MUYXEqPf[zIe5Zg12][(585 - 579)]) * (MUYXEqPf[zIe5Zg12][3] - MUYXEqPf[zIe5Zg12][(97 - 91)]) + (MUYXEqPf[zIe5Zg12][(713 - 712)] - MUYXEqPf[zIe5Zg12][4]) * (MUYXEqPf[zIe5Zg12][(359 - 358)] - MUYXEqPf[zIe5Zg12][4]) + (MUYXEqPf[zIe5Zg12][(735 - 733)] - MUYXEqPf[zIe5Zg12][(516 - 511)]) * (MUYXEqPf[zIe5Zg12][2] - MUYXEqPf[zIe5Zg12][(288 - 283)]));
    }
    {
        qOY1k3ZIr = WznZqMv4BA;
        for (; qOY1k3ZIr > (755 - 755);) {
            for (i = (445 - 444); i < qOY1k3ZIr; i++) {
                if (d[i] < d[i + (894 - 893)]) {
                    eGo6xuDipy = d[i];
                    d[i] = d[i + (884 - 883)];
                    d[i + (501 - 500)] = eGo6xuDipy;
                    {
                        j = (566 - 565);
                        for (; j <= (961 - 955);) {
                            eGo6xuDipy = MUYXEqPf[i][j];
                            MUYXEqPf[i][j] = MUYXEqPf[i + 1][j];
                            MUYXEqPf[i + 1][j] = eGo6xuDipy;
                            j++;
                        }
                    }
                }
            }
            qOY1k3ZIr--;
        }
    }
    {
        i = 1;
        for (; i <= WznZqMv4BA;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", MUYXEqPf[i][1], MUYXEqPf[i][2], MUYXEqPf[i][3], MUYXEqPf[i][4], MUYXEqPf[i][(1003 - 998)], MUYXEqPf[i][(502 - 496)], d[i]);
            i++;
        }
    }
    return (796 - 796);
}

