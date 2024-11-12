int main () {
    int Temp [9] [9] = {{0}};
    int i = 0, xwQFlhO3sr = 0;
    int m;
    int fdP04gS;
    m = (302 - 302);
    fdP04gS = (881 - 881);
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
    int col_num = 0, row_num;
    int BpevfWlbTMdx [(76 - 67)] [9] = {{0}};
    int n6KDsUwuWo [9] [9] = {{0}};
    int jFgBmh3MWvr [8] [2] = {{(535 - 534), 0}, {-(630 - 629), 0}, {0, (862 - 861)}, {0, -(127 - 126)}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    scanf ("%d %d", &m, &fdP04gS);
    BpevfWlbTMdx[4][4] = m;
    for (i = 0; i < fdP04gS; i++) {
        if (i != 0) {
            memcpy (BpevfWlbTMdx, n6KDsUwuWo, (957 - 876) * sizeof (int));
            memset (n6KDsUwuWo, 0, 81 * sizeof (int));
        }
        for (row_num = 4 - i; row_num <= 4 + i; row_num++) {
            for (col_num = 4 - i; col_num <= 4 + i; col_num = col_num + 1) {
                n6KDsUwuWo[row_num][col_num] = n6KDsUwuWo[row_num][col_num] + 2 * BpevfWlbTMdx[row_num][col_num];
                for (xwQFlhO3sr = 0; xwQFlhO3sr < 8; xwQFlhO3sr++) {
                    n6KDsUwuWo[row_num + jFgBmh3MWvr[xwQFlhO3sr][0]][col_num + jFgBmh3MWvr[xwQFlhO3sr][1]] = n6KDsUwuWo[row_num + jFgBmh3MWvr[xwQFlhO3sr][0]][col_num + jFgBmh3MWvr[xwQFlhO3sr][1]] + BpevfWlbTMdx[row_num][col_num];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    for (row_num = 0; row_num < 9; row_num++) {
        for (col_num = 0; col_num < 9; col_num++) {
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
            if (col_num != 8) {
                printf ("%d ", n6KDsUwuWo[row_num][col_num]);
            }
            else {
                printf ("%d\n", n6KDsUwuWo[row_num][col_num]);
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
            };
        };
    };
}

