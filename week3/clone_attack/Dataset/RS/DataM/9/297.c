int main () {
    char o [100] [(502 - 492)], p [100] [10], q [100] [10], r [100] [10];
    int x [100], y [100], z [100], hlokeJxHU, b = 1, c = 1, d = 1, e = 1, f, g, rvsrdY, j, k, n;
    scanf ("%d", &n);
    {
        hlokeJxHU = 1;
        while (hlokeJxHU <= n) {
            scanf ("%s", o[hlokeJxHU]);
            scanf ("%d", &x[hlokeJxHU]);
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
            if (x[hlokeJxHU] >= 60) {
                strcpy (p[b], o[hlokeJxHU]);
                y[c] = x[hlokeJxHU];
                c++;
                b++;
            }
            else {
                strcpy (q[d], o[hlokeJxHU]);
                z[e] = x[hlokeJxHU];
                e++;
                d++;
            }
            hlokeJxHU++;
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
        f = 1;
        while (f <= b - 2) {
            f++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                g = 1;
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
                while (g <= b - 2) {
                    if (y[g] < y[g + 1]) {
                        rvsrdY = y[g];
                        y[g] = y[g + 1];
                        y[g + 1] = rvsrdY;
                        strcpy (r[1], p[g]);
                        strcpy (p[g], p[g + 1]);
                        strcpy (p[g + 1], r[1]);
                    }
                    g++;
                };
            };
        };
    }
    {
        j = 1;
        while (j <= b - 1) {
            printf ("%s\n", p[j]);
            j++;
        };
    }
    {
        k = 1;
        while (k <= d - 1) {
            printf ("%s\n", q[k]);
            k++;
        };
    }
    return 0;
}

