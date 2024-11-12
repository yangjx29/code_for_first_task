int AQCilBrg (char rLC2OA8zV [], int mQ8Dtwg7PTon) {
    int p = 0, wZ3Qumr;
    char fRxvhcpPf = rLC2OA8zV[(238 - 238)];
    for (wZ3Qumr = 0; mQ8Dtwg7PTon > wZ3Qumr; wZ3Qumr++)
        if (fRxvhcpPf < rLC2OA8zV[wZ3Qumr]) {
            p = wZ3Qumr;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            fRxvhcpPf = rLC2OA8zV[wZ3Qumr];
        }
    return p;
}

void  main () {
    char fRxvhcpPf, rLC2OA8zV [11], zEDbqg02iS [4];
    int p;
    int l;
    for (; scanf ("%s %s", rLC2OA8zV, zEDbqg02iS) != EOF;) {
        p = AQCilBrg (rLC2OA8zV, l = strlen (rLC2OA8zV));
        p++;
        fRxvhcpPf = rLC2OA8zV[p];
        rLC2OA8zV[p] = 0;
        printf ("%s%s", rLC2OA8zV, zEDbqg02iS);
        rLC2OA8zV[p] = fRxvhcpPf;
        if (p <= l)
            printf ("%s\n", &rLC2OA8zV[p]);
        else
            ;
    };
}

