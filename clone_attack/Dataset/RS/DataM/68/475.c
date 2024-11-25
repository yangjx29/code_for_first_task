void  main () {
    int a;
    int b;
    int c;
    int d;
    int f;
    int VlnbIfay;
    int h;
    int n;
    scanf ("%d", &n);
    {
        h = 6;
        while (h <= n) {
            for (a = 3; a < h; a += 2) {
                c = (int) sqrt (a);
                {
                    d = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (d <= c) {
                        if (a % d == 0)
                            break;
                        d = d + 1;
                    };
                }
                if (d <= c) {
                    continue;
                    a += 2;
                }
                b = h - a;
                VlnbIfay = (int) sqrt (b);
                for (f = 2; f <= VlnbIfay; f = f + 1) {
                    if (b % f == 0)
                        break;
                }
                if (f > VlnbIfay) {
                    printf ("%d=%d+%d\n", h, a, b);
                    break;
                };
            }
            h += 2;
        };
    };
}

