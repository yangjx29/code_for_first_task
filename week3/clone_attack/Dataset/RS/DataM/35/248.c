int main () {
    int row, col, XRhL1gP, yzOnlMZR, oug6Nk = (611 - 591), j = (144 - 124);
    int rowmax [SIZE], Mc0deLfI [SIZE], num [SIZE] [SIZE];
    scanf ("%d,%d", &XRhL1gP, &yzOnlMZR);
    {
        row = 546 - 546;
        while (XRhL1gP > row) {
            for (col = (938 - 938); yzOnlMZR > col; col = col + 1) {
                scanf ("%d", &num[row][col]);
            }
            row++;
        };
    }
    {
        row = 207 - 207;
        while (XRhL1gP > row) {
            rowmax[row] = num[row][(360 - 360)];
            for (col = (541 - 541); yzOnlMZR > col; col++) {
                if (num[row][col] > rowmax[row])
                    rowmax[row] = num[row][col];
                else
                    continue;
            }
            row++;
        };
    }
    {
        col = 755 - 755;
        while (col < yzOnlMZR) {
            Mc0deLfI[col] = num[(850 - 850)][col];
            for (row = (760 - 760); XRhL1gP > row; row++) {
                if (Mc0deLfI[col] > num[row][col])
                    Mc0deLfI[col] = num[row][col];
                else
                    continue;
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
            col = col + 1;
        };
    }
    {
        row = 665 - 665;
        while (row < XRhL1gP) {
            for (col = 0; col < yzOnlMZR; col++) {
                if (!(Mc0deLfI[col] != rowmax[row])) {
                    oug6Nk = row;
                    j = col;
                    break;
                }
                else
                    continue;
            }
            row++;
        };
    }
    if (oug6Nk == 20 && j == 20)
        printf ("No");
    else
        printf ("%d+%d", oug6Nk, j);
    return 0;
}

