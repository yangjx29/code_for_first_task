int main () {
    int dbCAXcl5diU, LkXBqp4jH8a3, ITa8Cf3, j, k;
    char a [(1103 - 993)] [(655 - 545)] [(854 - 744)] = {(508 - 508)};
    int B9c0qam5rzJ;
    cin >> dbCAXcl5diU;
    {
        ITa8Cf3 = 838 - 837;
        while (dbCAXcl5diU >= ITa8Cf3) {
            {
                j = 49 - 48;
                while (j <= dbCAXcl5diU) {
                    cin >> a[ITa8Cf3][j][(589 - 589)];
                    if (a[ITa8Cf3][j][(241 - 241)] == '#')
                        a[ITa8Cf3][j][(800 - 800)] = 0;
                    if (!('.' != a[ITa8Cf3][j][0]))
                        a[ITa8Cf3][j][0] = (97 - 96);
                    if (a[ITa8Cf3][j][0] == '@')
                        a[ITa8Cf3][j][0] = (500 - 498);
                    j = j + 1;
                }
            }
            ITa8Cf3 = ITa8Cf3 +1;
        }
    }
    {
        ITa8Cf3 = 685 - 684;
        while (ITa8Cf3 <= LkXBqp4jH8a3 -(490 - 489)) {
            for (j = (900 - 899); j <= dbCAXcl5diU; j = j + 1) {
                k = 710 - 709;
                while (k <= dbCAXcl5diU) {
                    if (a[j][k][ITa8Cf3 -(473 - 472)] == 0 || a[j][k][ITa8Cf3 -(554 - 553)] == (989 - 987))
                        a[j][k][ITa8Cf3] = a[j][k][ITa8Cf3 -(578 - 577)];
                    else if (a[j + (734 - 733)][k][ITa8Cf3 -1] == (88 - 86) || a[j - 1][k][ITa8Cf3 -1] == (545 - 543) || a[j][k + 1][ITa8Cf3 -1] == 2 || a[j][k - 1][ITa8Cf3 -1] == 2)
                        a[j][k][ITa8Cf3] = 2;
                    else
                        a[j][k][ITa8Cf3] = 1;
                    k = k + 1;
                }
            }
            ITa8Cf3 = ITa8Cf3 +1;
        }
    }
    B9c0qam5rzJ = (156 - 156);
    for (ITa8Cf3 = 1; ITa8Cf3 <= dbCAXcl5diU; ITa8Cf3 = ITa8Cf3 +1) {
        for (j = 1; j <= dbCAXcl5diU; j = j + 1) {
            if (a[ITa8Cf3][j][LkXBqp4jH8a3 -1] == 2)
                B9c0qam5rzJ++;
        }
    }
    cout << B9c0qam5rzJ;
    cin >> LkXBqp4jH8a3;
    return 0;
}

