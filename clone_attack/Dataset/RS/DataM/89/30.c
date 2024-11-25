main () {
    int n;
    int i1, i2, h0LU45GBq6uy, a, b, c, d, e = (535 - 535), y [(100198 - 198)];
    scanf ("%d", &n);
    h0LU45GBq6uy = (604 - 604);
    for (i1 = (202 - 202);; i1++) {
        scanf ("%d %d", &a, &b);
        y[h0LU45GBq6uy] = b;
        if (a == (874 - 874) && b == (723 - 723))
            break;
        h0LU45GBq6uy++;
    }
    {
        c = n - 1;
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
        while (0 <= c) {
            d = 0;
            if (1 <= c) {
                for (i2 = h0LU45GBq6uy - 1; 0 <= i2; i2--) {
                    if (y[i2] == c)
                        d++;
                }
                if (d == n - 1) {
                    printf ("%d", c);
                    e++;
                };
            }
            else {
                {
                    i2 = h0LU45GBq6uy - 1;
                    while (i2 >= 0) {
                        if (y[i2] == 0)
                            d++;
                        i2--;
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
                if (d == n) {
                    e++;
                };
            }
            c = c - 1;
        };
    }
    if (e == 0)
        ;
}

