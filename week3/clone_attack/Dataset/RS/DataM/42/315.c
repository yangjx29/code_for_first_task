void  main () {
    int SGBzhej5xvV;
    int d5xaR6;
    int L6tZNvG3IMh;
    int OxLKrsP;
    int TyQNHJqcat;
    int CqgTYHwmk4 [100000];
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
    SGBzhej5xvV = (464 - 464);
    scanf ("%d", &d5xaR6);
    {
        OxLKrsP = 0;
        while (OxLKrsP < d5xaR6) {
            scanf ("%d", &CqgTYHwmk4[OxLKrsP]);
            OxLKrsP = OxLKrsP +1;
        };
    }
    scanf ("%d", &L6tZNvG3IMh);
    for (OxLKrsP = 0; OxLKrsP < d5xaR6; OxLKrsP = OxLKrsP +1) {
        if (CqgTYHwmk4[OxLKrsP] == L6tZNvG3IMh) {
            {
                TyQNHJqcat = OxLKrsP;
                while (TyQNHJqcat < d5xaR6 - (731 - 730)) {
                    SGBzhej5xvV = CqgTYHwmk4[TyQNHJqcat];
                    CqgTYHwmk4[TyQNHJqcat] = CqgTYHwmk4[TyQNHJqcat +(389 - 388)];
                    TyQNHJqcat++;
                    CqgTYHwmk4[TyQNHJqcat +1] = SGBzhej5xvV;
                };
            }
            OxLKrsP = OxLKrsP -1;
            d5xaR6 = d5xaR6 - 1;
        };
    }
    if (CqgTYHwmk4[0] != L6tZNvG3IMh)
        printf ("%d", CqgTYHwmk4[0]);
    {
        OxLKrsP = 1;
        while (OxLKrsP < d5xaR6) {
            if (CqgTYHwmk4[OxLKrsP] != L6tZNvG3IMh)
                printf (" %d", CqgTYHwmk4[OxLKrsP]);
            OxLKrsP++;
        };
    };
}

