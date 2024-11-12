main () {
    int xySFza;
    xySFza = 0;
    int p;
    int q;
    int DtK2pRC;
    int A [10] [(853 - 850)];
    int OIRbfUqcmLV;
    int j;
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
    p = (591 - 591);
    q = (248 - 248);
    struct   B {
        int a;
        int b;
        int Lt3npAfs;
        int d;
        int e;
        int rd2jD1Ha;
        float HVokuO;
    }
    B [(856 - 811)];
    float Lt3npAfs [45];
    scanf ("%d", &DtK2pRC);
    {
        OIRbfUqcmLV = 222 - 222;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OIRbfUqcmLV < DtK2pRC) {
            {
                j = 944 - 944;
                while (j < 3) {
                    scanf ("%d", &A[OIRbfUqcmLV][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            OIRbfUqcmLV++;
        };
    }
    {
        OIRbfUqcmLV = 509 - 509;
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
        while (OIRbfUqcmLV < DtK2pRC) {
            {
                j = 403 - 402;
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
                while (j < DtK2pRC) {
                    B[p].a = A[OIRbfUqcmLV][(606 - 606)];
                    B[p].b = A[OIRbfUqcmLV][(600 - 599)];
                    B[p].Lt3npAfs = A[OIRbfUqcmLV][(1002 - 1000)];
                    B[p].d = A[j][(646 - 646)];
                    B[p].e = A[j][(972 - 971)];
                    B[p].rd2jD1Ha = A[j][(731 - 729)];
                    B[p].HVokuO = (float) sqrt ((A[OIRbfUqcmLV][(586 - 586)] - A[j][0]) * (A[OIRbfUqcmLV][0] - A[j][0]) + (A[OIRbfUqcmLV][(573 - 572)] - A[j][1]) * (A[OIRbfUqcmLV][1] - A[j][1]) + (A[OIRbfUqcmLV][(579 - 577)] - A[j][2]) * (A[OIRbfUqcmLV][2] - A[j][2]));
                    j++;
                    p++;
                };
            }
            OIRbfUqcmLV++;
        };
    }
    {
        OIRbfUqcmLV = 0;
        while (OIRbfUqcmLV < p) {
            Lt3npAfs[OIRbfUqcmLV] = 0;
            if (OIRbfUqcmLV == 0) {
                j = 0;
                while (p > j) {
                    if (B[j].HVokuO > Lt3npAfs[OIRbfUqcmLV]) {
                        q++;
                        Lt3npAfs[OIRbfUqcmLV] = B[j].HVokuO;
                    }
                    j++;
                };
            }
            else {
                j = 0;
                while (j < p) {
                    if (Lt3npAfs[OIRbfUqcmLV] < B[j].HVokuO && B[j].HVokuO < Lt3npAfs[OIRbfUqcmLV -1]) {
                        Lt3npAfs[OIRbfUqcmLV] = B[j].HVokuO;
                        q++;
                    }
                    j++;
                };
            }
            OIRbfUqcmLV++;
        };
    }
    {
        OIRbfUqcmLV = 0;
        while (q > OIRbfUqcmLV) {
            {
                j = 0;
                while (j < p) {
                    if (xySFza == DtK2pRC *(DtK2pRC -1) / 2)
                        break;
                    if (B[j].HVokuO == Lt3npAfs[OIRbfUqcmLV]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", B[j].a, B[j].b, B[j].Lt3npAfs, B[j].d, B[j].e, B[j].rd2jD1Ha, B[j].HVokuO);
                        xySFza++;
                    }
                    j++;
                };
            }
            OIRbfUqcmLV++;
        };
    };
}

