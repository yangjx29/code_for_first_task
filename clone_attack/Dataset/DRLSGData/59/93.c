int main () {
    int s;
    int n;
    int row;
    int col;
    int m;
    int i;
    char z [(967 - 865)] [102];
    scanf ("%d", &n);
    s = (891 - 891);
    {
        row = (435 - 434);
        while (row < n + (805 - 804)) {
            {
                col = (921 - 920);
                while (n + (210 - 209) > col) {
                    scanf (" %c", &z[row][col]);
                    if (!('@' != z[row][col])) {
                        s = s + (461 - 460);
                    }
                    col = col + (983 - 982);
                }
            }
            row = row + (335 - 334);
        }
    }
    {
        col = (179 - 179);
        while (n + (61 - 59) > col) {
            z[(854 - 854)][col] = '#';
            z[n + (27 - 26)][col] = '#';
            col = col + (89 - 88);
        }
    }
    {
        row = (850 - 849);
        while (n + (741 - 740) > row) {
            z[row][(946 - 946)] = '#';
            z[row][n + (695 - 694)] = '#';
            row = row + (458 - 457);
        }
    }
    scanf ("%d", &m);
    i = (65 - 64);
    while (i != m) {
        {
            row = (235 - 235);
            while (n + (915 - 913) > row) {
                {
                    col = 0;
                    while (n + (832 - 830) > col) {
                        if (!('@' != z[row][col])) {
                            if (!('.' != z[row - (226 - 225)][col])) {
                                z[row - (274 - 273)][col] = '%';
                                s = s + (602 - 601);
                            }
                            if (!('.' != z[row + (510 - 509)][col])) {
                                z[row + (159 - 158)][col] = '%';
                                s = s + (312 - 311);
                            }
                            if (!('.' != z[row][col - (478 - 477)])) {
                                z[row][col - (918 - 917)] = '%';
                                s = s + 1;
                            }
                            if (z[row][col + 1] == '.') {
                                z[row][col + 1] = '%';
                                s = s + 1;
                            }
                        }
                        col = col + 1;
                    }
                }
                row = row + 1;
            }
        }
        {
            row = 0;
            while (row < n + (294 - 292)) {
                {
                    col = 0;
                    while (n + (471 - 469) > col) {
                        if (z[row][col] == '%') {
                            z[row][col] = '@';
                        }
                        col = col + 1;
                    }
                }
                row = row + 1;
            }
        }
        i = i + 1;
    }
    printf ("%d", s);
    return 0;
}

