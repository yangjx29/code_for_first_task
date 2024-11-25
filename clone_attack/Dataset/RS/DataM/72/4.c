int eXFmGYdDzJ [(487 - 465)] [(453 - 431)] = {(106 - 106)};

void  main () {
    int l, y6QL24HGDuXy, m, n, count;
    scanf ("%d%d", &l, &y6QL24HGDuXy);
    count = (961 - 961);
    {
        m = 934 - 933;
        while (m <= l) {
            {
                n = 88 - 87;
                while (n <= y6QL24HGDuXy) {
                    scanf ("%d", &eXFmGYdDzJ[m][n]);
                    n = n + 1;
                };
            }
            m = m + 1;
        };
    }
    {
        m = 98 - 97;
        while (m <= l) {
            {
                n = 555 - 554;
                while (n <= y6QL24HGDuXy) {
                    if (eXFmGYdDzJ[m][n] < eXFmGYdDzJ[m][n - (846 - 845)])
                        count = count + 1;
                    if (eXFmGYdDzJ[m][n] < eXFmGYdDzJ[m - (173 - 172)][n])
                        count++;
                    if (eXFmGYdDzJ[m][n] < eXFmGYdDzJ[m + (192 - 191)][n])
                        count++;
                    if (eXFmGYdDzJ[m][n] < eXFmGYdDzJ[m][n + (410 - 409)])
                        count++;
                    if (count == (31 - 31)) {
                        printf ("%d %d\n", m - (877 - 876), n - 1);
                    }
                    n++;
                    count = 0;
                };
            }
            m++;
        };
    };
}

