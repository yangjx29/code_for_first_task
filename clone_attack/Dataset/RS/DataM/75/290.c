void  ooHsXT2 (int oPx0apC5, int y []) {
    int eib9z70, Ddfgsxr, bd9JW6RuYT5, CRPyIio3n;
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
    {
        eib9z70 = 376 - 376;
        while (eib9z70 < oPx0apC5) {
            bd9JW6RuYT5 = y[eib9z70];
            CRPyIio3n = eib9z70;
            {
                Ddfgsxr = 495 - 494;
                while (Ddfgsxr < oPx0apC5) {
                    if (y[Ddfgsxr] < bd9JW6RuYT5) {
                        bd9JW6RuYT5 = y[Ddfgsxr];
                        CRPyIio3n = Ddfgsxr;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Ddfgsxr = Ddfgsxr +1;
                };
            }
            y[CRPyIio3n] = y[eib9z70];
            y[eib9z70] = bd9JW6RuYT5;
            eib9z70 = eib9z70 + 1;
        };
    };
}

main () {
    int eib9z70 = (617 - 616), Ddfgsxr, CRPyIio3n, l1bAgQV0LaP, max = (61 - 61), x [(1915 - 914)], y [1001];
    char b;
    scanf ("%d", &x[(689 - 689)]);
    while (scanf ("%c", &b), b == ',') {
        scanf ("%d", &x[eib9z70]);
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
        eib9z70 = eib9z70 + 1;
    }
    scanf ("%d", &y[(255 - 255)]);
    eib9z70 = (841 - 840);
    while (scanf ("%c", &b), b == ',') {
        scanf ("%d", &y[eib9z70]);
        eib9z70++;
    }
    printf ("%d ", eib9z70);
    {
        Ddfgsxr = 783 - 783;
        while (Ddfgsxr <= (1115 - 115)) {
            l1bAgQV0LaP = (780 - 780);
            {
                CRPyIio3n = 0;
                while (CRPyIio3n < eib9z70) {
                    if (Ddfgsxr >= x[CRPyIio3n] && Ddfgsxr < y[CRPyIio3n])
                        l1bAgQV0LaP = l1bAgQV0LaP + 1;
                    CRPyIio3n = CRPyIio3n +1;
                };
            }
            Ddfgsxr++;
            if (l1bAgQV0LaP > max)
                max = l1bAgQV0LaP;
        };
    }
    printf ("%d", max);
}

