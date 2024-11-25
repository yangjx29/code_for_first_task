void  main () {
    int gDpAyHoeQn7;
    int i;
    int a;
    int b;
    int c;
    int m;
    int t;
    int r;
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
    int k;
    scanf ("%d\n", &gDpAyHoeQn7);
    scanf ("%d\n%d\n", &a, &b);
    if (a < b) {
        t = a;
        a = b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = t;
    }
    {
        i = 1;
        while (i <= gDpAyHoeQn7 - 2) {
            i = i + 1;
            scanf ("%d\n", &c);
            if (c >= a) {
                r = a, a = c, c = r;
                k = c;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                c = b;
                b = k;
            }
            else if (c >= b) {
                t = b;
                b = c;
                c = t;
            };
        };
    }
    printf ("%d\n%d\n", a, b);
}

