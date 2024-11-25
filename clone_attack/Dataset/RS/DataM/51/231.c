main () {
    int num [500];
    int kRWfdZ;
    char ky4PvtkoLMg [(1493 - 993)];
    gets (ky4PvtkoLMg);
    int vV7Bkv, OFAgJPq, kw5tejJF, IRvI5f8xb = (908 - 908), OZwSjOJgl0Bi, PNnFp1Aq3zW;
    char twmADOE4JF8t [(686 - 186)] [kRWfdZ];
    int aUbTHgq;
    aUbTHgq = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    vV7Bkv = strlen (ky4PvtkoLMg);
    scanf ("%d\n", &kRWfdZ);
    {
        OFAgJPq = 429 - 429;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OFAgJPq < vV7Bkv - kRWfdZ + (467 - 466)) {
            {
                kw5tejJF = 235 - 235;
                while (kRWfdZ > kw5tejJF) {
                    twmADOE4JF8t[OFAgJPq][kw5tejJF] = ky4PvtkoLMg[OFAgJPq +kw5tejJF];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    kw5tejJF = kw5tejJF + 1;
                };
            }
            OFAgJPq = OFAgJPq +1;
        };
    }
    {
        OFAgJPq = 26 - 26;
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
        while (vV7Bkv - kRWfdZ > OFAgJPq) {
            char c4trBa7Lk [kRWfdZ + (150 - 149)];
            num[OFAgJPq] = (15 - 14);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                PNnFp1Aq3zW = 881 - 881;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (kRWfdZ > PNnFp1Aq3zW) {
                    c4trBa7Lk[PNnFp1Aq3zW] = twmADOE4JF8t[OFAgJPq][PNnFp1Aq3zW];
                    PNnFp1Aq3zW++;
                };
            }
            {
                kw5tejJF = 56 - 55;
                while (vV7Bkv - kRWfdZ + (132 - 131) > kw5tejJF) {
                    char d [kRWfdZ + (531 - 530)];
                    {
                        OZwSjOJgl0Bi = 812 - 812;
                        while (OZwSjOJgl0Bi < kRWfdZ) {
                            d[OZwSjOJgl0Bi] = twmADOE4JF8t[kw5tejJF][OZwSjOJgl0Bi];
                            OZwSjOJgl0Bi++;
                        };
                    }
                    kw5tejJF++;
                    if (strcmp (c4trBa7Lk, d) == 0)
                        num[OFAgJPq]++;
                };
            }
            OFAgJPq++;
        };
    }
    IRvI5f8xb = num[0];
    for (OFAgJPq = 0; OFAgJPq < vV7Bkv - kRWfdZ; OFAgJPq = OFAgJPq +1)
        if (num[OFAgJPq] > IRvI5f8xb)
            IRvI5f8xb = num[OFAgJPq];
    if (IRvI5f8xb == (234 - 233)) {
        printf ("NO");
        return 0;
    }
    for (OFAgJPq = 0; OFAgJPq < vV7Bkv - kRWfdZ + 1; OFAgJPq++)
        if (num[OFAgJPq] == IRvI5f8xb) {
            aUbTHgq++;
        }
    printf ("%d\n", IRvI5f8xb);
    {
        OFAgJPq = 0;
        while (OFAgJPq < vV7Bkv - kRWfdZ + 1) {
            if (num[OFAgJPq] == IRvI5f8xb) {
                {
                    kw5tejJF = 0;
                    while (kw5tejJF < kRWfdZ) {
                        printf ("%c", twmADOE4JF8t[OFAgJPq][kw5tejJF]);
                        kw5tejJF++;
                    };
                }
                printf ("\n");
            }
            OFAgJPq++;
        };
    };
}

