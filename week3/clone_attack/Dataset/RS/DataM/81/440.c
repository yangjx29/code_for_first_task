int Vh3W0o1H (int ySoUmPrQR [(434 - 429)] [(73 - 68)], int bbifAaQve, int jqnJLFAr);

int main () {
    int ySoUmPrQR [(665 - 660)] [(277 - 272)], RRPegrFDQp, DvYX9IP05MT2, bbifAaQve, jqnJLFAr;
    for (RRPegrFDQp = (456 - 456); 5 > RRPegrFDQp; RRPegrFDQp = RRPegrFDQp +1) {
        for (DvYX9IP05MT2 = (542 - 542); 5 > DvYX9IP05MT2; DvYX9IP05MT2++) {
            scanf ("%d", &ySoUmPrQR[RRPegrFDQp][DvYX9IP05MT2]);
        };
    }
    scanf ("%d%d", &bbifAaQve, &jqnJLFAr);
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
    if (Vh3W0o1H (ySoUmPrQR, bbifAaQve, jqnJLFAr)) {
        for (RRPegrFDQp = (275 - 275); RRPegrFDQp < 5; RRPegrFDQp++) {
            for (DvYX9IP05MT2 = (593 - 593); DvYX9IP05MT2 < (401 - 397); DvYX9IP05MT2++) {
                printf ("%d ", ySoUmPrQR[RRPegrFDQp][DvYX9IP05MT2]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (DvYX9IP05MT2 == 4) {
                printf ("%d\n", ySoUmPrQR[RRPegrFDQp][DvYX9IP05MT2]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

int Vh3W0o1H (int ySoUmPrQR [5] [5], int bbifAaQve, int jqnJLFAr) {
    int RRPegrFDQp, bjXRtBpyis;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if ((bbifAaQve >= 0 && 4 >= bbifAaQve) && (jqnJLFAr >= 0 && jqnJLFAr <= 4)) {
        for (RRPegrFDQp = 0; RRPegrFDQp < 5; RRPegrFDQp++) {
            bjXRtBpyis = ySoUmPrQR[bbifAaQve][RRPegrFDQp];
            ySoUmPrQR[bbifAaQve][RRPegrFDQp] = ySoUmPrQR[jqnJLFAr][RRPegrFDQp];
            ySoUmPrQR[jqnJLFAr][RRPegrFDQp] = bjXRtBpyis;
        }
        return 1;
    }
    else {
        return 0;
    };
}

