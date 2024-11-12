int f (int (*KCT7FB) [100], int cRKwTsGQ) {
    int H9qRcSO;
    int kfEeDHiAxF;
    int XO4hr0CUy3;
    int piokaEJ;
    piokaEJ = 0;
    {
        H9qRcSO = 0;
        while (cRKwTsGQ > H9qRcSO) {
            piokaEJ = **(KCT7FB +H9qRcSO);
            {
                {
                    kfEeDHiAxF = 1;
                    while (kfEeDHiAxF < cRKwTsGQ) {
                        if (piokaEJ > *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF))
                            piokaEJ = *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF);
                        kfEeDHiAxF = kfEeDHiAxF + 1;
                    }
                }
                {
                    kfEeDHiAxF = 0;
                    while (kfEeDHiAxF < cRKwTsGQ) {
                        *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF) = *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF) - piokaEJ;
                        kfEeDHiAxF = kfEeDHiAxF + 1;
                    }
                }
            }
            H9qRcSO = H9qRcSO +1;
        }
    }
    XO4hr0CUy3 = 0;
    {
        for (kfEeDHiAxF = 0; kfEeDHiAxF < cRKwTsGQ; kfEeDHiAxF = kfEeDHiAxF + 1) {
            piokaEJ = *(*KCT7FB+kfEeDHiAxF);
            {
                {
                    H9qRcSO = 1;
                    while (cRKwTsGQ > H9qRcSO) {
                        if (piokaEJ > *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF))
                            piokaEJ = *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF);
                        H9qRcSO = H9qRcSO +1;
                    }
                }
                for (H9qRcSO = 0; H9qRcSO < cRKwTsGQ; H9qRcSO = H9qRcSO +1)
                    *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF) = *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF) - piokaEJ;
                XO4hr0CUy3 = *(*(KCT7FB +1) + 1);
            }
        }
        {
            H9qRcSO = 1;
            while (H9qRcSO < cRKwTsGQ - 1) {
                *(*KCT7FB+H9qRcSO) = *(*KCT7FB+H9qRcSO+1);
                H9qRcSO = H9qRcSO +1;
            }
        }
        {
            H9qRcSO = 1;
            while (H9qRcSO < cRKwTsGQ - 1) {
                {
                    kfEeDHiAxF = 1;
                    while (kfEeDHiAxF < cRKwTsGQ - 1) {
                        *(*(KCT7FB +H9qRcSO) + kfEeDHiAxF) = *(*(KCT7FB +H9qRcSO+1) + kfEeDHiAxF + 1);
                        kfEeDHiAxF++;
                    }
                }
                H9qRcSO = H9qRcSO +1;
            }
        }
        {
            for (H9qRcSO = 1; cRKwTsGQ - 1 > H9qRcSO; H9qRcSO = H9qRcSO +1)
                **(KCT7FB +H9qRcSO) = **(KCT7FB +H9qRcSO+1);
        }
        return (XO4hr0CUy3);
    }
}

void  main () {
    int gmHZJGE0Pw;
    int cRKwTsGQ;
    int kfEeDHiAxF;
    int XO4hr0CUy3;
    int H9qRcSO;
    scanf ("%d", &cRKwTsGQ);
    XO4hr0CUy3 = 0;
    {
        gmHZJGE0Pw = 0;
        while (cRKwTsGQ > gmHZJGE0Pw) {
            gmHZJGE0Pw = gmHZJGE0Pw + 1;
            {
                H9qRcSO = 0;
                while (cRKwTsGQ > H9qRcSO) {
                    {
                        kfEeDHiAxF = 0;
                        while (cRKwTsGQ > kfEeDHiAxF) {
                            scanf ("%d", *(KCT7FB +gmHZJGE0Pw * cRKwTsGQ + H9qRcSO) + kfEeDHiAxF);
                            kfEeDHiAxF++;
                        }
                    }
                    H9qRcSO++;
                }
            }
        }
    }
    {
        gmHZJGE0Pw = 0;
        while (cRKwTsGQ > gmHZJGE0Pw) {
            gmHZJGE0Pw++;
            q = KCT7FB +gmHZJGE0Pw * cRKwTsGQ;
            XO4hr0CUy3 = 0;
            {
                for (H9qRcSO = cRKwTsGQ; H9qRcSO > 1; H9qRcSO = H9qRcSO -1)
                    XO4hr0CUy3 = XO4hr0CUy3 +f (q, H9qRcSO);
            }
            printf ("%d\n", XO4hr0CUy3);
        }
    }
    KCT7FB = (int (*) [100]) malloc (100 * sizeof (int) * 10000);
}

