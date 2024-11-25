main () {
    int j;
    int p;
    int KL1i6S;
    int n;
    int CHCndtEFAcy [10] [3];
    struct   qwe {
        int j4jK2fC [3];
        int CHCndtEFAcy [3];
        int MAU1CdX;
    }
    t [45];
    struct   qwe {
        int j4jK2fC [3];
        int CHCndtEFAcy [3];
        int MAU1CdX;
    }
    e;
    scanf ("%d", &n);
    p = 0;
    {
        KL1i6S = 0;
        while (KL1i6S < n) {
            scanf ("%d%d%d", *(CHCndtEFAcy +KL1i6S), *(CHCndtEFAcy +KL1i6S) + 1, *(CHCndtEFAcy +KL1i6S) + 2);
            KL1i6S = KL1i6S +1;
        }
    }
    {
        KL1i6S = 0;
        while (n - 1 > KL1i6S) {
            {
                j = KL1i6S +1;
                while (j < n) {
                    t[p].j4jK2fC[0] = CHCndtEFAcy[KL1i6S][0];
                    t[p].j4jK2fC[1] = CHCndtEFAcy[KL1i6S][1];
                    t[p].j4jK2fC[2] = CHCndtEFAcy[KL1i6S][2];
                    t[p].CHCndtEFAcy[0] = CHCndtEFAcy[j][0];
                    t[p].CHCndtEFAcy[1] = CHCndtEFAcy[j][1];
                    t[p].CHCndtEFAcy[2] = CHCndtEFAcy[j][2];
                    t[p].MAU1CdX = (CHCndtEFAcy[KL1i6S][0] - CHCndtEFAcy[j][0]) * (CHCndtEFAcy[KL1i6S][0] - CHCndtEFAcy[j][0]) + (CHCndtEFAcy[KL1i6S][1] - CHCndtEFAcy[j][1]) * (CHCndtEFAcy[KL1i6S][1] - CHCndtEFAcy[j][1]) + (CHCndtEFAcy[KL1i6S][2] - CHCndtEFAcy[j][2]) * (CHCndtEFAcy[KL1i6S][2] - CHCndtEFAcy[j][2]);
                    p = p + 1;
                    j = j + 1;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            KL1i6S++;
        }
    }
    {
        KL1i6S = 0;
        while (p > KL1i6S) {
            j = 0;
            while (j < p - KL1i6S -1) {
                if (t[j].MAU1CdX < t[j + 1].MAU1CdX) {
                    e = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = e;
                }
                j++;
            }
            KL1i6S++;
        }
    }
    {
        KL1i6S = 0;
        while (KL1i6S < p) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", t[KL1i6S].j4jK2fC[0], t[KL1i6S].j4jK2fC[1], t[KL1i6S].j4jK2fC[2], t[KL1i6S].CHCndtEFAcy[0], t[KL1i6S].CHCndtEFAcy[1], t[KL1i6S].CHCndtEFAcy[2], sqrt (t[KL1i6S].MAU1CdX));
            KL1i6S++;
        }
    }
}

