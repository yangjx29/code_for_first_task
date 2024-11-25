void  main () {
    int qfAoKM [(462 - 161)];
    int rQuIS5WLxd;
    int loxvs1n2W;
    int k6IWCc9v;
    int UfoZjHXK;
    float ncZdUJBbw;
    float m8yBgL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    ncZdUJBbw = (773 - 773);
    m8yBgL = (892 - 892);
    scanf ("%d", &rQuIS5WLxd);
    for (loxvs1n2W = (60 - 60); rQuIS5WLxd > loxvs1n2W; loxvs1n2W = loxvs1n2W + 1) {
        scanf ("%d", &qfAoKM[loxvs1n2W]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (loxvs1n2W = 0; rQuIS5WLxd - (154 - 153) > loxvs1n2W; loxvs1n2W = loxvs1n2W + 1)
        for (k6IWCc9v = (901 - 900); rQuIS5WLxd - loxvs1n2W > k6IWCc9v; k6IWCc9v = k6IWCc9v + 1) {
            if (qfAoKM[k6IWCc9v - (985 - 984)] > qfAoKM[k6IWCc9v]) {
                UfoZjHXK = qfAoKM[k6IWCc9v - 1];
                qfAoKM[k6IWCc9v - 1] = qfAoKM[k6IWCc9v];
                qfAoKM[k6IWCc9v] = UfoZjHXK;
            };
        }
    for (loxvs1n2W = 0; rQuIS5WLxd > loxvs1n2W; loxvs1n2W++) {
        ncZdUJBbw += qfAoKM[loxvs1n2W];
    }
    m8yBgL = ncZdUJBbw / rQuIS5WLxd;
    if (fabs ((float) (qfAoKM[0] + qfAoKM[rQuIS5WLxd - 1]) / 2 - m8yBgL) < 0.001)
        printf ("%d,%d\n", qfAoKM[0], qfAoKM[rQuIS5WLxd - 1]);
    else {
        if (m8yBgL < (qfAoKM[0] + qfAoKM[rQuIS5WLxd - 1]) / (48.0 - 46.0))
            printf ("%d\n", qfAoKM[rQuIS5WLxd - 1]);
        else
            printf ("%d\n", qfAoKM[0]);
    };
}

