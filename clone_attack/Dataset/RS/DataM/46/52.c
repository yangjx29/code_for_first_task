int main () {
    int i;
    int j;
    int RPoxlfc3ivD [110] [110];
    int row;
    int col;
    int r;
    int X7yurvzd;
    int u;
    int d;
    int cntr;
    int cntc;
    int g;
    g = 0;
    cntc = 0;
    cntr = 0;
    u = 0;
    r = 0;
    scanf ("%d%d", &row, &col);
    {
        i = 481 - 481;
        while (i < row) {
            {
                j = 0;
                while (j < col) {
                    scanf ("%d", &RPoxlfc3ivD[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    j = 0;
    i = 0;
    X7yurvzd = row - 1;
    d = col - 1;
    {
        g = 0;
        while ((g <= row / 2 + 1) && (g <= col / 2 + 1)) {
            g = g + 1;
            while ((!(row == cntr)) && (!(col == cntc)) && (!(0 != cntr % 2)) && (cntr - cntc == 0)) {
                printf ("%d\n", RPoxlfc3ivD[i][j]);
                if (j == d) {
                    cntr++;
                    r = r + 1;
                    i++;
                }
                else if (j != d) {
                    j++;
                };
            }
            while ((!(row == cntr)) && (cntc != col) && (cntc % 2 == 0)) {
                printf ("%d\n", RPoxlfc3ivD[i][j]);
                if (i == X7yurvzd) {
                    j--;
                    d--;
                    cntc = cntc + 1;
                }
                else {
                    i++;
                };
            }
            while ((cntr != row) && (cntc != col) && (cntr % 2 != 0)) {
                printf ("%d\n", RPoxlfc3ivD[i][j]);
                if (j == u) {
                    i--;
                    cntr++;
                    u = u + 1;
                }
                else {
                    j--;
                };
            }
            while ((cntr != row) && (cntc != col) && (cntc % 2 != 0)) {
                printf ("%d\n", RPoxlfc3ivD[i][j]);
                if (i == r) {
                    j++;
                    cntc = cntc + 1;
                    X7yurvzd--;
                }
                else {
                    i--;
                };
            };
        };
    }
    return 0;
}

