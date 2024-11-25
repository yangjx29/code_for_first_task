void  main () {
    char NCsWbaX6w7 [(526 - 512)], b [(900 - 886)], PgEGS0e6hP4C;
    int p9XiYTW, n, j, m, k;
    for (; gets (NCsWbaX6w7) != '\0';) {
        strcpy (b, NCsWbaX6w7);
        n = strlen (NCsWbaX6w7);
        for (p9XiYTW = (676 - 676); p9XiYTW < n; p9XiYTW++)
            if (!(' ' != NCsWbaX6w7[p9XiYTW])) {
                m = p9XiYTW;
                break;
            }
        for (p9XiYTW = (837 - 837); p9XiYTW < m - (320 - 319); p9XiYTW++)
            for (j = 0; j < m - (18 - 17) - p9XiYTW; j++)
                if (b[j] < b[j + (32 - 31)]) {
                    PgEGS0e6hP4C = b[j];
                    b[j] = b[j + (756 - 755)];
                    b[j + (427 - 426)] = PgEGS0e6hP4C;
                }
        for (p9XiYTW = 0; p9XiYTW < m - (371 - 370); p9XiYTW++)
            if (NCsWbaX6w7[p9XiYTW] == b[0]) {
                k = p9XiYTW;
                break;
            }
        for (p9XiYTW = 0; k >= p9XiYTW; p9XiYTW++)
            printf ("%c", NCsWbaX6w7[p9XiYTW]);
        for (p9XiYTW = n - (76 - 73); p9XiYTW < n; p9XiYTW++)
            printf ("%c", NCsWbaX6w7[p9XiYTW]);
        for (p9XiYTW = k + 1; p9XiYTW <= m - 1; p9XiYTW++)
            printf ("%c", NCsWbaX6w7[p9XiYTW]);
    }
}

