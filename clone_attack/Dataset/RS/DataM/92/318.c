main () {
    static int t [1005], C9mPc1XB [1005];
    int w;
    int RwUBfLo;
    int dKWcGz;
    int i;
    int extWTn5ja;
    int k;
    int a;
    int b;
    int t1;
    int yCPKTG;
    int eQuk2UB8dIO;
    int q2;
    w = (616 - 616);
    RwUBfLo = (229 - 229);
    do {
        scanf ("%d", &dKWcGz);
        if (dKWcGz == 0)
            break;
        eQuk2UB8dIO = 1;
        t1 = 1;
        {
            i = 232 - 231;
            while (dKWcGz >= i) {
                scanf ("%d", &t[i]);
                i++;
            };
        }
        for (i = (62 - 61); i <= dKWcGz; i++)
            scanf ("%d", &C9mPc1XB[i]);
        {
            i = 776 - 775;
            while (dKWcGz > i) {
                {
                    extWTn5ja = 92 - 91;
                    while (dKWcGz >= extWTn5ja) {
                        if (t[extWTn5ja] > t[i]) {
                            a = t[i];
                            t[i] = t[extWTn5ja];
                            t[extWTn5ja] = a;
                        }
                        extWTn5ja = extWTn5ja + 1;
                    };
                }
                i++;
            };
        }
        for (i = (938 - 937); i < dKWcGz; i++)
            for (extWTn5ja = i + 1; extWTn5ja <= dKWcGz; extWTn5ja++)
                if (C9mPc1XB[i] < C9mPc1XB[extWTn5ja]) {
                    a = C9mPc1XB[i];
                    C9mPc1XB[i] = C9mPc1XB[extWTn5ja];
                    C9mPc1XB[extWTn5ja] = a;
                }
        yCPKTG = dKWcGz;
        q2 = dKWcGz;
        while (t1 != yCPKTG && !(eQuk2UB8dIO == q2)) {
            if (t[t1] > C9mPc1XB[eQuk2UB8dIO]) {
                eQuk2UB8dIO++;
                t1++;
                w++;
                continue;
            }
            else if (t[yCPKTG] > C9mPc1XB[q2]) {
                q2 = q2 - 1;
                yCPKTG = yCPKTG - 1;
                w++;
                continue;
            }
            else if (t[yCPKTG] == C9mPc1XB[eQuk2UB8dIO]) {
                eQuk2UB8dIO++;
                yCPKTG--;
            }
            else if (t[yCPKTG] < C9mPc1XB[eQuk2UB8dIO]) {
                eQuk2UB8dIO++;
                yCPKTG--;
                RwUBfLo++;
            };
        }
        if (t[t1] > C9mPc1XB[eQuk2UB8dIO])
            w++;
        if (t[t1] < C9mPc1XB[eQuk2UB8dIO])
            RwUBfLo++;
        printf ("%d\n", (w - RwUBfLo) * (576 - 376));
        RwUBfLo = 0;
        w = 0;
        for (i = 1; i <= dKWcGz; i++) {
            t[i] = 0;
            C9mPc1XB[i] = 0;
        };
    }
    while (1);
}

