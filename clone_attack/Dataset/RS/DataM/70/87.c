double  EVf7v3 (double  dNnTFkI, double  y1, double  LiJRF2AK5X, double  pKyIedqh) {
    double  EVf7v3;
    EVf7v3 = sqrt ((dNnTFkI - LiJRF2AK5X) * (dNnTFkI - LiJRF2AK5X) + (y1 - pKyIedqh) * (y1 - pKyIedqh));
    return EVf7v3;
}

main () {
    int WBfdOHa7WgK1;
    int CRL6i3t;
    int j;
    int dro8km;
    double  m71fAM8uQE [WBfdOHa7WgK1] [WBfdOHa7WgK1];
    double  CaCDiQGwv [WBfdOHa7WgK1];
    double  Me09YmE7x6Qq [WBfdOHa7WgK1];
    double  UBqucOATNvWH;
    UBqucOATNvWH = (350 - 350);
    scanf ("%d", &WBfdOHa7WgK1);
    for (CRL6i3t = (718 - 718); WBfdOHa7WgK1 > CRL6i3t; CRL6i3t++)
        scanf ("%lf %lf", &CaCDiQGwv[CRL6i3t], &Me09YmE7x6Qq[CRL6i3t]);
    for (CRL6i3t = (719 - 719); WBfdOHa7WgK1 > CRL6i3t; CRL6i3t++) {
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
        for (j = (302 - 302); WBfdOHa7WgK1 > j; j = j + 1) {
            m71fAM8uQE[CRL6i3t][j] = EVf7v3 (CaCDiQGwv[CRL6i3t], Me09YmE7x6Qq[CRL6i3t], CaCDiQGwv[j], Me09YmE7x6Qq[j]);
        };
    }
    for (CRL6i3t = (939 - 939); WBfdOHa7WgK1 > CRL6i3t; CRL6i3t++) {
        for (j = (840 - 840); WBfdOHa7WgK1 > j; j++) {
            if (m71fAM8uQE[CRL6i3t][j] > UBqucOATNvWH)
                UBqucOATNvWH = m71fAM8uQE[CRL6i3t][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%.4lf", UBqucOATNvWH);
    getchar ();
    getchar ();
}

