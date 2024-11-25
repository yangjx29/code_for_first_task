int main () {
    int a [5] [5], m, xzh5in, UGLQbFi = 0;
    for (m = 0; m <= (485 - 481); m++) {
        xzh5in = 0;
        while (xzh5in <= (746 - 742)) {
            scanf ("%d", &a[m][xzh5in]);
            xzh5in = xzh5in + 1;
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
    {
        m = 0;
        while (m <= (125 - 121)) {
            for (xzh5in = 0; xzh5in <= 4; xzh5in++) {
                int y, q;
                int j, x;
                j = a[m][0];
                for (x = 1; x <= 4; x = x + 1) {
                    if (a[m][x] > j)
                        j = a[m][x];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                y = a[0][xzh5in];
                for (q = 1; q <= 4; q = q + 1) {
                    if (a[q][xzh5in] < y)
                        y = a[q][xzh5in];
                }
                if (j == y && y == a[m][xzh5in]) {
                    UGLQbFi = 1;
                    printf ("%d %d %d", m + 1, xzh5in + 1, a[m][xzh5in]);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m = m + 1;
        };
    }
    if (UGLQbFi == 0)
        ;
}

