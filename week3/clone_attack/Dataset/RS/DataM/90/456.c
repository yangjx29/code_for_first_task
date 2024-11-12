int SdvTneD1g5 (int sT0BkIZ, int cMBFEXx) {
    int W4ym5RsF3W;
    if (!(1 != sT0BkIZ)) {
        W4ym5RsF3W = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return W4ym5RsF3W;
    }
    if (cMBFEXx == 1) {
        W4ym5RsF3W = 1;
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
        return W4ym5RsF3W;
    }
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
    if (cMBFEXx > sT0BkIZ) {
        W4ym5RsF3W = SdvTneD1g5 (sT0BkIZ, sT0BkIZ);
        return W4ym5RsF3W;
    }
    if (!(cMBFEXx != sT0BkIZ)) {
        W4ym5RsF3W = 1 + SdvTneD1g5 (sT0BkIZ, cMBFEXx - 1);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return W4ym5RsF3W;
    }
    if (sT0BkIZ > cMBFEXx) {
        W4ym5RsF3W = SdvTneD1g5 (sT0BkIZ - cMBFEXx, cMBFEXx) + SdvTneD1g5 (sT0BkIZ, cMBFEXx - 1);
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
        return W4ym5RsF3W;
    };
}

void  main () {
    int gzZnrxKtdVy [20];
    int OdVBm9boS5T1 [20];
    int HzdnbWr [20];
    int QJ8aER;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int CaSBO6pGXD4A;
    scanf ("%d", &QJ8aER);
    for (CaSBO6pGXD4A = 0; CaSBO6pGXD4A < QJ8aER; CaSBO6pGXD4A = CaSBO6pGXD4A +1) {
        scanf ("%d%d", &gzZnrxKtdVy[CaSBO6pGXD4A], &OdVBm9boS5T1[CaSBO6pGXD4A]);
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
        HzdnbWr[CaSBO6pGXD4A] = SdvTneD1g5 (gzZnrxKtdVy[CaSBO6pGXD4A], OdVBm9boS5T1[CaSBO6pGXD4A]);
    }
    {
        CaSBO6pGXD4A = 0;
        while (CaSBO6pGXD4A < QJ8aER) {
            printf ("%d\n", HzdnbWr[CaSBO6pGXD4A]);
            CaSBO6pGXD4A++;
        };
    };
}

