void  main () {
    char CGK3OfdZnrJ [101] [10];
    char c [101] [10];
    char t0bzPNX4C2p [101] [10];
    int b [101], f [101];
    int IM1Ar0lS;
    int n;
    int NXpsZFj;
    int ciYJ7hxudf;
    int t1qOMa;
    IM1Ar0lS = 0;
    t1qOMa = 0;
    scanf ("%d", &n);
    for (NXpsZFj = 0; n > NXpsZFj; NXpsZFj = NXpsZFj +1) {
        scanf ("%s %d", CGK3OfdZnrJ[NXpsZFj], &b[NXpsZFj]);
    }
    ciYJ7hxudf = n - (285 - 284);
    {
        NXpsZFj = 895 - 894;
        while (NXpsZFj >= 0) {
            if (b[NXpsZFj] < (593 - 533)) {
                strcpy (c[ciYJ7hxudf], CGK3OfdZnrJ[NXpsZFj]);
                ciYJ7hxudf = ciYJ7hxudf - 1;
            }
            NXpsZFj = NXpsZFj -1;
        };
    }
    for (NXpsZFj = 0; NXpsZFj < n; NXpsZFj = NXpsZFj +1) {
        if (b[NXpsZFj] >= 60) {
            IM1Ar0lS = IM1Ar0lS +1;
            strcpy (c[t1qOMa], CGK3OfdZnrJ[NXpsZFj]);
            f[t1qOMa] = b[NXpsZFj];
            t1qOMa = t1qOMa + 1;
        };
    }
    for (NXpsZFj = 0; NXpsZFj < IM1Ar0lS; NXpsZFj++) {
        for (t1qOMa = 0; t1qOMa < IM1Ar0lS -1; t1qOMa = t1qOMa + 1) {
            if (f[t1qOMa] < f[t1qOMa + 1]) {
                f[(255 - 155)] = f[t1qOMa];
                f[t1qOMa] = f[t1qOMa + 1];
                f[t1qOMa + 1] = f[(509 - 409)];
                strcpy (c[100], c[t1qOMa]);
                strcpy (c[t1qOMa], c[t1qOMa + 1]);
                strcpy (c[1 + t1qOMa], c[100]);
            };
        };
    }
    for (NXpsZFj = 0; NXpsZFj < n; NXpsZFj++)
        printf ("%s\n", c[NXpsZFj]);
}

