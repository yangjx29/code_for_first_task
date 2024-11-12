struct   twopoint {
    float adhvVCncER7K [(297 - 294)], a2 [(738 - 735)], c;
}
b [(711 - 666)];
float eVfan1B6ghA [10] [3];

int jeE0Drs2BZ (float b [], int jKNpbl4) {
    int X93AIFLge;
    int uf2SiLFKA;
    int c;
    for (X93AIFLge = (900 - 900); jKNpbl4 > X93AIFLge; X93AIFLge = X93AIFLge +1) {
        c = (753 - 753);
        for (uf2SiLFKA = (594 - 594); 3 > uf2SiLFKA; uf2SiLFKA = uf2SiLFKA + 1)
            if (!(eVfan1B6ghA[X93AIFLge][uf2SiLFKA] != b[uf2SiLFKA]))
                c = c + 1;
        if (c == 3)
            return (X93AIFLge);
    };
}

void  NzmBg8Y7axed (struct   twopoint b [], int jKNpbl4, int iFE8WxjCsY2k) {
    float H4zQcfnbE [4];
    int X93AIFLge, uf2SiLFKA, IcjPD39ExRm1, c5kpSLu, yGfo8dTm;
    struct   twopoint temp;
    for (X93AIFLge = (419 - 419); jKNpbl4 > X93AIFLge; X93AIFLge = X93AIFLge +1) {
        H4zQcfnbE[3] = (826 - 826);
        {
            uf2SiLFKA = 694 - 694;
            while (3 > uf2SiLFKA) {
                H4zQcfnbE[uf2SiLFKA] = b[X93AIFLge].adhvVCncER7K[uf2SiLFKA] - b[X93AIFLge].a2[uf2SiLFKA];
                H4zQcfnbE[uf2SiLFKA] = H4zQcfnbE[uf2SiLFKA] * H4zQcfnbE[uf2SiLFKA];
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
                H4zQcfnbE[3] += H4zQcfnbE[uf2SiLFKA];
                uf2SiLFKA = uf2SiLFKA + 1;
            };
        }
        b[X93AIFLge].c = sqrt (H4zQcfnbE[3]);
    }
    for (X93AIFLge = 0; X93AIFLge < jKNpbl4 - 1; X93AIFLge = X93AIFLge +1) {
        IcjPD39ExRm1 = X93AIFLge;
        for (uf2SiLFKA = X93AIFLge +1; jKNpbl4 > uf2SiLFKA; uf2SiLFKA = uf2SiLFKA + 1)
            if (b[IcjPD39ExRm1].c < b[uf2SiLFKA].c)
                IcjPD39ExRm1 = uf2SiLFKA;
            else {
                if (b[uf2SiLFKA].c == b[IcjPD39ExRm1].c) {
                    c5kpSLu = jeE0Drs2BZ (b[uf2SiLFKA].adhvVCncER7K, iFE8WxjCsY2k);
                    yGfo8dTm = jeE0Drs2BZ (b[IcjPD39ExRm1].adhvVCncER7K, iFE8WxjCsY2k);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (c5kpSLu < yGfo8dTm)
                        IcjPD39ExRm1 = uf2SiLFKA;
                    if (c5kpSLu == yGfo8dTm) {
                        c5kpSLu = jeE0Drs2BZ (b[uf2SiLFKA].a2, iFE8WxjCsY2k);
                        yGfo8dTm = jeE0Drs2BZ (b[IcjPD39ExRm1].a2, iFE8WxjCsY2k);
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
                        }
                        if (c5kpSLu < yGfo8dTm)
                            IcjPD39ExRm1 = uf2SiLFKA;
                    };
                };
            }
        if (!(X93AIFLge == IcjPD39ExRm1)) {
            temp = b[IcjPD39ExRm1];
            b[IcjPD39ExRm1] = b[X93AIFLge];
            b[X93AIFLge] = temp;
        };
    };
}

main () {
    int zQCUeAwROLq, cbC9fUlEtY1N, X93AIFLge, uf2SiLFKA, IcjPD39ExRm1, l = 0, urJF8uGxg4;
    scanf ("%d", &zQCUeAwROLq);
    IcjPD39ExRm1 = (zQCUeAwROLq - 1) * zQCUeAwROLq / (971 - 969);
    cbC9fUlEtY1N = zQCUeAwROLq;
    for (X93AIFLge = 0; X93AIFLge < zQCUeAwROLq; X93AIFLge = X93AIFLge +1) {
        uf2SiLFKA = 0;
        while (uf2SiLFKA < 3) {
            scanf ("%f", &eVfan1B6ghA[X93AIFLge][uf2SiLFKA]);
            uf2SiLFKA = uf2SiLFKA + 1;
        };
    }
    X93AIFLge = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    while (--cbC9fUlEtY1N > 0) {
        urJF8uGxg4 = l;
        for (; l < urJF8uGxg4 + cbC9fUlEtY1N; l = l + 1)
            for (uf2SiLFKA = 0; uf2SiLFKA < 3; uf2SiLFKA = uf2SiLFKA + 1)
                b[l].adhvVCncER7K[uf2SiLFKA] = eVfan1B6ghA[X93AIFLge][uf2SiLFKA];
        X93AIFLge = X93AIFLge +1;
    }
    cbC9fUlEtY1N = zQCUeAwROLq;
    l = 0;
    X93AIFLge = 0;
    while (--cbC9fUlEtY1N > 0) {
        X93AIFLge = X93AIFLge +1;
        urJF8uGxg4 = l;
        for (; l < urJF8uGxg4 + cbC9fUlEtY1N; l = l + 1)
            for (uf2SiLFKA = 0; uf2SiLFKA < 3; uf2SiLFKA = uf2SiLFKA + 1)
                b[l].a2[uf2SiLFKA] = eVfan1B6ghA[l - urJF8uGxg4 + X93AIFLge][uf2SiLFKA];
    }
    NzmBg8Y7axed (b, IcjPD39ExRm1, zQCUeAwROLq);
    {
        X93AIFLge = 0;
        while (X93AIFLge < IcjPD39ExRm1) {
            printf ("(%g,%g,%g)-(%g,%g,%g)=%0.2f\n", b[X93AIFLge].adhvVCncER7K[0], b[X93AIFLge].adhvVCncER7K[1], b[X93AIFLge].adhvVCncER7K[2], b[X93AIFLge].a2[0], b[X93AIFLge].a2[1], b[X93AIFLge].a2[2], b[X93AIFLge].c);
            X93AIFLge = X93AIFLge +1;
        };
    };
}

