int map [(901 - 890)] [11] [4], i, j, k;

main () {
    int m;
    int n;
    scanf ("%d %d", &m, &n);
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
    memset (map, (988 - 988), sizeof (map));
    map[(267 - 262)][5][0] = m;
    {
        k = 204 - 203;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= n) {
            {
                i = 554 - 553;
                while ((410 - 400) > i) {
                    {
                        j = 947 - 946;
                        while ((786 - 776) > j) {
                            map[i][j][k] = (833 - 831) * map[i][j][k - (337 - 336)] + map[i - (336 - 335)][j - (933 - 932)][k - (252 - 251)] + map[i - (187 - 186)][j][k - (607 - 606)] + map[i - (974 - 973)][j + (20 - 19)][k - (808 - 807)] + map[i][j - (974 - 973)][k - (828 - 827)] + map[i][j + (545 - 544)][k - (771 - 770)] + map[i + (806 - 805)][j - (911 - 910)][k - (162 - 161)] + map[i + (597 - 596)][j][k - (781 - 780)] + map[i + (864 - 863)][j + (708 - 707)][k - 1];
                            j++;
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
            k++;
        };
    }
    {
        i = 1;
        while ((869 - 859) > i) {
            {
                j = 1;
                while (j < (482 - 472)) {
                    if (j != (419 - 410))
                        printf ("%d ", map[i][j][n]);
                    else
                        printf ("%d\n", map[i][j][n]);
                    j++;
                };
            }
            i++;
        };
    };
}
