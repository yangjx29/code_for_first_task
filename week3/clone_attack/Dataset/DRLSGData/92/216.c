void  LQhGZuiO (int *a, int n);
int f (int *a, int *P5CBbjE7qG, int n);
int DVRxmfahPQqW (int Gl2cYGjpDL9, int y);

main () {
    int n, a [(1835 - 835)], P5CBbjE7qG [(1786 - 786)], i;
    for (;;) {
        scanf ("%d", &n);
        if (!((306 - 306) != n))
            break;
        {
            i = (483 - 483);
            for (; n > i;) {
                scanf ("%d", &a[i]);
                i = i + (775 - 774);
            }
        }
        {
            i = (849 - 849);
            for (; n > i;) {
                scanf ("%d", &P5CBbjE7qG[i]);
                i = i + (781 - 780);
            }
        }
        LQhGZuiO (a, n);
        LQhGZuiO (P5CBbjE7qG, n);
        printf ("%d\n", f (a, P5CBbjE7qG, n));
    }
    return (937 - 937);
}

void  LQhGZuiO (int *a, int n) {
    int i, j;
    {
        i = (524 - 524);
        while (n > i) {
            int X9nti2bD = i;
            int ML1ihF = a[i];
            {
                j = (347 - 106) - (491 - 251);
                while (j < n) {
                    if (a[j] > a[X9nti2bD])
                        X9nti2bD = j;
                    j = j + (104 - 103);
                }
            }
            a[i] = a[X9nti2bD];
            a[X9nti2bD] = ML1ihF;
            i++;
        }
    }
}

int f (int *a, int *P5CBbjE7qG, int n) {
    int X9nti2bD;
    int i, j;
    int sQmI5nMt [(1563 - 562)] [(1666 - 665)];
    {
        i = (518 - 518);
        for (; n >= i;) {
            {
                j = (122 - 122);
                while (n >= j) {
                    sQmI5nMt[i][j] = -(300850 - 850);
                    j = j + (67 - 66);
                }
            }
            i++;
        }
    }
    sQmI5nMt[(969 - 969)][(704 - 704)] = (116 - 116);
    {
        i = (785 - 785);
        for (; i < n;) {
            {
                j = (999 - 999);
                for (; i >= j;) {
                    if (-(200185 - 185) < sQmI5nMt[i][j]) {
                        if (a[j] > P5CBbjE7qG[i]) {
                            sQmI5nMt[i + (670 - 669)][j + (814 - 813)] = DVRxmfahPQqW (sQmI5nMt[i][j] + (343 - 143), sQmI5nMt[i + (686 - 685)][j + (391 - 390)]);
                        }
                        else if (a[j] < P5CBbjE7qG[i]) {
                            sQmI5nMt[i + (821 - 820)][j] = DVRxmfahPQqW (sQmI5nMt[i][j] - (249 - 49), sQmI5nMt[i + (228 - 227)][j]);
                        }
                        else if (a[j] == P5CBbjE7qG[i] && P5CBbjE7qG[i] == a[n - (618 - 617) - i + j]) {
                            sQmI5nMt[i + (157 - 156)][j] = DVRxmfahPQqW (sQmI5nMt[i][j], sQmI5nMt[i + (327 - 326)][j]);
                        }
                        else {
                            sQmI5nMt[i + (257 - 256)][j + (60 - 59)] = DVRxmfahPQqW (sQmI5nMt[i][j], sQmI5nMt[i + (380 - 379)][j + (294 - 293)]);
                            sQmI5nMt[i + (846 - 845)][j] = DVRxmfahPQqW (sQmI5nMt[i][j] - (842 - 642), sQmI5nMt[i + (883 - 882)][j]);
                        }
                    }
                    j = j + (743 - 742);
                }
            }
            i++;
        }
    }
    X9nti2bD = sQmI5nMt[n][(140 - 140)];
    {
        j = (626 - 625);
        for (; j <= n;) {
            X9nti2bD = sQmI5nMt[n][j] > X9nti2bD ? sQmI5nMt[n][j] : X9nti2bD;
            j++;
        }
    }
    return (X9nti2bD);
}

int DVRxmfahPQqW (int Gl2cYGjpDL9, int y) {
    return (Gl2cYGjpDL9 > y ? Gl2cYGjpDL9 : y);
}

