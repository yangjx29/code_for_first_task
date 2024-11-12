int main () {
    int n, VHP6Ar38Z;
    double  a [n], b [n], c [n], u60HamYBrZLe [n], e [n], p, XZQnMaXx;
    scanf ("%d", &n);
    {
        VHP6Ar38Z = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > VHP6Ar38Z) {
            scanf ("%lf %lf %lf", &a[VHP6Ar38Z], &b[VHP6Ar38Z], &c[VHP6Ar38Z]);
            VHP6Ar38Z = VHP6Ar38Z +1;
        };
    }
    {
        VHP6Ar38Z = 0;
        while (n > VHP6Ar38Z) {
            XZQnMaXx = b[VHP6Ar38Z] * b[VHP6Ar38Z] - 4 * a[VHP6Ar38Z] * c[VHP6Ar38Z];
            p = -b[VHP6Ar38Z] / (2 * a[VHP6Ar38Z]);
            if (1e-6 >= fabs (XZQnMaXx)) {
                u60HamYBrZLe[VHP6Ar38Z] = p;
                printf ("x1=x2=%.5f\n", u60HamYBrZLe[VHP6Ar38Z]);
            }
            if (1e-6 < XZQnMaXx) {
                u60HamYBrZLe[VHP6Ar38Z] = p + (sqrt (XZQnMaXx)) / (2 * a[VHP6Ar38Z]);
                e[VHP6Ar38Z] = p - (sqrt (XZQnMaXx)) / (2 * a[VHP6Ar38Z]);
                printf ("x1=%.5f;x2=%.5f\n", u60HamYBrZLe[VHP6Ar38Z], e[VHP6Ar38Z]);
            }
            if (XZQnMaXx < -1e-6) {
                u60HamYBrZLe[VHP6Ar38Z] = p;
                if (fabs (p) < 1e-6)
                    u60HamYBrZLe[VHP6Ar38Z] = 0;
                e[VHP6Ar38Z] = sqrt (-XZQnMaXx) / (2 * a[VHP6Ar38Z]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", u60HamYBrZLe[VHP6Ar38Z], e[VHP6Ar38Z], u60HamYBrZLe[VHP6Ar38Z], e[VHP6Ar38Z]);
            }
            VHP6Ar38Z++;
        };
    };
}

