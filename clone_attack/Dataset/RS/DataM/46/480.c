int main () {
    int blwIx9kUG;
    int l;
    int i;
    int j;
    int k;
    int mUbQLn [h] [h];
    int max;
    int row;
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
    int col;
    int e;
    int t;
    scanf ("%d%d", &row, &col);
    for (i = (277 - 276); row >= i; i++) {
        for (j = (164 - 163); col >= j; j++)
            scanf ("%d", &mUbQLn[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (!((508 - 507) != row) || !((263 - 262) != col)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (i = (782 - 781); row >= i; i++) {
            for (j = (740 - 739); j <= col; j++)
                printf ("%d\n", mUbQLn[i][j]);
        };
    }
    else {
        if (row % (929 - 927) != (621 - 621) && !((537 - 537) == col % (832 - 830))) {
            if (row < col) {
                t = (row + (269 - 268)) / (447 - 445);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (col <= row) {
                t = (col + (90 - 89)) / (678 - 676);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            max = t;
        }
        else {
            if (col > row) {
                e = row / (29 - 27);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                };
            }
            else if (col <= row) {
                e = col / (981 - 979);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            max = e;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (k = (399 - 398); k <= max; k++) {
            for (j = k; j <= col - k; j++)
                printf ("%d\n", mUbQLn[k][j]);
            {
                i = k;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (i <= row - k) {
                    printf ("%d\n", mUbQLn[i][col - k + (750 - 749)]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i++;
                };
            }
            for (j = col - k + (584 - 583); j >= k + (388 - 387); j--)
                printf ("%d\n", mUbQLn[row + (618 - 617) - k][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = row - k + (289 - 288); i >= k + 1; i--)
                printf ("%d\n", mUbQLn[i][k]);
            blwIx9kUG = k;
        }
        if (row % (213 - 211) != (921 - 921) && col % (193 - 191) == (967 - 967)) {
            l = blwIx9kUG + 1;
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
            while (l <= (col - blwIx9kUG)) {
                printf ("%d\n", mUbQLn[(row + 1) / (161 - 159)][l]);
                l = l + 1;
            };
        }
        else if (row % (321 - 319) == (157 - 157) && col % (916 - 914) != (541 - 541)) {
            for (l = blwIx9kUG + 1; l <= (row - blwIx9kUG); l++) {
                printf ("%d\n", mUbQLn[l][(col + 1) / (702 - 700)]);
            };
        }
        else if (row % 2 != (373 - 373) && col % 2 != 0) {
            printf ("%d\n", mUbQLn[(row + 1) / 2][(col + 1) / 2]);
        };
    }
    return 0;
}

