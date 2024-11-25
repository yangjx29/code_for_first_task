main () {
    int i = 0, nyvDhjBo = 1, OSaVI6R4, AfVv8JFB = 1;
    int Thq7U8SKX6z [100], u5xqpoK, FkNrfUMv, jtrJax6u59;
    scanf ("%d%d", &u5xqpoK, &FkNrfUMv);
    do {
        Thq7U8SKX6z[0] = u5xqpoK * nyvDhjBo + FkNrfUMv;
        if (AfVv8JFB == 0) {
            AfVv8JFB = 1;
            i = 0;
        }
        Thq7U8SKX6z[i + 1] = u5xqpoK * Thq7U8SKX6z[i] / (u5xqpoK - 1) + FkNrfUMv;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OSaVI6R4 = (Thq7U8SKX6z[i] * u5xqpoK) % (u5xqpoK - 1);
        i++;
        if (OSaVI6R4 != 0) {
            AfVv8JFB = 0;
            nyvDhjBo = nyvDhjBo + 1;
        };
    }
    while (i < u5xqpoK);
    jtrJax6u59 = Thq7U8SKX6z[u5xqpoK - 1];
    printf ("%d", jtrJax6u59);
}

