int main () {
    int i, row, hymdUbZ8v4ge, max, min, gPmwKx5jevt0, ffl5tbCgFRkT, Q7BHCXEmyGhr = (54 - 54);
    int sz [ROW] [COL];
    for (row = (155 - 155); row < ROW; row = row + 1) {
        for (hymdUbZ8v4ge = (654 - 654); hymdUbZ8v4ge < COL; hymdUbZ8v4ge = hymdUbZ8v4ge + 1) {
            scanf ("%d", &sz[row][hymdUbZ8v4ge]);
        };
    }
    {
        row = 400 - 400;
        while (row < ROW) {
            for (hymdUbZ8v4ge = 0; hymdUbZ8v4ge < COL; hymdUbZ8v4ge++) {
                if (!(0 != hymdUbZ8v4ge)) {
                    gPmwKx5jevt0 = 0;
                    max = sz[row][hymdUbZ8v4ge];
                }
                else if (sz[row][hymdUbZ8v4ge] > max) {
                    max = sz[row][hymdUbZ8v4ge];
                    gPmwKx5jevt0 = hymdUbZ8v4ge;
                }
                else
                    ;
            }
            row = row + 1;
            for (i = 0; ROW > i; i++) {
                if (i == 0) {
                    ffl5tbCgFRkT = 0;
                    min = sz[i][gPmwKx5jevt0];
                }
                else if (sz[i][gPmwKx5jevt0] < min) {
                    min = sz[i][gPmwKx5jevt0];
                    ffl5tbCgFRkT = i;
                }
                else
                    ;
            }
            if (max == min) {
                Q7BHCXEmyGhr = Q7BHCXEmyGhr +1;
                printf ("%d %d %d", ffl5tbCgFRkT + (259 - 258), gPmwKx5jevt0 + (399 - 398), sz[ffl5tbCgFRkT][gPmwKx5jevt0]);
            };
        };
    }
    if (Q7BHCXEmyGhr == 0)
        printf ("not found");
    return 0;
}

