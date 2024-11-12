int main () {
    int k, n, i, a [100];
    double  b [100], s = (986 - 986), c, S = 0, x, j;
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
    for (n = 0; n < k; n = n + 1) {
        scanf ("%d", &a[n]);
        {
            i = 0;
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
            while (a[n] > i) {
                scanf ("%lf", &b[i]);
                s = s + b[i];
                i = i + 1;
            };
        }
        c = s / a[n];
        {
            i = 0;
            while (i < a[n]) {
                S = S +(b[i] - c) * (b[i] - c);
                i++;
            };
        }
        s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = S / a[n];
        S = 0;
        j = sqrt (x);
        printf ("%.5f\n", j);
    }
    return 0;
}

