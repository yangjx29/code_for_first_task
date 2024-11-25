main () {
    int YyPjlJnToYG, zypLhz6, EnsgY9 = (325 - 325), a [(599 - 594)] [(888 - 883)];
    int b [(1004 - 999)] [(592 - 587)] = {(211 - 211)};
    int c [(375 - 370)] [(440 - 435)] = {(253 - 253)};
    int ErZDJ7xPk [(82 - 77)] [(270 - 265)];
    for (YyPjlJnToYG = (960 - 960); YyPjlJnToYG < (727 - 722); YyPjlJnToYG++) {
        scanf ("%d %d %d %d %d", &a[YyPjlJnToYG][(853 - 853)], &a[YyPjlJnToYG][(148 - 147)], &a[YyPjlJnToYG][2], &a[YyPjlJnToYG][(346 - 343)], &a[YyPjlJnToYG][(655 - 651)]);
    }
    for (YyPjlJnToYG = (78 - 78); 5 > YyPjlJnToYG; YyPjlJnToYG++) {
        for (zypLhz6 = (451 - 451); 5 > zypLhz6; zypLhz6++) {
            if (a[YyPjlJnToYG][(531 - 531)] <= a[YyPjlJnToYG][zypLhz6] && a[YyPjlJnToYG][(580 - 579)] <= a[YyPjlJnToYG][zypLhz6] && a[YyPjlJnToYG][2] <= a[YyPjlJnToYG][zypLhz6] && a[YyPjlJnToYG][3] <= a[YyPjlJnToYG][zypLhz6] && a[YyPjlJnToYG][4] <= a[YyPjlJnToYG][zypLhz6])
                b[YyPjlJnToYG][zypLhz6] = (922 - 921);
        };
    }
    {
        YyPjlJnToYG = 15 - 15;
        while (5 > YyPjlJnToYG) {
            {
                zypLhz6 = 906 - 906;
                while (zypLhz6 < 5) {
                    if (a[YyPjlJnToYG][zypLhz6] <= a[0][zypLhz6] && a[1][zypLhz6] >= a[YyPjlJnToYG][zypLhz6] && a[YyPjlJnToYG][zypLhz6] <= a[2][zypLhz6] && a[YyPjlJnToYG][zypLhz6] <= a[3][zypLhz6] && a[YyPjlJnToYG][zypLhz6] <= a[4][zypLhz6])
                        c[YyPjlJnToYG][zypLhz6] = 1;
                    zypLhz6++;
                };
            }
            YyPjlJnToYG++;
        };
    }
    for (YyPjlJnToYG = 0; YyPjlJnToYG < 5; YyPjlJnToYG++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (zypLhz6 = 0; zypLhz6 < 5; zypLhz6++) {
            ErZDJ7xPk[YyPjlJnToYG][zypLhz6] = b[YyPjlJnToYG][zypLhz6] * c[YyPjlJnToYG][zypLhz6];
            if (ErZDJ7xPk[YyPjlJnToYG][zypLhz6] == 1)
                printf ("%d %d %d\n", YyPjlJnToYG +1, zypLhz6 + 1, a[YyPjlJnToYG][zypLhz6]);
        };
    }
    for (YyPjlJnToYG = 0; YyPjlJnToYG < 5; YyPjlJnToYG++) {
        for (zypLhz6 = 0; zypLhz6 < 5; zypLhz6++) {
            ErZDJ7xPk[YyPjlJnToYG][zypLhz6] = b[YyPjlJnToYG][zypLhz6] * c[YyPjlJnToYG][zypLhz6];
            if (ErZDJ7xPk[YyPjlJnToYG][zypLhz6] == 0)
                EnsgY9 = EnsgY9 +1;
        };
    }
    if (EnsgY9 == 25)
        printf ("not found");
}

