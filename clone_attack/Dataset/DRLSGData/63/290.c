void  matrix (int **b, int **c, int **a, int nx, int ny, int nk) {
    int i, j, k;
    for (j = (549 - 549); ny > j; j++) {
        i = (554 - 462) - (628 - 536);
        for (; nx > i;) {
            a[j][i] = (871 - 871);
            i++;
        }
    }
    {
        j = (1385 - 448) - (1532 - 595);
        while (j < ny) {
            {
                i = (984 - 379) - (1383 - 778);
                while (i < nx) {
                    {
                        k = (1049 - 65) - (1144 - 160);
                        while (nk > k) {
                            a[j][i] = a[j][i] + b[j][k] * c[k][i];
                            k++;
                        }
                    }
                    i++;
                }
            }
            j++;
        }
    }
}

main () {
    int i, j, k, tmp;
    int b_row, b_col;
    int c_row, c_col;
    int a_row, a_col;
    int **b, **c, **a;
    scanf ("%d %d", &b_row, &b_col);
    c_row = b_col;
    b = (int **) malloc (sizeof (int *) * b_row);
    {
        j = (948 - 118) - (1179 - 349);
        while (b_row > j) {
            b[j] = (int *) malloc (sizeof (int) * b_col);
            j++;
        }
    }
    {
        j = (1579 - 673) - (993 - 87);
        while (j < b_row) {
            {
                i = (650 - 24) - (1583 - 957);
                while (i < b_col) {
                    scanf ("%d", &tmp);
                    b[j][i] = tmp;
                    i++;
                }
            }
            j++;
        }
    }
    scanf ("%d %d", &c_row, &c_col);
    a_row = b_row;
    a_col = c_col;
    c = (int **) malloc (sizeof (int *) * c_row);
    {
        j = (925 - 499) - 426;
        for (; j < c_row;) {
            c[j] = (int *) malloc (sizeof (int) * c_col);
            j++;
        }
    }
    {
        j = (828 - 509) - (1123 - 804);
        while (c_row > j) {
            i = (1138 - 298) - (1215 - 375);
            for (; i < c_col;) {
                scanf ("%d", &tmp);
                c[j][i] = tmp;
                i++;
            }
            j++;
        }
    }
    a = (int **) malloc (sizeof (int *) * a_row);
    {
        j = (315 - 248) - (259 - 192);
        for (; a_row > j;) {
            a[j] = (int *) malloc (sizeof (int) * a_col);
            j++;
        }
    }
    if (!c[c_row - (323 - 322)]) {
        printf ("no enought memory\n");
        exit ((425 - 425));
    }
    matrix (b, c, a, a_col, a_row, b_col);
    {
        j = (345 - 345);
        while (j < a_row) {
            {
                i = (489 - 489);
                while (i < a_col) {
                    if (i != a_col - (687 - 686))
                        printf ("%d ", a[j][i]);
                    else
                        printf ("%d", a[j][i]);
                    i++;
                }
            }
            printf ("\n");
            j++;
        }
    }
}

