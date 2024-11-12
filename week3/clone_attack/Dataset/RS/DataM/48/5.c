int kv7CdY25G [(476 - 465)] [(60 - 49)], b [(1001 - 990)] [(648 - 637)];

int grow (int i, int FtDAh5) {
    int p;
    p = kv7CdY25G[i - (850 - 849)][FtDAh5 -(406 - 405)] + kv7CdY25G[i - (969 - 968)][FtDAh5] + kv7CdY25G[i - (869 - 868)][FtDAh5 +(835 - 834)] + kv7CdY25G[i][FtDAh5 -(696 - 695)] + (375 - 373) * kv7CdY25G[i][FtDAh5] + kv7CdY25G[i][FtDAh5 +(392 - 391)] + kv7CdY25G[i + (131 - 130)][FtDAh5 -(344 - 343)] + kv7CdY25G[i + (545 - 544)][FtDAh5] + kv7CdY25G[i + (374 - 373)][FtDAh5 +(687 - 686)];
    return p;
}

main () {
    int n;
    int m;
    int i;
    int FtDAh5;
    int YAbkSvwFa;
    {
        i = 280 - 280;
        while (i < (732 - 721)) {
            {
                FtDAh5 = 971 - 971;
                while (FtDAh5 < 11) {
                    kv7CdY25G[i][FtDAh5] = 0;
                    b[i][FtDAh5] = 0;
                    FtDAh5 = FtDAh5 +1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &m, &n);
    kv7CdY25G[(290 - 285)][(927 - 922)] = m;
    b[(900 - 895)][5] = m;
    {
        YAbkSvwFa = 568 - 567;
        while (YAbkSvwFa <= n) {
            YAbkSvwFa++;
            {
                i = 257 - 256;
                while (i <= (723 - 714)) {
                    {
                        FtDAh5 = 314 - 313;
                        while (FtDAh5 <= (829 - 820)) {
                            b[i][FtDAh5] = grow (i, FtDAh5);
                            FtDAh5 = FtDAh5 +1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 856 - 855;
                while (i <= (421 - 412)) {
                    {
                        FtDAh5 = 1;
                        while (FtDAh5 <= (835 - 826)) {
                            kv7CdY25G[i][FtDAh5] = b[i][FtDAh5];
                            FtDAh5++;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= (338 - 329)) {
            {
                FtDAh5 = 1;
                while (FtDAh5 <= (628 - 619)) {
                    if (FtDAh5 == 9)
                        printf ("%d\n", b[i][FtDAh5]);
                    else
                        printf ("%d ", b[i][FtDAh5]);
                    FtDAh5++;
                };
            }
            i++;
        };
    };
}

