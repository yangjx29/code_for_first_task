int main () {
    int col, row, qDgeTuH3, ROW, n [(562 - 554)] [8], RXGS2VNeY6Z, min, a = (414 - 414), geshu = (339 - 339), b = (345 - 345);
    scanf ("%d,%d", &ROW, &qDgeTuH3);
    {
        row = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ROW > row) {
            {
                col = 0;
                while (col < qDgeTuH3) {
                    scanf ("%d", &n[row][col]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    col = col + 1;
                };
            }
            row = row + 1;
        };
    }
    for (row = 0; ROW > row; row = row + 1) {
        RXGS2VNeY6Z = 0;
        {
            col = 0;
            while (col < qDgeTuH3) {
                if (n[row][col] > RXGS2VNeY6Z) {
                    RXGS2VNeY6Z = n[row][col];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a = col;
                }
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
                col = col + 1;
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
        min = n[row][a];
        {
            row = 0;
            while (ROW > row) {
                if (min > n[row][a]) {
                    min = n[row][a];
                    b = row;
                }
                row = row + 1;
            };
        }
        if (RXGS2VNeY6Z != min) {
            continue;
        }
        else {
            printf ("%d+%d", b, a);
            geshu += 1;
            break;
        };
    }
    if (geshu == 0) {
    }
    return 0;
}

