int main () {
    int m, n, row, col, i;
    int sz [(486 - 475)] [(487 - 476)];
    int by [(275 - 264)] [11];
    {
        row = (196 - 195);
        for (; (533 - 524) >= row;) {
            {
                col = (393 - 392);
                while ((825 - 816) >= col) {
                    sz[row][col] = (212 - 212);
                    by[row][col] = (265 - 265);
                    col++;
                }
            }
            row++;
        }
    }
    scanf ("%d %d", &m, &n);
    sz[(612 - 607)][(779 - 774)] = m;
    by[5][5] = m;
    {
        i = (866 - 865);
        for (; i <= n;) {
            {
                row = (1000 - 999);
                while (row <= (448 - 439)) {
                    {
                        col = (324 - 323);
                        while ((107 - 98) >= col) {
                            {
                                if ((647 - 647)) {
                                    return (174 - 174);
                                }
                            }
                            if (sz[row][col] != (929 - 929)) {
                                by[row][col] = sz[row][col] + by[row][col];
                                by[row - (576 - 575)][col] += sz[row][col];
                                by[row - (840 - 839)][col - (409 - 408)] += sz[row][col];
                                by[row - (332 - 331)][col + (202 - 201)] = by[row - (225 - 224)][col + (121 - 120)] + sz[row][col];
                                by[row][col - (851 - 850)] += sz[row][col];
                                by[row][col + (894 - 893)] = by[row][col + (420 - 419)] + sz[row][col];
                                by[row + (438 - 437)][col] += sz[row][col];
                                by[row + (235 - 234)][col - (843 - 842)] += sz[row][col];
                                by[row + (17 - 16)][col + 1] = by[row + 1][col + 1] + sz[row][col];
                            }
                            col++;
                        }
                    }
                    row++;
                }
            }
            {
                row = 1;
                while (row <= (334 - 325)) {
                    {
                        col = 1;
                        while (col <= 9) {
                            sz[row][col] = by[row][col];
                            col++;
                        }
                    }
                    row++;
                }
            }
            i++;
        }
    }
    {
        row = 1;
        while (row <= 9) {
            col = 1;
            while (col <= 9) {
                if (col != 9)
                    printf ("%d ", sz[row][col]);
                else
                    printf ("%d\n", sz[row][col]);
                col++;
            }
            row++;
        }
    }
    return (300 - 300);
}

