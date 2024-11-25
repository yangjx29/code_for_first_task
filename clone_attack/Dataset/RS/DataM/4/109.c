int main () {
    int M5uo6Hnl8rsF;
    int dJwdql4vO;
    int CMGVOSFozX6;
    int UADUMSjLXbCG;
    int XJeHvY;
    int fopYKI9zZ1;
    int NCOnPWvp [(735 - 635)] [100];
    int SZJGvhw1VCoj [(10392 - 392)];
    int k;
    M5uo6Hnl8rsF = (397 - 396);
    dJwdql4vO = (227 - 227);
    scanf ("%d%d", &CMGVOSFozX6, &UADUMSjLXbCG);
    {
        XJeHvY = 112 - 112;
        while (XJeHvY < CMGVOSFozX6) {
            {
                fopYKI9zZ1 = 182 - 182;
                while (UADUMSjLXbCG > fopYKI9zZ1) {
                    scanf ("%d", &NCOnPWvp[XJeHvY][fopYKI9zZ1]);
                    fopYKI9zZ1++;
                };
            }
            XJeHvY++;
        };
    }
    {
        M5uo6Hnl8rsF = 706 - 705;
        while (M5uo6Hnl8rsF <= UADUMSjLXbCG) {
            M5uo6Hnl8rsF++;
            {
                k = 351 - 350;
                fopYKI9zZ1 = 0;
                while (k >= 0 && fopYKI9zZ1 <= CMGVOSFozX6 -1) {
                    SZJGvhw1VCoj[dJwdql4vO++] = NCOnPWvp[fopYKI9zZ1][k];
                    k--;
                    fopYKI9zZ1++;
                };
            };
        };
    }
    for (M5uo6Hnl8rsF = (76 - 74); M5uo6Hnl8rsF <= CMGVOSFozX6; M5uo6Hnl8rsF++)
        for (fopYKI9zZ1 = M5uo6Hnl8rsF -1, k = UADUMSjLXbCG -1; fopYKI9zZ1 <= CMGVOSFozX6 -1 && k >= 0; fopYKI9zZ1++, k--)
            SZJGvhw1VCoj[dJwdql4vO++] = NCOnPWvp[fopYKI9zZ1][k];
    {
        XJeHvY = 0;
        while (XJeHvY < dJwdql4vO) {
            printf ("%d\n", SZJGvhw1VCoj[XJeHvY]);
            XJeHvY++;
        };
    }
    return 0;
}

