int main (int BWTDAmd5q, char *argv []) {
    int j = 0;
    int a [500];
    int b [500];
    int n, i, k, eX9uC0f5Ri6, c;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (a[i] % 2 != 0 && !(0 == a[i])) {
                b[j] = a[i];
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
                j = j + 1;
            }
            i = i + 1;
        };
    }
    {
        k = 1;
        while (k <= j) {
            eX9uC0f5Ri6 = 0;
            for (i = 0; i <= j - k; i = i + 1) {
                if (b[i] > b[eX9uC0f5Ri6]) {
                    eX9uC0f5Ri6 = i;
                };
            }
            if (eX9uC0f5Ri6 != j - k) {
                c = b[eX9uC0f5Ri6];
                b[eX9uC0f5Ri6] = b[j - k];
                b[j - k] = c;
            }
            k = k + 1;
        };
    }
    {
        k = 0;
        while (k < j - 1) {
            printf ("%d,", b[k]);
            k = k + 1;
        };
    }
    printf ("%d", b[j - 1]);
    return 0;
}

