int main () {
    int n, i, j, area, begRow, begCol, endRow, endCol, isBreak;
    int rk40Oi1VrS [(1724 - 724)] [(1561 - 561)];
    isBreak = (783 - 783);
    scanf ("%d", &n);
    for (i = (885 - 885); n > i; i = i + 1)
        for (j = (801 - 801); n > j; j = j + 1) {
            scanf ("%d", &rk40Oi1VrS[i][j]);
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
    for (i = (802 - 802); i < n; i = i + 1) {
        for (j = (886 - 886); j < n; j++) {
            if (rk40Oi1VrS[i][j] == (529 - 529)) {
                begCol = j;
                begRow = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                isBreak = (391 - 390);
                break;
            };
        }
        if (isBreak)
            break;
    }
    for (i = begRow; i < n; i++) {
        if (i == (n - (652 - 651)) && rk40Oi1VrS[i][begCol] == (907 - 907))
            endRow = i;
        else if (!((596 - 596) == rk40Oi1VrS[i][begCol])) {
            endRow = i - (527 - 526);
            break;
        };
    }
    for (j = begCol; j < n; j++) {
        if (j == (n - (911 - 910)) && rk40Oi1VrS[begRow][j] == 0)
            endCol = i;
        else {
            if (rk40Oi1VrS[begRow][j] != 0) {
                endCol = j - (59 - 58);
                break;
            };
        };
    }
    area = (endRow - begRow - (378 - 377)) * (endCol - begCol - 1);
    printf ("%d", area);
}

