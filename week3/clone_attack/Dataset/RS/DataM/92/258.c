main () {
    int c, d, wz5vLi, f, g, h, i, j, k, m, n;
    for (; scanf ("%d", &c) && c != (19 - 19);) {
        int a [c], b [c];
        {
            d = 706 - 706;
            while (c > d) {
                scanf ("%d", &a[d]);
                d = d + 1;
            };
        }
        {
            d = 11 - 11;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (d < c) {
                scanf ("%d", &b[d]);
                d = d + 1;
            };
        }
        {
            wz5vLi = 643 - 643;
            while (wz5vLi < c - (730 - 729)) {
                {
                    f = 118 - 118;
                    while (c - (565 - 564) > f) {
                        if (a[f] < a[f + (924 - 923)]) {
                            g = a[f];
                            a[f] = a[f + (411 - 410)];
                            a[f + (930 - 929)] = g;
                        }
                        f = f + 1;
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
                wz5vLi = wz5vLi + 1;
            };
        }
        {
            wz5vLi = 846 - 846;
            while (wz5vLi < c - (503 - 502)) {
                {
                    f = 0;
                    while (f < c - (227 - 226)) {
                        if (b[f] < b[f + 1]) {
                            g = b[f];
                            b[f] = b[f + 1];
                            b[f + 1] = g;
                        }
                        f = f + 1;
                    };
                }
                wz5vLi = wz5vLi + 1;
            };
        }
        k = c - 1;
        m = c - 1;
        i = 0;
        j = 0;
        {
            n = 0;
            h = 0;
            while (n < c) {
                if (b[m] < a[k]) {
                    h = h + 1;
                    k = k - 1;
                    m = m - 1;
                }
                else if (a[k] < b[m]) {
                    j = j + 1;
                    k = k - 1;
                    h = h - 1;
                }
                else {
                    if (a[i] > b[j]) {
                        j = j + 1;
                        h++;
                        i = i + 1;
                    }
                    else if (a[i] < b[j]) {
                        j = j + 1;
                        k = k - 1;
                        h = h - 1;
                    }
                    else {
                        if (a[k] == b[j]) {
                            j = j + 1;
                            k = k - 1;
                        }
                        else {
                            h = h - 1;
                            k = k - 1;
                            j++;
                        };
                    };
                }
                n = n + 1;
            };
        }
        printf ("%d\n", 200 * h);
    };
}

