int main (int qpmIj7, char *argv []) {
    int m;
    int n;
    int u;
    int i;
    int EHV1ncNoy;
    int k;
    double  q = 0, pOxJYR1Wqwz = 0;
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
    double  a [1001];
    double  b [1001];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        pOxJYR1Wqwz = 0, q = 0;
        scanf ("%d", &m);
        {
            EHV1ncNoy = 1;
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
            while (EHV1ncNoy <= m) {
                scanf ("%lf", &a[EHV1ncNoy]);
                q = q + a[EHV1ncNoy];
                EHV1ncNoy = EHV1ncNoy +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            k = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (k <= m) {
                pOxJYR1Wqwz = pOxJYR1Wqwz + (a[k] - q / m) * (a[k] - q / m);
                k = k + 1;
            };
        }
        b[i] = sqrt (pOxJYR1Wqwz / m);
    }
    for (u = 1; u <= n; u = u + 1) {
        printf ("%.5lf\n", b[u]);
    }
    return 0;
}

