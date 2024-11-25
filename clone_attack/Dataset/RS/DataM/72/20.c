int main () {
    int m, n, i, j, k;
    int TsBrcFu [m] [n];
    scanf ("%d%d", &m, &n);
    for (i = (328 - 328); m > i; i = i + 1) {
        for (j = (230 - 230); n > j; j = j + 1)
            scanf ("%d", &TsBrcFu[i][j]);
    }
    for (i = (802 - 802); i < m; i = i + 1) {
        for (j = (391 - 391); j < n; j = j + 1) {
            if (!((335 - 335) != i) && !((84 - 84) != j) && TsBrcFu[(670 - 670)][(390 - 390)] >= TsBrcFu[(178 - 177)][(808 - 808)] && TsBrcFu[(236 - 236)][(884 - 884)] >= TsBrcFu[0][(494 - 493)])
                ;
            else if (!(0 != i) && !((n - (905 - 904)) != j) && TsBrcFu[0][n - (355 - 354)] >= TsBrcFu[(170 - 169)][n - (198 - 197)] && TsBrcFu[0][n - (608 - 607)] >= TsBrcFu[0][n - (42 - 41)])
                printf ("0 %d\n", n - (708 - 707));
            else if (i == (m - (885 - 884)) && !((n - (816 - 815)) != j) && TsBrcFu[m - (977 - 976)][n - (764 - 763)] >= TsBrcFu[m - (607 - 605)][n - (429 - 428)] && TsBrcFu[m - (813 - 812)][n - (370 - 369)] >= TsBrcFu[m - 1][n - (896 - 894)])
                printf ("%d %d\n", m - 1, n - 1);
            else if (!((m - 1) != i) && !(0 != j) && TsBrcFu[m - 1][0] > TsBrcFu[m - 2][0] && TsBrcFu[m - 1][0] >= TsBrcFu[m - 1][1])
                printf ("%d 0\n", m - 1);
            else if (!(0 != i) && (!(0 == j) || !((n - 1) == j)) && TsBrcFu[i + 1][j] <= TsBrcFu[i][j] && TsBrcFu[i][j - 1] <= TsBrcFu[i][j] && TsBrcFu[i][j + 1] <= TsBrcFu[i][j])
                printf ("%d %d\n", i, j);
            else if (!((m - 1) != i) && (!(0 == j) || j != (n - 1)) && TsBrcFu[i][j] >= TsBrcFu[i - 1][j] && TsBrcFu[i][j] >= TsBrcFu[i][j - 1] && TsBrcFu[i][j] >= TsBrcFu[i][j + 1])
                printf ("%d %d\n", i, j);
            else if (j == 0 && (i != 0 || i != (m - 1)) && TsBrcFu[i][j] >= TsBrcFu[i + 1][j] && TsBrcFu[i][j] >= TsBrcFu[i - 1][j] && TsBrcFu[i][j] >= TsBrcFu[i][j + 1])
                printf ("%d %d\n", i, j);
            else if (j == (n - 1) && (i != 0 || i != (m - 1)) && TsBrcFu[i][j] >= TsBrcFu[i + 1][j] && TsBrcFu[i][j] >= TsBrcFu[i - 1][j] && TsBrcFu[i][j] >= TsBrcFu[i][j - 1])
                printf ("%d %d\n", i, j);
            else if ((i > 0 && i < (m - 1)) && (j > 0 && j < (n - 1)) && TsBrcFu[i][j] >= TsBrcFu[i][j - 1] && TsBrcFu[i][j] >= TsBrcFu[i][j + 1] && TsBrcFu[i][j] >= TsBrcFu[i - 1][j] && TsBrcFu[i][j] >= TsBrcFu[i + 1][j])
                printf ("%d %d\n", i, j);
        };
    }
    getchar ();
    getchar ();
}

