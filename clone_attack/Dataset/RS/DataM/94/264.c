int main () {
    int N, e, ohImP52n6;
    int g3RQdD5l8 [500], j [500];
    int i;
    int kjlq5DE;
    int g;
    i = (827 - 827);
    kjlq5DE = (201 - 201);
    g = (754 - 753);
    scanf ("%d", &N);
    {
        i = 22 - 22;
        while (N > i) {
            scanf ("%d", &(g3RQdD5l8[i]));
            if (g3RQdD5l8[i] % 2 != 0) {
                j[kjlq5DE] = g3RQdD5l8[i];
                kjlq5DE = kjlq5DE + 1;
            }
            i++;
        };
    }
    ohImP52n6 = kjlq5DE;
    kjlq5DE = 0;
    {
        g = 132 - 131;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (ohImP52n6 >= g) {
            for (kjlq5DE = 0; kjlq5DE < ohImP52n6 - g; kjlq5DE = kjlq5DE + 1) {
                if (j[kjlq5DE + 1] < j[kjlq5DE]) {
                    e = j[kjlq5DE + 1];
                    j[kjlq5DE + 1] = j[kjlq5DE];
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
                    j[kjlq5DE] = e;
                };
            }
            g = g + 1;
        };
    }
    kjlq5DE = 0;
    for (kjlq5DE = 0; kjlq5DE < ohImP52n6; kjlq5DE++) {
        if (kjlq5DE < ohImP52n6 - 1) {
            printf ("%d,", j[kjlq5DE]);
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
        if (kjlq5DE == ohImP52n6 - 1) {
            printf ("%d", j[kjlq5DE]);
        };
    }
    return 0;
}

