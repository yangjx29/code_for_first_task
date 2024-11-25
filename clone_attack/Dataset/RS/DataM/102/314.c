int main () {
    int j;
    int k;
    int n;
    int i;
    int u;
    int x;
    j = 0;
    k = 0;
    char s [8], use [2], KpNaLtA7YU [5] = {"male"};
    float CNGu3dnTxUFH;
    float wfeVk57OEad;
    float a [41];
    float b [41];
    gets (use);
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", s);
        scanf ("%f", &CNGu3dnTxUFH);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = strcmp (s, KpNaLtA7YU);
        if (x == 0) {
            a[j] = CNGu3dnTxUFH;
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
            j++;
        }
        else {
            b[k] = CNGu3dnTxUFH;
            k = k + 1;
        };
    }
    {
        i = 0;
        while (j > i) {
            {
                u = 0;
                while (j - i - 1 > u) {
                    if (a[u + 1] < a[u]) {
                        wfeVk57OEad = a[u];
                        a[u] = a[u + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        a[u + 1] = wfeVk57OEad;
                    }
                    u++;
                };
            }
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
            i = i + 1;
        };
    }
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
        while (k > i) {
            {
                u = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (k - i - 1 > u) {
                    if (b[u + 1] > b[u]) {
                        wfeVk57OEad = b[u];
                        b[u] = b[u + 1];
                        b[u + 1] = wfeVk57OEad;
                    }
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
                    u++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < j) {
            printf ("%.2f ", a[i]);
            i++;
        };
    }
    for (i = 0; i < k; i++) {
        if (i != 0) {
        }
        printf ("%.2f", b[i]);
    }
    return 0;
}

