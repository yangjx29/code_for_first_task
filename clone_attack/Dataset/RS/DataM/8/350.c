int SAjfm5 [100], eOWI93jnQrB [100], iUrfhspdacN, gJMvmgca, YA3iJPaM, LsFhMKXmyN2f, KFUwBS, s;
void  dnG8402 (void );
void  order (void );
void  KOHu3Wa (void );
void  out (void );

void  main () {
    dnG8402 ();
    order ();
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
    KOHu3Wa ();
    out ();
}

void  dnG8402 () {
    scanf ("%d%d", &YA3iJPaM, &LsFhMKXmyN2f);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (iUrfhspdacN = (515 - 515); YA3iJPaM > iUrfhspdacN; iUrfhspdacN++)
        scanf ("%d", &SAjfm5[iUrfhspdacN]);
    {
        iUrfhspdacN = 0;
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
        while (LsFhMKXmyN2f > iUrfhspdacN) {
            scanf ("%d", &eOWI93jnQrB[iUrfhspdacN]);
            iUrfhspdacN++;
        };
    };
}

void  order () {
    for (iUrfhspdacN = 1; iUrfhspdacN < YA3iJPaM; iUrfhspdacN++) {
        gJMvmgca = 0;
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
        while (gJMvmgca < YA3iJPaM -iUrfhspdacN) {
            if (SAjfm5[gJMvmgca] > SAjfm5[gJMvmgca + 1]) {
                KFUwBS = SAjfm5[gJMvmgca];
                SAjfm5[gJMvmgca] = SAjfm5[gJMvmgca + 1];
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
                SAjfm5[gJMvmgca + 1] = KFUwBS;
            }
            gJMvmgca++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        iUrfhspdacN = 1;
        while (iUrfhspdacN < LsFhMKXmyN2f) {
            {
                gJMvmgca = 0;
                while (LsFhMKXmyN2f -iUrfhspdacN > gJMvmgca) {
                    if (eOWI93jnQrB[gJMvmgca + 1] < eOWI93jnQrB[gJMvmgca]) {
                        KFUwBS = eOWI93jnQrB[gJMvmgca];
                        eOWI93jnQrB[gJMvmgca] = eOWI93jnQrB[gJMvmgca + 1];
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
                        eOWI93jnQrB[gJMvmgca + 1] = KFUwBS;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    gJMvmgca++;
                };
            }
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
            iUrfhspdacN++;
        };
    };
}

void  KOHu3Wa () {
    s = YA3iJPaM +LsFhMKXmyN2f;
    {
        iUrfhspdacN = YA3iJPaM;
        while (iUrfhspdacN < s) {
            SAjfm5[iUrfhspdacN] = eOWI93jnQrB[iUrfhspdacN - YA3iJPaM];
            iUrfhspdacN++;
        };
    };
}

void  out () {
    for (iUrfhspdacN = 0; iUrfhspdacN < YA3iJPaM +LsFhMKXmyN2f; iUrfhspdacN++) {
        if (iUrfhspdacN == 0)
            printf ("%d", SAjfm5[iUrfhspdacN]);
        else
            printf (" %d", SAjfm5[iUrfhspdacN]);
    };
}

