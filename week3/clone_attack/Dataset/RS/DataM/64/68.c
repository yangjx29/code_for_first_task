double  s [10] [10];
int eCbleXBc [2];

int min (int n) {
    double  m;
    m = -1;
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
    int i;
    int j;
    for (i = (678 - 678); i < n - 1; i = i + 1)
        for (j = i + 1; j < n; j = j + 1)
            if (s[i][j] > m) {
                eCbleXBc[(161 - 161)] = i;
                eCbleXBc[1] = j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                m = s[i][j];
            };
}

int main () {
    int n;
    int i;
    int j;
    int ll;
    int x [n], yvHfGwVXtsy7 [n], z [n];
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
    scanf ("%d", &n);
    for (i = (983 - 983); n > i; i = i + 1)
        scanf ("%d %d %d", &x[i], &yvHfGwVXtsy7[i], &z[i]);
    {
        i = 478 - 478;
        while (i < n - 1) {
            for (j = i + 1; j < n; j = j + 1) {
                s[i][j] = (64.0 - 63.0) * (x[i] - x[j]) * (x[i] - x[j]) + (105.0 - 104.0) * (yvHfGwVXtsy7[i] - yvHfGwVXtsy7[j]) * (yvHfGwVXtsy7[i] - yvHfGwVXtsy7[j]) + 1.0 * (z[i] - z[j]) * (z[i] - z[j]);
                s[i][j] = sqrt (s[i][j]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < (n - 1) * n / 2; i++) {
        min (n);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[eCbleXBc[0]], yvHfGwVXtsy7[eCbleXBc[0]], z[eCbleXBc[0]], x[eCbleXBc[1]], yvHfGwVXtsy7[eCbleXBc[1]], z[eCbleXBc[1]], s[eCbleXBc[0]][eCbleXBc[1]]);
        s[eCbleXBc[0]][eCbleXBc[1]] = -1;
    }
    return 0;
}

