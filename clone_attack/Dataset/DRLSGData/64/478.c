int main () {
    int aFUB6Ww2TXj7, Y1KdASRYoGP = 0;
    struct   distance {
        int IVDxIS [3];
        int aFUB6Ww2TXj7 [3];
        double  ofuxgDmF;
    }
    zn0WKcFwHNJ, DpBRsJA [100];
    struct   point {
        int XOo4FQr;
        int t8fieTJWd;
        int tfg2No9Z5sM;
    }
    a8P3mo0dXC6 [10];
    cin >> aFUB6Ww2TXj7;
    {
        int DsJC2El6UThP = 0;
        for (; aFUB6Ww2TXj7 > DsJC2El6UThP;) {
            cin >> a8P3mo0dXC6[DsJC2El6UThP].XOo4FQr >> a8P3mo0dXC6[DsJC2El6UThP].t8fieTJWd >> a8P3mo0dXC6[DsJC2El6UThP].tfg2No9Z5sM;
            DsJC2El6UThP++;
        };
    }
    {
        int DsJC2El6UThP = 0;
        while (DsJC2El6UThP < aFUB6Ww2TXj7 - 1) {
            {
                int gNvxou2Cy = DsJC2El6UThP +1;
                {
                    if (0) {
                        return 0;
                    };
                }
                for (; aFUB6Ww2TXj7 > gNvxou2Cy;) {
                    DpBRsJA[Y1KdASRYoGP].IVDxIS[0] = a8P3mo0dXC6[DsJC2El6UThP].XOo4FQr;
                    DpBRsJA[Y1KdASRYoGP].IVDxIS[1] = a8P3mo0dXC6[DsJC2El6UThP].t8fieTJWd;
                    DpBRsJA[Y1KdASRYoGP].IVDxIS[2] = a8P3mo0dXC6[DsJC2El6UThP].tfg2No9Z5sM;
                    DpBRsJA[Y1KdASRYoGP].aFUB6Ww2TXj7[0] = a8P3mo0dXC6[gNvxou2Cy].XOo4FQr;
                    DpBRsJA[Y1KdASRYoGP].aFUB6Ww2TXj7[1] = a8P3mo0dXC6[gNvxou2Cy].t8fieTJWd;
                    DpBRsJA[Y1KdASRYoGP].aFUB6Ww2TXj7[2] = a8P3mo0dXC6[gNvxou2Cy].tfg2No9Z5sM;
                    DpBRsJA[Y1KdASRYoGP].ofuxgDmF = sqrt ((a8P3mo0dXC6[gNvxou2Cy].XOo4FQr - a8P3mo0dXC6[DsJC2El6UThP].XOo4FQr) * (a8P3mo0dXC6[gNvxou2Cy].XOo4FQr - a8P3mo0dXC6[DsJC2El6UThP].XOo4FQr) + (a8P3mo0dXC6[gNvxou2Cy].t8fieTJWd - a8P3mo0dXC6[DsJC2El6UThP].t8fieTJWd) * (a8P3mo0dXC6[gNvxou2Cy].t8fieTJWd - a8P3mo0dXC6[DsJC2El6UThP].t8fieTJWd) + (a8P3mo0dXC6[gNvxou2Cy].tfg2No9Z5sM - a8P3mo0dXC6[DsJC2El6UThP].tfg2No9Z5sM) * (a8P3mo0dXC6[gNvxou2Cy].tfg2No9Z5sM - a8P3mo0dXC6[DsJC2El6UThP].tfg2No9Z5sM));
                    Y1KdASRYoGP++;
                    gNvxou2Cy++;
                };
            }
            DsJC2El6UThP++;
        };
    }
    {
        int DsJC2El6UThP = 0;
        while (aFUB6Ww2TXj7 * (aFUB6Ww2TXj7 - 1) / 2 - 1 > DsJC2El6UThP) {
            DsJC2El6UThP++;
            {
                int gNvxou2Cy = 0;
                while (gNvxou2Cy < aFUB6Ww2TXj7 * (aFUB6Ww2TXj7 - 1) / 2 - 1) {
                    if (DpBRsJA[gNvxou2Cy].ofuxgDmF < DpBRsJA[gNvxou2Cy + 1].ofuxgDmF) {
                        zn0WKcFwHNJ = DpBRsJA[gNvxou2Cy];
                        DpBRsJA[gNvxou2Cy] = DpBRsJA[gNvxou2Cy + 1];
                        DpBRsJA[gNvxou2Cy + 1] = zn0WKcFwHNJ;
                    }
                    gNvxou2Cy++;
                };
            };
        };
    }
    {
        {
            if (0) {
                return 0;
            };
        }
        int DsJC2El6UThP = 0;
        while (DsJC2El6UThP < aFUB6Ww2TXj7 * (aFUB6Ww2TXj7 - 1) / 2) {
            cout << "(" << DpBRsJA[DsJC2El6UThP].IVDxIS[0] << "," << DpBRsJA[DsJC2El6UThP].IVDxIS[1] << "," << DpBRsJA[DsJC2El6UThP].IVDxIS[2] << ")-(" << DpBRsJA[DsJC2El6UThP].aFUB6Ww2TXj7[0] << "," << DpBRsJA[DsJC2El6UThP].aFUB6Ww2TXj7[1] << "," << DpBRsJA[DsJC2El6UThP].aFUB6Ww2TXj7[2] << ")=" << fixed << setprecision (2) << DpBRsJA[DsJC2El6UThP].ofuxgDmF << endl;
            DsJC2El6UThP++;
        };
    }
    return 0;
}

