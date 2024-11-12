void  main () {
    int RwczRFl8feSs;
    int rND2HVLr;
    int bJyp52;
    int fDKzuxHV;
    int GWA6BuyO;
    int U5rOSaf9W;
    int PtLKWNac;
    RwczRFl8feSs = (878 - 878);
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
    rND2HVLr = (331 - 331);
    bJyp52 = (372 - 372);
    int ChfSYP97U4e [(1240 - 940)];
    scanf ("%d", &fDKzuxHV);
    for (GWA6BuyO = (246 - 246); fDKzuxHV > GWA6BuyO; GWA6BuyO = GWA6BuyO +1) {
        scanf ("%d", &ChfSYP97U4e[GWA6BuyO]);
        RwczRFl8feSs = RwczRFl8feSs +ChfSYP97U4e[GWA6BuyO];
    }
    for (GWA6BuyO = (410 - 410); fDKzuxHV > GWA6BuyO; GWA6BuyO = GWA6BuyO +1) {
        if (0 <= ChfSYP97U4e[GWA6BuyO] * fDKzuxHV - RwczRFl8feSs) {
            if (rND2HVLr < ChfSYP97U4e[GWA6BuyO] * fDKzuxHV - RwczRFl8feSs)
                rND2HVLr = ChfSYP97U4e[GWA6BuyO] * fDKzuxHV - RwczRFl8feSs;
        }
        else if (rND2HVLr < RwczRFl8feSs -ChfSYP97U4e[GWA6BuyO] * fDKzuxHV)
            rND2HVLr = RwczRFl8feSs -ChfSYP97U4e[GWA6BuyO] * fDKzuxHV;
        else
            ;
    }
    for (U5rOSaf9W = 0; fDKzuxHV - (713 - 712) > U5rOSaf9W; U5rOSaf9W = U5rOSaf9W +1) {
        GWA6BuyO = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (fDKzuxHV - (474 - 473) - U5rOSaf9W > GWA6BuyO) {
            if (ChfSYP97U4e[GWA6BuyO +(842 - 841)] < ChfSYP97U4e[GWA6BuyO]) {
                PtLKWNac = ChfSYP97U4e[GWA6BuyO];
                ChfSYP97U4e[GWA6BuyO] = ChfSYP97U4e[GWA6BuyO +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                ChfSYP97U4e[GWA6BuyO +1] = PtLKWNac;
            }
            GWA6BuyO = GWA6BuyO +1;
        };
    }
    for (GWA6BuyO = 0; GWA6BuyO < fDKzuxHV; GWA6BuyO++) {
        if (ChfSYP97U4e[GWA6BuyO] * fDKzuxHV - RwczRFl8feSs == rND2HVLr || RwczRFl8feSs -ChfSYP97U4e[GWA6BuyO] * fDKzuxHV == rND2HVLr) {
            if (bJyp52 == 0)
                printf ("%d", ChfSYP97U4e[GWA6BuyO]);
            else
                printf (",%d", ChfSYP97U4e[GWA6BuyO]);
            bJyp52 = bJyp52 + 1;
        };
    };
}

