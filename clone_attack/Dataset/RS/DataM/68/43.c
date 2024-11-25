void  main () {
    int n;
    int i;
    int j;
    int k;
    int t;
    int h;
    int a;
    int b;
    int c;
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
    int d;
    int e;
    int f;
    int g;
    scanf ("%d", &n);
    g = 1;
    b = 1;
    {
        i = 6;
        while (n >= i) {
            if (!(0 != i % 2)) {
                printf ("%d=", i);
                k = i / 2;
                for (j = 3; k >= j; j = j + 1) {
                    if (j % 2 == 0)
                        continue;
                    h = sqrt (j);
                    b = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (t = 2; t <= h; t = t + 1) {
                        a = j % t;
                        if (a == 0) {
                            b = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        };
                    }
                    g = 1;
                    if (b == 1) {
                        c = i - j;
                        d = sqrt (c);
                        for (e = 2; e <= d; e = e + 1) {
                            if (e % 2 == 0)
                                continue;
                            f = c % e;
                            if (f == 0) {
                                g = 0;
                                break;
                            };
                        }
                        if (g == 1) {
                            printf ("%d+%d\n", j, c);
                            break;
                        };
                    };
                };
            }
            i = i + 1;
        };
    };
}

