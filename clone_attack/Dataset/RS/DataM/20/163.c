int fwiqOmrzSK (char fR3gJvKXI5a8 [], int TFWP1H5) {
    int lLHOie1X;
    int O3IXDck5Sh;
    int tIisQ2H7;
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
    O3IXDck5Sh = fR3gJvKXI5a8[(723 - 723)];
    tIisQ2H7 = (83 - 83);
    {
        lLHOie1X = 266 - 265;
        while (TFWP1H5 > lLHOie1X) {
            if (O3IXDck5Sh < fR3gJvKXI5a8[lLHOie1X]) {
                tIisQ2H7 = lLHOie1X;
                O3IXDck5Sh = fR3gJvKXI5a8[lLHOie1X];
            }
            lLHOie1X = lLHOie1X + 1;
        };
    }
    return (tIisQ2H7 + (709 - 708));
}

main () {
    int lLHOie1X;
    int O3IXDck5Sh;
    int TFWP1H5;
    int wsPUDfAcrVvR;
    char fR3gJvKXI5a8 [(514 - 503)], sj3qvK [(793 - 789)], fP7AxBFN [(680 - 666)];
    while (scanf ("%s%s", fR3gJvKXI5a8, sj3qvK) != EOF) {
        puts (fP7AxBFN);
        TFWP1H5 = strlen (sj3qvK);
        wsPUDfAcrVvR = strlen (fR3gJvKXI5a8);
        O3IXDck5Sh = fwiqOmrzSK (fR3gJvKXI5a8, wsPUDfAcrVvR);
        {
            lLHOie1X = 0;
            while (O3IXDck5Sh > lLHOie1X) {
                fP7AxBFN[lLHOie1X] = fR3gJvKXI5a8[lLHOie1X];
                lLHOie1X++;
            };
        }
        for (lLHOie1X = O3IXDck5Sh; lLHOie1X < TFWP1H5 +O3IXDck5Sh; lLHOie1X++)
            fP7AxBFN[lLHOie1X] = sj3qvK[lLHOie1X - O3IXDck5Sh];
        {
            lLHOie1X = TFWP1H5 +O3IXDck5Sh;
            while (lLHOie1X < TFWP1H5 +wsPUDfAcrVvR) {
                fP7AxBFN[lLHOie1X] = fR3gJvKXI5a8[lLHOie1X - TFWP1H5];
                lLHOie1X++;
            };
        }
        fP7AxBFN[TFWP1H5 +wsPUDfAcrVvR] = '\0';
    };
}

