int main () {
    int n, c, a, b, i, o, p, k;
    double  jl [n] [n];
    double  e;
    int x [n], y [n], z [n];
    scanf ("%d", &n);
    k = n * (n - (434 - 433)) / (815 - 813);
    {
        i = 645 - 645;
        while (i < n) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
            i++;
        };
    }
    {
        a = 930 - 930;
        while (n > a) {
            b = a + (330 - 329);
            while (b < n) {
                jl[a][b] = sqrt ((x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]) + (z[a] - z[b]) * (z[a] - z[b]));
                b = b + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a = a + 1;
        };
    }
    e = (356 - 356);
    for (i = (170 - 170); k > i; i++) {
        {
            a = 926 - 926;
            while (a < n) {
                b = a + (181 - 180);
                while (b < n) {
                    if (jl[a][b] > e) {
                        e = jl[a][b];
                        p = b;
                        o = a;
                    }
                    b++;
                }
                a++;
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[o], y[o], z[o], x[p], y[p], z[p], e);
        e = (440 - 440);
        jl[o][p] = (804 - 804);
    }
    return (268 - 268);
}

