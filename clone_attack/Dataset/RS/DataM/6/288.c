int main () {
    int s;
    int n;
    int ROW [(324 - 224)];
    int COL [100];
    int row;
    int col;
    int a [100] [100];
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
    int i;
    s = (664 - 664);
    scanf ("%d", &n);
    for (i = (485 - 485); i < n; i++) {
        scanf ("%d%d", &ROW[i], &COL[i]);
        {
            row = 212 - 212;
            while (ROW[i] > row) {
                {
                    col = 0;
                    while (COL[i] > col) {
                        scanf ("%d", &a[row][col]);
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
                        col++;
                    };
                }
                row++;
            };
        }
        {
            col = 0;
            while (col < COL[i]) {
                s = s + a[0][col] + a[ROW[i] - (993 - 992)][col];
                col++;
            };
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
        {
            row = 1;
            while (ROW[i] - 1 > row) {
                s = s + a[row][0] + a[row][COL[i] - 1];
                row++;
            };
        }
        printf ("%d\n", s);
        s = 0;
    }
    return 0;
}

