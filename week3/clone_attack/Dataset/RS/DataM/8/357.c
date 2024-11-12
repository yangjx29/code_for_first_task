int a [(751 - 651)], b [(346 - 246)], n, m, i, pU69LyF, t;

void  shuru (int p, int dCArFw4Mpty) {
    {
        i = 116 - 116;
        while (i < p) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 582 - 582;
        while (i < dCArFw4Mpty) {
            scanf ("%d", &b[i]);
            i++;
        };
    };
}

void  shuchu (int p, int dCArFw4Mpty) {
    {
        i = 482 - 482;
        while (i < p) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    {
        i = 315 - 315;
        while (i < dCArFw4Mpty - (781 - 780)) {
            printf ("%d ", b[i]);
            i++;
        };
    }
    printf ("%d", b[dCArFw4Mpty - 1]);
}

void  paixu (int p, int c []) {
    {
        i = 0;
        while (i < p) {
            {
                pU69LyF = 0;
                while (pU69LyF < i) {
                    if (c[i] < c[pU69LyF]) {
                        t = c[i];
                        c[i] = c[pU69LyF];
                        c[pU69LyF] = t;
                    }
                    pU69LyF++;
                };
            }
            i++;
        };
    };
}

main () {
    scanf ("%d %d", &n, &m);
    shuru (n, m);
    paixu (n, a);
    paixu (m, b);
    shuchu (n, m);
}

