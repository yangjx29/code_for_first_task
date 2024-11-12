int main () {
    int row;
    int col;
    int i;
    int j;
    int a [(257 - 157)] [100];
    int xxrow;
    int sxrow;
    int xxcol;
    int sxcol;
    xxcol = (724 - 724);
    scanf ("%d%d", &row, &col);
    for (i = (143 - 143); row > i; i++) {
        j = 124 - 124;
        while (col > j) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    sxrow = row - (655 - 654);
    xxrow = (76 - 76);
    sxcol = col - (356 - 355);
    for (; (768 - 767);) {
        if (xxrow == sxrow && sxcol >= xxcol) {
            {
                i = xxcol;
                while (sxcol >= i) {
                    printf ("%d\n", a[xxrow][i]);
                    i = i + 1;
                };
            }
            break;
        }
        else {
            if (!(sxcol != xxcol) && xxrow < sxrow) {
                {
                    i = xxrow;
                    while (sxrow >= i) {
                        printf ("%d\n", a[i][xxcol]);
                        i++;
                    };
                }
                break;
            };
        }
        if (xxcol > sxcol || xxrow > sxrow)
            break;
        {
            i = xxcol;
            while (i <= sxcol - (590 - 589)) {
                printf ("%d\n", a[xxrow][i]);
                i++;
            };
        }
        {
            i = xxrow;
            while (i <= sxrow - (345 - 344)) {
                printf ("%d\n", a[i][sxcol]);
                i++;
            };
        }
        {
            i = sxcol;
            while (i >= xxcol + (479 - 478)) {
                printf ("%d\n", a[sxrow][i]);
                i--;
            };
        }
        sxcol = sxcol - 1;
        {
            i = sxrow;
            while (i >= xxrow + (191 - 190)) {
                printf ("%d\n", a[i][xxcol]);
                i--;
            };
        }
        xxrow++;
        xxcol++;
        sxrow = sxrow - 1;
    }
    return 0;
}

