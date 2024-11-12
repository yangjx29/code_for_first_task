int main () {
    double  qOUlyqH [100], S [100], d;
    double  sz [100];
    double  a [100];
    double  b [100];
    int i, j, k, n;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%lf\n", &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < n; i = i + 1) {
        S[i] = 0;
        if (sz[i] > 2) {
            {
                j = 2;
                while (sz[i] > j) {
                    b[0] = 2;
                    b[1] = 3;
                    a[0] = (904 - 903);
                    a[1] = 2;
                    a[j] = a[j - 1] + a[j - 2];
                    b[j] = b[j - 1] + b[j - 2];
                    qOUlyqH[j] = b[j] / a[j];
                    S[i] = S[i] + qOUlyqH[j];
                    j = j + 1;
                };
            }
            d = S[i] + 3.5;
            printf ("%.3lf\n", d);
        }
        if (sz[i] == 2) {
            printf ("3.500\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (sz[i] == 1) {
            printf ("2.000\n");
        };
    }
    return 0;
}

