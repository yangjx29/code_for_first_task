main () {
    char SCfltNqHYOa [100];
    int uthHd71Im [100], EFEMXmTg [100], JHGIDSA68PEr, YOWPvcdqoV7G = 0, tB8hQrDpmo5, IwCRyemS, sYOnH34GIU, S9RPlDt, CE8Yf1T3y;
    scanf ("%s", SCfltNqHYOa);
    IwCRyemS = strlen (SCfltNqHYOa);
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
        JHGIDSA68PEr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JHGIDSA68PEr <= IwCRyemS -1) {
            uthHd71Im[JHGIDSA68PEr] = SCfltNqHYOa[JHGIDSA68PEr] - '0';
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
            JHGIDSA68PEr++;
        };
    }
    S9RPlDt = uthHd71Im[0];
    if (2 <= IwCRyemS) {
        for (JHGIDSA68PEr = 0; JHGIDSA68PEr <= IwCRyemS -2; JHGIDSA68PEr++) {
            sYOnH34GIU = S9RPlDt *10 + uthHd71Im[JHGIDSA68PEr +1];
            S9RPlDt = sYOnH34GIU / 13;
            CE8Yf1T3y = sYOnH34GIU % 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            S9RPlDt = CE8Yf1T3y;
            EFEMXmTg[YOWPvcdqoV7G] = sYOnH34GIU / 13;
            YOWPvcdqoV7G++;
        }
        if (EFEMXmTg[0] == 0 && IwCRyemS > 2) {
            {
                tB8hQrDpmo5 = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (tB8hQrDpmo5 <= YOWPvcdqoV7G -1) {
                    printf ("%d", EFEMXmTg[tB8hQrDpmo5]);
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
                    tB8hQrDpmo5 = tB8hQrDpmo5 + 1;
                };
            }
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
            printf ("%d\n", CE8Yf1T3y);
        }
        if (EFEMXmTg[0] == 0 && IwCRyemS == 2) {
            printf ("%d\n", EFEMXmTg[0]);
            printf ("%d\n", CE8Yf1T3y);
        }
        if (EFEMXmTg[0] != 0) {
            for (tB8hQrDpmo5 = 0; tB8hQrDpmo5 <= YOWPvcdqoV7G -1; tB8hQrDpmo5 = tB8hQrDpmo5 + 1)
                printf ("%d", EFEMXmTg[tB8hQrDpmo5]);
            printf ("%d\n", CE8Yf1T3y);
            printf ("\n");
        };
    }
    if (IwCRyemS < 2) {
        printf ("%d\n", uthHd71Im[0]);
    };
}

