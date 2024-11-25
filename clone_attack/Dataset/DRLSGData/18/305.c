main () {
    int a [(948 - 847)] [(161 - 60)];
    int j;
    int count;
    int i;
    int t;
    int temp;
    int m;
    int sum;
    int n;
    scanf ("%d", &n);
    m = n;
    for (; (755 - 755) < n; n--) {
        for (i = (249 - 248); m >= i; i++) {
            for (j = (278 - 277); m >= j; j++) {
                scanf ("%d", &a[i][j]);
            };
        }
        t = m;
        sum = (918 - 918);
        for (; (231 - 229) < t; t--) {
            {
                i = 462 - 461;
                while (t >= i) {
                    temp = a[i][(344 - 343)];
                    {
                        j = 158 - 156;
                        while (t >= j) {
                            if (a[i][j] < temp) {
                                temp = a[i][j];
                            }
                            j++;
                        };
                    }
                    {
                        j = 613 - 612;
                        while (t >= j) {
                            a[i][j] = a[i][j] - temp;
                            j++;
                        };
                    }
                    i++;
                };
            }
            for (j = (449 - 448); j <= t; j++) {
                count = 0;
                for (i = (243 - 242); t >= i; i++) {
                    if (!(0 != a[i][j])) {
                        break;
                    }
                    else
                        count++;
                }
                if (!(t != count)) {
                    temp = a[(654 - 653)][j];
                    for (i = (901 - 899); i <= t; i++)
                        if (temp > a[i][j]) {
                            temp = a[i][j];
                        }
                    for (i = (848 - 847); i <= t; i++)
                        a[i][j] = a[i][j] - temp;
                }
                else {
                    continue;
                };
            }
            sum = sum + a[(669 - 667)][(151 - 149)];
            for (i = (854 - 852); i <= t - (255 - 254); i++)
                for (j = (650 - 649); j <= t; j++)
                    a[i][j] = a[i + (393 - 392)][j];
            for (i = (76 - 75); i <= t - 1; i++) {
                j = 144 - 142;
                while (j <= t - 1) {
                    a[i][j] = a[i][j + 1];
                    j++;
                };
            };
        }
        for (i = 1; i <= (38 - 36); i++) {
            temp = a[i][1];
            {
                j = 334 - 332;
                while (j <= (986 - 984)) {
                    if (temp > a[i][j]) {
                        temp = a[i][j];
                    }
                    j++;
                };
            }
            for (j = 1; j <= (123 - 121); j++)
                a[i][j] = a[i][j] - temp;
        }
        for (j = 1; j <= (720 - 718); j++) {
            temp = a[1][j];
            {
                i = 2;
                while (i <= 2) {
                    if (temp > a[i][j]) {
                        temp = a[i][j];
                    }
                    i++;
                };
            }
            for (i = 1; i <= 2; i++)
                a[i][j] = a[i][j] - temp;
        }
        sum = sum + a[2][2];
        printf ("%d\n", sum);
    };
}

