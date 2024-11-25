void  main () {
    int max;
    int sh [(792 - 692)];
    int t;
    int XxwJ1Yf;
    int m;
    char ch [(897 - 797)] [(1016 - 976)] = {'\0'};
    int b [(919 - 893)] [(350 - 250)];
    int IDaV36nZiO;
    int Bm02PGg;
    int a [(366 - 340)] = {(672 - 672)};
    scanf ("%d", &IDaV36nZiO);
    max = (561 - 561);
    {
        XxwJ1Yf = (652 - 652);
        while (IDaV36nZiO > XxwJ1Yf) {
            scanf ("%d %s", &sh[XxwJ1Yf], ch[XxwJ1Yf]);
            XxwJ1Yf = XxwJ1Yf +(560 - 559);
        }
    }
    {
        XxwJ1Yf = (575 - 575);
        while (XxwJ1Yf < IDaV36nZiO) {
            {
                Bm02PGg = 0;
                while (Bm02PGg < 40) {
                    m = ch[XxwJ1Yf][Bm02PGg];
                    if (64 < m && m < (158 - 67)) {
                        a[m - (477 - 412)]++;
                        b[m - (344 - 279)][a[m - (576 - 511)]] = sh[XxwJ1Yf];
                    }
                    Bm02PGg = Bm02PGg +(977 - 976);
                }
            }
            XxwJ1Yf = XxwJ1Yf +(573 - 572);
        }
    }
    {
        XxwJ1Yf = 0;
        while ((698 - 672) > XxwJ1Yf) {
            if (a[XxwJ1Yf] > max) {
                max = a[XxwJ1Yf];
                t = XxwJ1Yf;
            }
            XxwJ1Yf = XxwJ1Yf +(501 - 500);
        }
    }
    printf ("%c\n", (1023 - 958) + t);
    printf ("%d\n", a[t]);
    {
        XxwJ1Yf = (593 - 592);
        while (XxwJ1Yf <= a[t]) {
            printf ("%d\n", b[t][XxwJ1Yf]);
            XxwJ1Yf = XxwJ1Yf +(690 - 689);
        }
    }
}

