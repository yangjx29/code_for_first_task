int main (int argc, char *argv []) {
    int sz [100] [100];
    int row, xeSBfG, IIPLmaFY, e, HAQYKg7XBL, QNOQV81uxmq, min;
    scanf ("%d %d", &row, &xeSBfG);
    {
        HAQYKg7XBL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HAQYKg7XBL < row) {
            {
                QNOQV81uxmq = 0;
                while (QNOQV81uxmq < xeSBfG) {
                    scanf ("%d", &sz[HAQYKg7XBL][QNOQV81uxmq]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QNOQV81uxmq++;
                };
            }
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
            HAQYKg7XBL++;
        };
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
    if (xeSBfG > row) {
        min = row;
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
    }
    else {
        min = xeSBfG;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (e = 0; e < min / 2 + 1; e++) {
        for (QNOQV81uxmq = e; QNOQV81uxmq < xeSBfG - e; QNOQV81uxmq = QNOQV81uxmq +1) {
            printf ("%d\n", sz[e][QNOQV81uxmq]);
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
        if (row % 2 == 1 && row - 2 - e < e + 1) {
            break;
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
        {
            HAQYKg7XBL = e + 1;
            while (HAQYKg7XBL < row - e) {
                printf ("%d\n", sz[HAQYKg7XBL][xeSBfG - 1 - e]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                HAQYKg7XBL++;
            };
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
        if (xeSBfG % 2 == 1 && e > xeSBfG - 2 - e) {
            break;
        }
        for (QNOQV81uxmq = xeSBfG - 2 - e; QNOQV81uxmq >= e; QNOQV81uxmq = QNOQV81uxmq -1) {
            printf ("%d\n", sz[row - 1 - e][QNOQV81uxmq]);
        }
        for (HAQYKg7XBL = row - 2 - e; HAQYKg7XBL > e; HAQYKg7XBL--) {
            printf ("%d\n", sz[HAQYKg7XBL][e]);
        };
    }
    return 0;
}

