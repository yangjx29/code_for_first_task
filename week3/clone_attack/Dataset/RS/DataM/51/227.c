main () {
    int sun;
    int flag;
    int aa;
    int mm;
    int XIVfMahlgy5;
    int i;
    int m;
    sun = (141 - 141);
    flag = (191 - 191);
    aa = (883 - 883);
    mm = 1;
    char a [(935 - 425)];
    int b [(546 - 36)], d [510], p = (661 - 661), S2L5QE4i3g, pp, pl3crjAk, y3FQs7TxYdu, K2zh5l7;
    scanf ("%d%s", &XIVfMahlgy5, a);
    {
        i = 0;
        while (510 > i) {
            b[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (510 > i) {
            d[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (a[i] != 0) {
            p++;
            i++;
        };
    }
    m = p - XIVfMahlgy5 +1;
    if (1 > m)
        ;
    else {
        for (i = 0; m > i; i = i + 1) {
            {
                S2L5QE4i3g = 0;
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
                while (XIVfMahlgy5 > S2L5QE4i3g) {
                    b[i] = b[i] + a[i + S2L5QE4i3g] * mm;
                    mm = mm * 43;
                    S2L5QE4i3g = S2L5QE4i3g +1;
                };
            }
            mm = 1;
        }
        {
            i = 0;
            while (m - 1 > i) {
                for (S2L5QE4i3g = i + 1; m > S2L5QE4i3g; S2L5QE4i3g = S2L5QE4i3g +1) {
                    if (!(b[S2L5QE4i3g] == b[i]))
                        sun++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                i++;
            };
        }
        if (sun == m * (m - 1) / 2)
            ;
        else {
            {
                i = 0;
                while (m > i) {
                    for (pp = 0; pp < i; pp = pp + 1) {
                        if (!(b[i] != b[pp])) {
                            flag = 1;
                            break;
                        }
                        else
                            flag = 0;
                    }
                    if (flag != 0)
                        continue;
                    for (S2L5QE4i3g = 0; S2L5QE4i3g < m; S2L5QE4i3g++) {
                        if (!(b[S2L5QE4i3g] != b[i]))
                            d[i]++;
                    }
                    i++;
                };
            }
            for (i = 0; i < m; i++) {
                for (S2L5QE4i3g = 0; S2L5QE4i3g < m; S2L5QE4i3g++) {
                    if (d[i] >= d[S2L5QE4i3g])
                        aa = aa + 1;
                }
                if (aa == m) {
                    printf ("%d\n", d[i]);
                    {
                        y3FQs7TxYdu = 0;
                        while (y3FQs7TxYdu < XIVfMahlgy5) {
                            printf ("%c", a[i + y3FQs7TxYdu]);
                            y3FQs7TxYdu = y3FQs7TxYdu + 1;
                        };
                    }
                    break;
                }
                aa = 0;
            }
            for (K2zh5l7 = i + 1; K2zh5l7 < m; K2zh5l7++) {
                if (d[i] == d[K2zh5l7]) {
                    for (pl3crjAk = 0; pl3crjAk < XIVfMahlgy5; pl3crjAk++)
                        printf ("%c", a[K2zh5l7 +pl3crjAk]);
                };
            };
        };
    };
}

