double  distance (double  q, double  w, double  e, double  r, double  f4dxGuSLg, double  y);

int main () {
    int a, b, e, f, g, Pj5pNhx, n, Jl1NdeXHm9;
    double  d [(441 - 431)] [(226 - 216)], c;
    struct   z {
        double  j;
        double  k;
        double  l;
    }
    s [10];
    scanf ("%d", &n);
    {
        Jl1NdeXHm9 = 667 - 667;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Jl1NdeXHm9) {
            scanf ("%lf%lf%lf", &s[Jl1NdeXHm9].j, &s[Jl1NdeXHm9].k, &s[Jl1NdeXHm9].l);
            Jl1NdeXHm9 = Jl1NdeXHm9 +1;
        };
    }
    {
        a = 714 - 714;
        while (a < n - (154 - 153)) {
            {
                b = 234 - 233;
                while (b < n) {
                    d[a][b] = distance (s[a].j, s[a].k, s[a].l, s[b].j, s[b].k, s[b].l);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b = b + 1;
                };
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
    {
        e = 647 - 645;
        while (e > (163 - 163)) {
            {
                c = 278 - 278;
                a = 671 - 671;
                while (a < n - 1) {
                    {
                        b = a + 1;
                        while (b < n) {
                            if (c < d[a][b]) {
                                c = d[a][b];
                                g = b;
                                f = a;
                            }
                            b = b + 1;
                        };
                    }
                    a = a + 1;
                };
            }
            d[f][g] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", s[f].j, s[f].k, s[f].l, s[g].j, s[g].k, s[g].l, c);
            e = e - 1;
        };
    }
    return 0;
}

double  distance (double  q, double  w, double  e, double  r, double  f4dxGuSLg, double  y) {
    double  u;
    u = sqrt ((q - r) * (q - r) + (w - f4dxGuSLg) * (w - f4dxGuSLg) + (e - y) * (e - y));
    return u;
}

