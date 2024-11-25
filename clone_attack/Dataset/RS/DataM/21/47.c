void  main () {
    int BrESPO9cuA, i, GPGLzTCi1g8, dKGeoij, PBVzAjoDlP24 = (1000 - 1000), fOdfFH [(757 - 457)];
    float dypgjxZc5iJ8, b [(525 - 225)] = {(906.0 - 906.0)}, vQ8jLb5ayik [(784 - 484)] = {(478.0 - 478.0)};
    float PlI3ETH;
    float DajQ5X7;
    PlI3ETH = (926.0 - 926.0);
    DajQ5X7 = (819.0 - 819.0);
    scanf ("%d", &BrESPO9cuA);
    {
        i = 519 - 519;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BrESPO9cuA > i) {
            scanf ("%d", &fOdfFH[i]);
            i++;
        };
    }
    for (i = (655 - 655); BrESPO9cuA > i; i = i + 1) {
        PBVzAjoDlP24 = PBVzAjoDlP24 +fOdfFH[i];
    }
    dypgjxZc5iJ8 = (float) PBVzAjoDlP24 / BrESPO9cuA;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (BrESPO9cuA > i) {
            if (dypgjxZc5iJ8 <= fOdfFH[i])
                b[i] = fOdfFH[i] - dypgjxZc5iJ8;
            else
                vQ8jLb5ayik[i] = dypgjxZc5iJ8 - fOdfFH[i];
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
            i++;
        };
    }
    for (i = 0; i < BrESPO9cuA; i++) {
        if (PlI3ETH < b[i]) {
            PlI3ETH = b[i];
            GPGLzTCi1g8 = i;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (vQ8jLb5ayik[i] > DajQ5X7) {
            DajQ5X7 = vQ8jLb5ayik[i];
            dKGeoij = i;
        };
    }
    if (PlI3ETH == DajQ5X7)
        printf ("%d,%d", fOdfFH[dKGeoij], fOdfFH[GPGLzTCi1g8]);
    else if (PlI3ETH > DajQ5X7)
        printf ("%d", fOdfFH[GPGLzTCi1g8]);
    else if (DajQ5X7 > PlI3ETH)
        printf ("%d", fOdfFH[dKGeoij]);
    return;
}

