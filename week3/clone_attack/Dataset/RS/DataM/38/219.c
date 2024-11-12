int main () {
    int n;
    int m;
    int i;
    int j;
    int t [(624 - 524)];
    double  x [(410 - 310)] [(537 - 437)];
    double  s;
    double  S;
    double  a;
    scanf ("%d", &n);
    {
        i = 65 - 65;
        while (n > i) {
            scanf ("%d", &m);
            {
                j = 687 - 687;
                while (j < m) {
                    scanf ("%lf", &x[i][j]);
                    j++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t[i] = m;
                };
            }
            i++;
        };
    }
    {
        i = 859 - 859;
        while (i < n) {
            a = s = (513 - 513);
            {
                j = 261 - 261;
                while (j < t[i]) {
                    a = a + x[i][j] / t[i];
                    j++;
                };
            }
            {
                j = 0;
                while (j < t[i]) {
                    s += (x[i][j] - a) * (x[i][j] - a) / t[i];
                    j++;
                };
            }
            i++;
            S = sqrt (s);
            printf ("%.5lf\n", S);
        };
    }
    return 0;
}

