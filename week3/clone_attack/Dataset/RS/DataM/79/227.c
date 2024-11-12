int main () {
    int iQmy1A, nnryBKl3, GAPhUOjpx;
    int y [300];
    int xfPHzuCU8Fo [300];
    int tpTVyjXUg5c [300];
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
    nnryBKl3 = 0;
    for (; 1;) {
        scanf ("%d %d", &xfPHzuCU8Fo[nnryBKl3], &tpTVyjXUg5c[nnryBKl3]);
        if ((xfPHzuCU8Fo[nnryBKl3] == 0) || (tpTVyjXUg5c[nnryBKl3] == 0))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nnryBKl3 = nnryBKl3 + 1;
    }
    {
        GAPhUOjpx = 0;
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
        while (GAPhUOjpx < nnryBKl3) {
            y[GAPhUOjpx] = 0;
            {
                iQmy1A = 1;
                while (iQmy1A < xfPHzuCU8Fo[GAPhUOjpx]) {
                    y[GAPhUOjpx] = (y[GAPhUOjpx] + tpTVyjXUg5c[GAPhUOjpx]) % (iQmy1A + 1);
                    iQmy1A++;
                };
            }
            printf ("%d\n", y[GAPhUOjpx] + 1);
            GAPhUOjpx = GAPhUOjpx +1;
        };
    }
    return 0;
}

