void  main () {
    float yJGAMboY9BOT [300];
    float iaiLIUQ5WP;
    float ave;
    float L2alcM;
    float TAYuxQvg5aEk;
    float pTa5w2H6flhx;
    float k2;
    int d1rvTdOlZ;
    int IpyMCWfSL;
    int OKkyGz4qPo;
    int ucBm0Kk3CSR5;
    ucBm0Kk3CSR5 = 0;
    iaiLIUQ5WP = 0;
    scanf ("%d", &d1rvTdOlZ);
    {
        IpyMCWfSL = 210 - 210;
        while (IpyMCWfSL <= d1rvTdOlZ - (187 - 186)) {
            scanf ("%f", &yJGAMboY9BOT[IpyMCWfSL]);
            IpyMCWfSL = IpyMCWfSL +1;
        };
    }
    {
        IpyMCWfSL = 0;
        while (IpyMCWfSL <= d1rvTdOlZ - 1) {
            iaiLIUQ5WP = iaiLIUQ5WP + yJGAMboY9BOT[IpyMCWfSL];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            IpyMCWfSL = IpyMCWfSL +1;
        };
    }
    ave = iaiLIUQ5WP / d1rvTdOlZ;
    {
        IpyMCWfSL = 0;
        while (IpyMCWfSL <= d1rvTdOlZ - 1) {
            {
                OKkyGz4qPo = 0;
                while (d1rvTdOlZ - 1 >= OKkyGz4qPo) {
                    if (yJGAMboY9BOT[OKkyGz4qPo] < yJGAMboY9BOT[IpyMCWfSL])
                        break;
                    OKkyGz4qPo = OKkyGz4qPo +1;
                };
            }
            if (!(d1rvTdOlZ != OKkyGz4qPo)) {
                ucBm0Kk3CSR5 = 1;
                pTa5w2H6flhx = ave - yJGAMboY9BOT[IpyMCWfSL];
                L2alcM = yJGAMboY9BOT[IpyMCWfSL];
            }
            if (!(1 != ucBm0Kk3CSR5))
                break;
            IpyMCWfSL = IpyMCWfSL +1;
        };
    }
    ucBm0Kk3CSR5 = 0;
    {
        IpyMCWfSL = 0;
        while (IpyMCWfSL <= d1rvTdOlZ - 1) {
            {
                OKkyGz4qPo = 0;
                while (OKkyGz4qPo <= d1rvTdOlZ - 1) {
                    if (yJGAMboY9BOT[OKkyGz4qPo] > yJGAMboY9BOT[IpyMCWfSL])
                        break;
                    OKkyGz4qPo++;
                };
            }
            if (OKkyGz4qPo == d1rvTdOlZ) {
                ucBm0Kk3CSR5 = 1;
                k2 = yJGAMboY9BOT[IpyMCWfSL] - ave;
                TAYuxQvg5aEk = yJGAMboY9BOT[IpyMCWfSL];
            }
            if (ucBm0Kk3CSR5 == 1)
                break;
            IpyMCWfSL++;
        };
    }
    if (pTa5w2H6flhx > k2)
        printf ("%.0f", L2alcM);
    else {
        if (pTa5w2H6flhx < k2)
            printf ("%.0f", TAYuxQvg5aEk);
        else
            printf ("%.0f,%.0f", L2alcM, TAYuxQvg5aEk);
    };
}

