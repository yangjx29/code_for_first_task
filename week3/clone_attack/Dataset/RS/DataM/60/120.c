void  main () {
    int zcnyeNBJ;
    int NoyWn8;
    int k;
    int rCGFSsJaXH;
    int test;
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
    int ZPSXTEjOF;
    test = 0;
    scanf ("%d", &ZPSXTEjOF);
    {
        NoyWn8 = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZPSXTEjOF >= NoyWn8) {
            k = sqrt (NoyWn8);
            for (zcnyeNBJ = 2; zcnyeNBJ <= k; zcnyeNBJ++)
                if (NoyWn8 % zcnyeNBJ == 0)
                    break;
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
            if (zcnyeNBJ > k) {
                rCGFSsJaXH = NoyWn8 +2;
                k = sqrt (rCGFSsJaXH);
                {
                    zcnyeNBJ = 2;
                    while (zcnyeNBJ <= k) {
                        if (rCGFSsJaXH % zcnyeNBJ == 0)
                            break;
                        zcnyeNBJ++;
                    };
                }
                if (zcnyeNBJ > k && rCGFSsJaXH <= ZPSXTEjOF) {
                    test = 1;
                    printf ("%d %d\n", NoyWn8, rCGFSsJaXH);
                };
            }
            NoyWn8++;
        };
    }
    if (test == 0)
        ;
}

