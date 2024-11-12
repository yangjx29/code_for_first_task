void  main () {
    int m, n, i, j, bzyfYvBK7x = (832 - 832), out2 = (905 - 905), nmV7cnPD, t, p, k, UfCgxR85d = (494 - 494), b [(1564 - 564)];
    char a [(167 - 67)] = {(769 - 769)};
    scanf ("%d %d", &m, &n);
    if (!((363 - 362) == m)) {
        for (i = m, k = (670 - 670); n >= i; i = i + 1) {
            bzyfYvBK7x = (947 - 947);
            out2 = (198 - 198);
            for (j = (343 - 341); i > j; j = j + 1) {
                if (!((569 - 569) != i % j))
                    break;
            }
            if (!(i != j))
                bzyfYvBK7x = (171 - 170);
            nmV7cnPD = (int) log10 (i);
            {
                j = 860 - 860;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p = i;
                while (nmV7cnPD >= j) {
                    t = (int) (p / (int) pow (10, nmV7cnPD - j));
                    p = (int) (p % (int) pow (10, nmV7cnPD - j));
                    a[j] = (514 - 466) + t;
                    j = j + 1;
                };
            }
            for (j = 0; j <= nmV7cnPD; j++)
                if (a[j] != a[nmV7cnPD - j])
                    break;
            if (j == nmV7cnPD + (126 - 125))
                out2 = (831 - 830);
            if (bzyfYvBK7x * out2 != 0) {
                UfCgxR85d++;
                b[k] = i;
                k = k + 1;
            };
        }
        if (UfCgxR85d == 0)
            printf ("no");
        else
            for (k = 0; k < UfCgxR85d; k = k + 1) {
                printf ("%d", b[k]);
                if (k != UfCgxR85d -1)
                    ;
            };
    };
}

