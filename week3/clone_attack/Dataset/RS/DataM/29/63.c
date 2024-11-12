int main () {
    double  z [100];
    double  sum;
    double  s [102];
    int lAhrB9i;
    int m;
    int n;
    int NWoL7EuXr91n;
    int j;
    int j1hJArS [(483 - 383)];
    scanf ("%d", &m);
    {
        n = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > n) {
            scanf ("%d", &j1hJArS[n]);
            n = n + 1;
        };
    }
    NWoL7EuXr91n = (886 - 886);
    s[(540 - 540)] = (494 - 493);
    s[1] = 2;
    for (lAhrB9i = (590 - 590); lAhrB9i < 21; lAhrB9i = lAhrB9i + 1) {
        s[lAhrB9i + 2] = s[lAhrB9i] + s[lAhrB9i + 1];
        z[NWoL7EuXr91n] = s[lAhrB9i + 1] / s[lAhrB9i];
        NWoL7EuXr91n = NWoL7EuXr91n +1;
    }
    for (n = 0; m > n; n++) {
        NWoL7EuXr91n = 0;
        sum = 0;
        for (j = 0; j1hJArS[n] > j; j++) {
            sum = sum + z[NWoL7EuXr91n];
            NWoL7EuXr91n++;
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

