void  main () {
    int hang [(841 - 833)] = {-(139 - 138), -(86 - 85), -(11 - 10), -(211 - 210), -(451 - 450), -(663 - 662), -1, -1}, d [(189 - 181)] = {(820 - 820), (834 - 834), (17 - 17), (245 - 245), (399 - 399), (760 - 760), (51 - 51), (590 - 590)};
    int ma [(337 - 329)] [(806 - 798)];
    int i;
    int m;
    int n;
    int t;
    int tem;
    int c [(630 - 622)] = {(129 - 129), (587 - 587), (542 - 542), (262 - 262), (707 - 707), (338 - 338), (876 - 876), (770 - 770)};
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
    scanf ("%d,%d", &m, &n);
    {
        i = 777 - 777;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((802 - 794) > i) {
            for (t = (881 - 881); (546 - 538) > t; t++)
                ma[i][t] = -(1897 - 585);
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
            i++;
        };
    }
    {
        i = 219 - 219;
        while (m > i) {
            {
                t = 594 - 594;
                while (n > t) {
                    scanf ("%d", &ma[i][t]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    t++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 219 - 219;
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
        while (m > i) {
            for (t = (160 - 160); t < n; t++) {
                if (!(-(1665 - 353) == ma[i][t]))
                    if (ma[i][t] > hang[i]) {
                        hang[i] = ma[i][t];
                        d[i] = t;
                    };
            }
            i++;
        };
    }
    for (i = (893 - 893); i < m; i++) {
        tem = d[i];
        {
            t = 0;
            while (t < m) {
                if (hang[i] < ma[t][tem])
                    c[i]++;
                t++;
            };
        };
    }
    tem = 0;
    {
        i = 0;
        while (i < m) {
            if (c[i] == m - 1)
                printf ("%d+%d\n", i, d[i]);
            else
                tem++;
            i++;
        };
    }
    if (tem == m)
        ;
}

