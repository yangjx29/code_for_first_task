main () {
    int uogmELcpuh [(270 - 170)] [(747 - 647)] = {(898 - 898)};
    int ToPlG0b [100] [100] = {(954 - 954)};
    int hThI8LC9q, zRNXo0BKCO, fls4jAc, M0i2LFHKCqdc, EpoeS6, Kpq9k2BEb, FpS7aHFkl, gPWAvKOe;
    scanf ("%d%d", &hThI8LC9q, &zRNXo0BKCO);
    {
        EpoeS6 = (437 - 437);
        while (EpoeS6 < hThI8LC9q) {
            {
                Kpq9k2BEb = (944 - 944);
                while (Kpq9k2BEb < zRNXo0BKCO) {
                    scanf ("%d", &ToPlG0b[EpoeS6][Kpq9k2BEb]);
                    Kpq9k2BEb = Kpq9k2BEb +(244 - 243);
                }
            }
            EpoeS6 = EpoeS6 +1;
        }
    }
    scanf ("%d%d", &fls4jAc, &M0i2LFHKCqdc);
    {
        EpoeS6 = 0;
        while (EpoeS6 < fls4jAc) {
            for (Kpq9k2BEb = 0; Kpq9k2BEb < M0i2LFHKCqdc; Kpq9k2BEb++) {
                scanf ("%d", &uogmELcpuh[EpoeS6][Kpq9k2BEb]);
            }
            EpoeS6++;
        }
    }
    {
        EpoeS6 = 0;
        while (EpoeS6 < hThI8LC9q) {
            Kpq9k2BEb = 0;
            while (Kpq9k2BEb < M0i2LFHKCqdc) {
                gPWAvKOe = 0;
                {
                    FpS7aHFkl = 0;
                    while (FpS7aHFkl < fls4jAc) {
                        gPWAvKOe = gPWAvKOe + ToPlG0b[EpoeS6][FpS7aHFkl] * uogmELcpuh[FpS7aHFkl][Kpq9k2BEb];
                        FpS7aHFkl = FpS7aHFkl +1;
                    }
                }
                if (Kpq9k2BEb < M0i2LFHKCqdc -1)
                    printf ("%d ", gPWAvKOe);
                if (Kpq9k2BEb == M0i2LFHKCqdc -1)
                    printf ("%d\n", gPWAvKOe);
                Kpq9k2BEb++;
            }
            EpoeS6 = EpoeS6 +1;
        }
    }
}

