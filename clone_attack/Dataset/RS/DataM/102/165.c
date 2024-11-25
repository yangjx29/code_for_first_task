int main () {
    double  v [50], m [(608 - 568)], f [40], t;
    char I5khQCR1Ox [(83 - 73)];
    int n, rgpPBbC3xUul, j = (759 - 759), k = (458 - 458), o, W6XbO0ZMc;
    scanf ("%d", &n);
    {
        rgpPBbC3xUul = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rgpPBbC3xUul < n) {
            scanf ("%s", I5khQCR1Ox);
            scanf ("%lf", &v[rgpPBbC3xUul]);
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
            if (I5khQCR1Ox[0] == 'm') {
                m[j] = v[rgpPBbC3xUul];
                j++;
            }
            else if (I5khQCR1Ox[0] == 'f') {
                f[k] = v[rgpPBbC3xUul];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            }
            rgpPBbC3xUul = rgpPBbC3xUul + 1;
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
    {
        rgpPBbC3xUul = 0;
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
        while (rgpPBbC3xUul < j) {
            {
                o = 0;
                while (o < rgpPBbC3xUul) {
                    if (m[o] > m[rgpPBbC3xUul]) {
                        t = m[o];
                        m[o] = m[rgpPBbC3xUul];
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
                        m[rgpPBbC3xUul] = t;
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
                    o++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            rgpPBbC3xUul = rgpPBbC3xUul + 1;
        };
    }
    {
        rgpPBbC3xUul = 0;
        while (rgpPBbC3xUul < k) {
            {
                W6XbO0ZMc = 0;
                while (W6XbO0ZMc <= rgpPBbC3xUul) {
                    if (f[W6XbO0ZMc] < f[rgpPBbC3xUul]) {
                        t = f[W6XbO0ZMc];
                        f[W6XbO0ZMc] = f[rgpPBbC3xUul];
                        f[rgpPBbC3xUul] = t;
                    }
                    W6XbO0ZMc = W6XbO0ZMc +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rgpPBbC3xUul = rgpPBbC3xUul + 1;
        };
    }
    {
        rgpPBbC3xUul = 0;
        while (rgpPBbC3xUul < j) {
            printf ("%.2lf ", m[rgpPBbC3xUul]);
            rgpPBbC3xUul = rgpPBbC3xUul + 1;
        };
    }
    {
        rgpPBbC3xUul = 0;
        while (rgpPBbC3xUul < k - (522 - 521)) {
            printf ("%.2lf ", f[rgpPBbC3xUul]);
            rgpPBbC3xUul = rgpPBbC3xUul + 1;
        };
    }
    printf ("%.2lf", f[k - 1]);
    return 0;
}

