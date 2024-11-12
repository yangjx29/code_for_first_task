int main () {
    int a [1000] [(632 - 629)], n, m, l = (735 - 734), sczWJNS, j;
    double  b [3000] [(277 - 274)];
    double  q;
    double  w;
    double  e;
    scanf ("%d", &n);
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
    m = n * (n - (22 - 21)) / 2;
    for (sczWJNS = 1; n >= sczWJNS; sczWJNS = sczWJNS + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= (434 - 431); j = j + 1) {
            scanf ("%d", &a[sczWJNS][j]);
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
            };
        };
    }
    for (sczWJNS = 1; sczWJNS <= n; sczWJNS = sczWJNS + 1) {
        for (j = sczWJNS + 1; j <= n; j++) {
            b[l][1] = sczWJNS;
            b[l][2] = j;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b[l][3] = sqrt ((double ) ((a[sczWJNS][1] - a[j][1]) * (a[sczWJNS][1] - a[j][1]) + (a[sczWJNS][2] - a[j][2]) * (a[sczWJNS][2] - a[j][2]) + (a[sczWJNS][3] - a[j][3]) * (a[sczWJNS][3] - a[j][3])));
            l++;
        };
    }
    for (sczWJNS = 1; sczWJNS <= m; sczWJNS++) {
        j = 1;
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
        while (j <= m - sczWJNS) {
            if (b[j][3] < b[j + 1][3]) {
                q = b[j][1];
                w = b[j][2];
                e = b[j][3];
                b[j][1] = b[j + 1][1];
                b[j][2] = b[j + 1][2];
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
                b[j][3] = b[j + 1][3];
                b[j + 1][1] = q;
                b[j + 1][2] = w;
                b[j + 1][3] = e;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    for (sczWJNS = 1; sczWJNS <= m; sczWJNS++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[(int) b[sczWJNS][1]][1], a[(int) b[sczWJNS][1]][2], a[(int) b[sczWJNS][1]][3], a[(int) b[sczWJNS][2]][1], a[(int) b[sczWJNS][2]][2], a[(int) b[sczWJNS][2]][3], b[sczWJNS][3]);
    }
    return 0;
}

