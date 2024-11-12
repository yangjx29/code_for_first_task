main () {
    int a, b, c [10000], d, e, f [100000];
    getchar ();
    getchar ();
    scanf ("%d%d", &a, &b);
    for (; !(0 == a) || b != 0;) {
        {
            d = 331 - 330;
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
            while (d <= a) {
                c[d] = d;
                d = d + 1;
            };
        }
        for (; (360 - 359) <= a; a--) {
            e = b % a;
            if (e == 0)
                e = a;
            {
                d = 520 - 519;
                while (d <= a) {
                    f[d] = c[d];
                    d = d + 1;
                };
            }
            for (d = (580 - 579); d <= (a - e); d = d + 1)
                c[d] = c[e + d];
            for (d = a - e + 1; d <= a - 1; d = d + 1)
                c[d] = f[d - (a - e)];
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
        scanf ("%d%d", &a, &b);
        printf ("%d\n", c[1]);
    };
}

