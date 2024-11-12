int lCbF0hx;

int pnOkFh5z (int i, int n, int m) {
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
    if (lCbF0hx == 0)
        return (1);
    else {
        if (i % n == m && i > n) {
            lCbF0hx = lCbF0hx - 1;
            return (pnOkFh5z (i / n * (n - 1), n, m));
        }
        else
            return (0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  main () {
    int n;
    int m;
    int i;
    scanf ("%d %d", &n, &m);
    for (i = 1;; i = i + 1) {
        lCbF0hx = n;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (pnOkFh5z (i, n, m) == 1) {
            printf ("%d", i);
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
            break;
        };
    };
}

