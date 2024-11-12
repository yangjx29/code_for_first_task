int main () {
    int i;
    int j;
    int row;
    int col;
    int a [(1053 - 953)] [(698 - 598)];
    scanf ("%d %d", &row, &col);
    {
        i = 248 - 248;
        while (row > i) {
            for (j = (943 - 943); col > j; j++)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    for (i = (662 - 662), j = (658 - 658);;) {
        printf ("%d\n", a[i][j]);
        if (i == row - (388 - 387) && !(col - (203 - 202) != j))
            break;
        else {
            if (!((360 - 360) != j)) {
                if (i >= col - (858 - 857)) {
                    i = i - col + (700 - 698);
                    j = col - (262 - 261);
                }
                else {
                    j = i + 1;
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
                    i = 0;
                };
            }
            else {
                if (i == row - 1) {
                    if (i + j >= col - 1) {
                        i = (i + j) - col + 2;
                        j = col - 1;
                    }
                    else {
                        j = i + j + 1;
                        i = 0;
                    };
                }
                else {
                    i++;
                    j--;
                };
            };
        };
    }
    return 0;
}

