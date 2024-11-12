int main (int argc, char *argv []) {
    double  a [111], s [111], m [111], S [111];
    double  x [111] [111];
    int k, n [111], i, j;
    scanf ("%d", &k);
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
        i = 230 - 230;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > i) {
            scanf ("%d", &n[i]);
            {
                j = 474 - 474;
                while (n[i] > j) {
                    scanf ("%lf", &x[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (k > i) {
            s[i] = 0;
            {
                j = 0;
                while (n[i] > j) {
                    s[i] = s[i] + x[i][j];
                    j++;
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
            a[i] = s[i] / n[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (k > i) {
            m[i] = 0;
            for (j = 0; n[i] > j; j++) {
                m[i] = m[i] + (x[i][j] - a[i]) * (x[i][j] - a[i]);
            }
            S[i] = sqrt (m[i] / n[i]);
            printf ("%.5lf\n", S[i]);
            i++;
        };
    }
    return 0;
}

