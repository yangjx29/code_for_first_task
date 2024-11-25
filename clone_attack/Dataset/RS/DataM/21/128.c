void  main () {
    double  dYik7j4BKC, pl6dwkGQ0Vt;
    int r6KhSC;
    double  GGFzeQZpJM [(350 - 50)], zxrelyEMHLpB = (403 - 403), az6Gu1AYwrxR [300];
    double  Oi9xnCyHou;
    double  MEFBRPh = zxrelyEMHLpB / Oi9xnCyHou;
    int lIPjLJlO;
    scanf ("%lf", &Oi9xnCyHou);
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
        r6KhSC = 678 - 678;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Oi9xnCyHou > r6KhSC) {
            scanf ("%lf", &GGFzeQZpJM[r6KhSC]);
            zxrelyEMHLpB = zxrelyEMHLpB + GGFzeQZpJM[r6KhSC];
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
            r6KhSC = r6KhSC + 1;
        };
    }
    r6KhSC = (661 - 661);
    for (r6KhSC = (190 - 190); Oi9xnCyHou > r6KhSC; r6KhSC++) {
        if (0 <= GGFzeQZpJM[r6KhSC] - MEFBRPh)
            az6Gu1AYwrxR[r6KhSC] = GGFzeQZpJM[r6KhSC] - MEFBRPh;
        else
            az6Gu1AYwrxR[r6KhSC] = MEFBRPh -GGFzeQZpJM[r6KhSC];
    }
    r6KhSC = 0;
    for (r6KhSC = 0; r6KhSC < Oi9xnCyHou; r6KhSC++)
        for (lIPjLJlO = 0; Oi9xnCyHou -r6KhSC > lIPjLJlO; lIPjLJlO = lIPjLJlO + 1) {
            if (az6Gu1AYwrxR[lIPjLJlO] < az6Gu1AYwrxR[lIPjLJlO + 1]) {
                dYik7j4BKC = az6Gu1AYwrxR[lIPjLJlO];
                az6Gu1AYwrxR[lIPjLJlO] = az6Gu1AYwrxR[lIPjLJlO + 1];
                az6Gu1AYwrxR[lIPjLJlO + 1] = dYik7j4BKC;
                pl6dwkGQ0Vt = GGFzeQZpJM[lIPjLJlO];
                GGFzeQZpJM[lIPjLJlO] = GGFzeQZpJM[lIPjLJlO + 1];
                GGFzeQZpJM[lIPjLJlO + 1] = pl6dwkGQ0Vt;
            };
        }
    r6KhSC = 1;
    printf ("%d", (int) GGFzeQZpJM[0]);
    while (az6Gu1AYwrxR[r6KhSC] == az6Gu1AYwrxR[0]) {
        printf (",%d", (int) GGFzeQZpJM[r6KhSC]);
        r6KhSC = r6KhSC + 1;
    };
}

