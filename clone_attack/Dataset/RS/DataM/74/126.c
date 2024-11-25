void  main () {
    int m, n, ZpU6Wtvj83 = (842 - 842), uoSJGbU8 = (997 - 997), l = (793 - 793), k, c, ROk3lEU2C [3000], d, lIYCyk = (167 - 166), e = 0, num;
    char a [3000] [(1175 - 675)], b [(1808 - 808)] [500];
    scanf ("%d%d", &m, &n);
    {
        c = m;
        while (n >= c) {
            k = sqrt (c);
            {
                ZpU6Wtvj83 = 377 - 375;
                while (k >= ZpU6Wtvj83) {
                    if (!(0 != c % ZpU6Wtvj83))
                        break;
                    ZpU6Wtvj83++;
                };
            }
            if (k + (507 - 506) <= ZpU6Wtvj83 &&!((593 - 592) == c)) {
                ROk3lEU2C[uoSJGbU8] = c;
                uoSJGbU8++;
            }
            c++;
        };
    }
    if (uoSJGbU8 == 0)
        ;
    else {
        {
            ZpU6Wtvj83 = 0;
            while (ZpU6Wtvj83 < uoSJGbU8) {
                e = 0;
                while (ROk3lEU2C[ZpU6Wtvj83] != 0) {
                    a[ZpU6Wtvj83][e] = ROk3lEU2C[ZpU6Wtvj83] % (948 - 938) + '0';
                    ROk3lEU2C[ZpU6Wtvj83] = ROk3lEU2C[ZpU6Wtvj83] / 10;
                    e = e + 1;
                }
                a[ZpU6Wtvj83][e] = '\0';
                ZpU6Wtvj83++;
            };
        }
        e = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            ZpU6Wtvj83 = 0;
            while (ZpU6Wtvj83 < uoSJGbU8) {
                for (l = 0; l < strlen (a[ZpU6Wtvj83]) / 2; l++) {
                    d = strlen (a[ZpU6Wtvj83]) - 1 - l;
                    if (a[ZpU6Wtvj83][l] != a[ZpU6Wtvj83][d]) {
                        lIYCyk = 0;
                        break;
                    }
                    else
                        lIYCyk = 1;
                }
                if (lIYCyk) {
                    {
                        l = 0;
                        while (l < strlen (a[ZpU6Wtvj83])) {
                            b[e][l] = a[ZpU6Wtvj83][l];
                            l = l + 1;
                        };
                    }
                    b[e][l] = '\0';
                    e++;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ZpU6Wtvj83++;
            };
        }
        num = e - 1;
    }
    if (e == 0)
        printf ("no");
    else {
        {
            ZpU6Wtvj83 = 0;
            while (ZpU6Wtvj83 < num) {
                printf ("%s,", b[ZpU6Wtvj83]);
                ZpU6Wtvj83++;
            };
        }
        printf ("%s", b[ZpU6Wtvj83]);
    };
}

