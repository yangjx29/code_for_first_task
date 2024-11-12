void  main () {
    double  a1, TvImGZ9Q1S4k, fSoI5QHBv, CEqpRkyGuF;
    int x [100];
    int NUlvH9, c9CNAap, Uy1ganN;
    int vDmSTduIX, H1JIv4, h4cby1DZ, WlJqxQWLNYv;
    scanf ("%d", &NUlvH9);
    WlJqxQWLNYv = 0;
    H1JIv4 = 0;
    vDmSTduIX = 0;
    h4cby1DZ = 0;
    for (c9CNAap = 0; NUlvH9 > c9CNAap; c9CNAap = c9CNAap + 1) {
        scanf ("%d", &x[c9CNAap]);
        if (18 >= x[c9CNAap])
            vDmSTduIX = vDmSTduIX + 1;
        if (19 <= x[c9CNAap] && 35 >= x[c9CNAap])
            H1JIv4 = H1JIv4 +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (x[c9CNAap] >= 36 && x[c9CNAap] <= 60)
            h4cby1DZ = h4cby1DZ + 1;
        if (x[c9CNAap] > 60)
            WlJqxQWLNYv = WlJqxQWLNYv +1;
    }
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
    Uy1ganN = vDmSTduIX + H1JIv4 +h4cby1DZ + WlJqxQWLNYv;
    a1 = 100 * (double ) vDmSTduIX / Uy1ganN;
    TvImGZ9Q1S4k = 100 * (double ) H1JIv4 / Uy1ganN;
    fSoI5QHBv = 100 * (double ) h4cby1DZ / Uy1ganN;
    CEqpRkyGuF = 100 * (double ) WlJqxQWLNYv / Uy1ganN;
    printf ("1-18: %.2lf%%\n", a1);
    printf ("19-35: %.2lf%%\n", TvImGZ9Q1S4k);
    printf ("36-60: %.2lf%%\n", fSoI5QHBv);
    printf ("60??: %.2lf%%\n", CEqpRkyGuF);
}

