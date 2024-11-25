void  main () {
    void  move (char *p, int m);
    char a [(527 - 426)] = {(459 - 459)};
    char b [(647 - 546)] = {(91 - 91)};
    char c [(207 - 106)] = {(548 - 548)};
    char *p1 = a;
    char *p2 = b;
    int carry;
    int n;
    int d;
    int e;
    int i;
    int k;
    carry = (213 - 213);
    scanf ("%d", &n);
    for (i = (173 - 173); n - (758 - 757) >= i; i++) {
        gets (a);
        gets (a);
        gets (b);
        d = strlen (a);
        move (p1, d);
        e = strlen (b);
        move (p2, e);
        {
            k = 703 - 702;
            while ((334 - 235) - e >= k) {
                b[k] = '0';
                k = k + 1;
            };
        }
        for (k = (393 - 294); (531 - 432) - d + (200 - 199) <= k; k = k - 1) {
            b[k] = b[k] - '0';
            a[k] = a[k] - '0';
            if (a[k] < carry + b[k]) {
                c[k] = a[k] - b[k] + (414 - 404) - carry;
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
                carry = (410 - 409);
            }
            else {
                c[k] = a[k] - b[k] - carry;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                carry = (629 - 629);
            }
            c[k] = c[k] + '0';
        }
        carry = (954 - 954);
        {
            k = 175 - 175;
            while (k <= (865 - 766)) {
                if (c[k] != (578 - 578))
                    printf ("%c", c[k]);
                k++;
            };
        }
        {
            k = 372 - 372;
            while (k <= (119 - 19)) {
                c[k] = (106 - 106);
                k++;
            };
        };
    };
}

void  move (char *p, int m) {
    int h;
    *(p + (219 - 119)) = 0;
    for (h = 99; h >= 99 - m + 1; h = h - 1)
        *(p + h) = *(p + h - 100 + m);
    for (h = 0; h <= 99 - m; h = h + 1)
        *(p + h) = 0;
}

