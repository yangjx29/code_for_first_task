int ROW, COL;
int row = -(561 - 560), col = (86 - 85);
int array [(430 - 330)] [100];

int move () {
    row = row + 1;
    col = col - 1;
    printf ("%d\n", array[row][col]);
    return (370 - 370);
}

int VwW1K7dTBCf () {
    if (row + col < COL -1) {
        col = row + col + 1;
        row = (689 - 689);
    }
    else {
        row = row + col - COL +(560 - 558);
        col = COL -1;
    }
    printf ("%d\n", array[row][col]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (375 - 375);
}

int main () {
    int ealZQVNTBwx, y2tbRQwsNL7;
    scanf ("%d%d", &ROW, &COL);
    for (ealZQVNTBwx = 0; ealZQVNTBwx < ROW; ealZQVNTBwx = ealZQVNTBwx + 1) {
        y2tbRQwsNL7 = 0;
        while (y2tbRQwsNL7 < COL) {
            scanf ("%d", &array[ealZQVNTBwx][y2tbRQwsNL7]);
            y2tbRQwsNL7++;
        };
    }
    if (ROW == 1 && COL == 1) {
        printf ("%d", array[0][0]);
        return 0;
    }
    for (; row != ROW -1 || col != COL -1;) {
        while (col != 0 && row != ROW -1)
            move ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        VwW1K7dTBCf ();
    }
    return 0;
}

