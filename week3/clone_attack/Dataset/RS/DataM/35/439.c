void  main () {
    void  flag (int QjhwlgP [] [(646 - 638)], int CaMf2NhuSR, int ZdWI97);
    int CaMf2NhuSR;
    int ZdWI97;
    int YzdfTKCj02Xc;
    int AKb2H3SIR4e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int a [(624 - 616)] [(906 - 898)];
    scanf ("%d,%d", &CaMf2NhuSR, &ZdWI97);
    {
        YzdfTKCj02Xc = 860 - 860;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CaMf2NhuSR > YzdfTKCj02Xc) {
            {
                AKb2H3SIR4e = 397 - 397;
                while (ZdWI97 > AKb2H3SIR4e) {
                    scanf ("%d", &a[YzdfTKCj02Xc][AKb2H3SIR4e]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    AKb2H3SIR4e = AKb2H3SIR4e +1;
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
            YzdfTKCj02Xc = YzdfTKCj02Xc +1;
        };
    }
    flag (a, CaMf2NhuSR, ZdWI97);
}

void  flag (int QjhwlgP [] [(823 - 815)], int CaMf2NhuSR, int ZdWI97) {
    int YzdfTKCj02Xc, AKb2H3SIR4e, uTys5ma3YF = (731 - 731);
    int max [8];
    int rmax [8];
    int xAU9PMra [8];
    int min [8];
    int rmin [8];
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
    int cmin [8];
    {
        YzdfTKCj02Xc = 297 - 297;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (YzdfTKCj02Xc < CaMf2NhuSR) {
            max[YzdfTKCj02Xc] = QjhwlgP[YzdfTKCj02Xc][0];
            {
                AKb2H3SIR4e = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (AKb2H3SIR4e < ZdWI97) {
                    if (QjhwlgP[YzdfTKCj02Xc][AKb2H3SIR4e] >= max[YzdfTKCj02Xc]) {
                        max[YzdfTKCj02Xc] = QjhwlgP[YzdfTKCj02Xc][AKb2H3SIR4e];
                        xAU9PMra[YzdfTKCj02Xc] = AKb2H3SIR4e;
                    }
                    AKb2H3SIR4e = AKb2H3SIR4e +1;
                };
            }
            rmax[YzdfTKCj02Xc] = YzdfTKCj02Xc;
            YzdfTKCj02Xc = YzdfTKCj02Xc +1;
        };
    }
    {
        AKb2H3SIR4e = 0;
        while (AKb2H3SIR4e < ZdWI97) {
            min[AKb2H3SIR4e] = QjhwlgP[0][AKb2H3SIR4e];
            {
                YzdfTKCj02Xc = 0;
                while (YzdfTKCj02Xc < CaMf2NhuSR) {
                    if (QjhwlgP[YzdfTKCj02Xc][AKb2H3SIR4e] <= min[AKb2H3SIR4e]) {
                        min[AKb2H3SIR4e] = QjhwlgP[YzdfTKCj02Xc][AKb2H3SIR4e];
                        rmin[AKb2H3SIR4e] = YzdfTKCj02Xc;
                    }
                    YzdfTKCj02Xc++;
                };
            }
            cmin[AKb2H3SIR4e] = AKb2H3SIR4e;
            AKb2H3SIR4e = AKb2H3SIR4e +1;
        };
    }
    if (CaMf2NhuSR <= ZdWI97) {
        YzdfTKCj02Xc = 0;
        while (YzdfTKCj02Xc < CaMf2NhuSR) {
            {
                AKb2H3SIR4e = 0;
                while (AKb2H3SIR4e < ZdWI97) {
                    if ((rmax[YzdfTKCj02Xc] == rmin[AKb2H3SIR4e]) && (xAU9PMra[YzdfTKCj02Xc] == cmin[AKb2H3SIR4e])) {
                        uTys5ma3YF = uTys5ma3YF + 1;
                        printf ("%d+%d", rmax[YzdfTKCj02Xc], xAU9PMra[YzdfTKCj02Xc]);
                    }
                    AKb2H3SIR4e = AKb2H3SIR4e +1;
                };
            }
            YzdfTKCj02Xc++;
        };
    }
    if (uTys5ma3YF == 0)
        ;
}

