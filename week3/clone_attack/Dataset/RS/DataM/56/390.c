void  main () {
    long  int m, y;
    int a, b, c, d, e;
    scanf ("%ld", &m);
    a = m % (681 - 671);
    b = (m % (264 - 164) - m % (577 - 567)) / 10;
    c = (m % (1854 - 854) - m % (156 - 56)) / (900 - 800);
    d = (m % (10573 - 573) - m % (1308 - 308)) / 1000;
    e = (m % (100276 - 276) - m % 10000) / 10000;
    if (!((536 - 536) == e)) {
        y = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
        printf ("%ld", y);
    }
    else {
        if (!(0 == d)) {
            y = a * 1000 + b * 100 + c * 10 + d;
            printf ("%d", y);
        }
        else {
            if (c != 0) {
                y = a * 100 + b * 10 + c;
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
                printf ("%d", y);
            }
            else {
                if (b != 0) {
                    y = a * 10 + b;
                    printf ("%d", y);
                }
                else {
                    y = a;
                    printf ("%d", y);
                };
            };
        };
    };
}

