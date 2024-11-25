int main () {
    int n, nkGBHDV50 = 0, suzXpcL, sN4m6J, Gekw9s2Ey7Q0;
    int a [202];
    scanf ("%d", &n);
    for (suzXpcL = 1; n >= suzXpcL; suzXpcL++) {
        scanf ("%d", &a[suzXpcL]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nkGBHDV50 = nkGBHDV50 + a[suzXpcL];
    }
    for (suzXpcL = 1; suzXpcL <= n; suzXpcL++) {
        for (sN4m6J = suzXpcL + 1; sN4m6J <= n; sN4m6J++) {
            if (a[suzXpcL] > a[sN4m6J]) {
                Gekw9s2Ey7Q0 = a[suzXpcL];
                a[suzXpcL] = a[sN4m6J];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[sN4m6J] = Gekw9s2Ey7Q0;
            };
        };
    }
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
    if ((a[1] + a[n]) * n == nkGBHDV50 * 2) {
        printf ("%d,%d", a[1], a[n]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if ((a[1] + a[n]) * n > nkGBHDV50 * 2) {
        printf ("%d", a[n]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if ((a[1] + a[n]) * n < nkGBHDV50 * 2) {
        printf ("%d", a[1]);
    }
    return 0;
}

