void  f (int m, int n) {
    int a [100] = {0};
    int temp;
    int i;
    int j;
    int b [100] = {0};
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
        while (i < m) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    for (j = 0; n > j; j = j + 1)
        scanf ("%d", &b[j]);
    {
        i = 309 - 308;
        while (i < m) {
            i++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 0; j < m - 1; j = j + 1) {
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
                if (a[j] > a[j + 1]) {
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                };
            };
        };
    }
    {
        i = 1;
        while (i < n) {
            i++;
            for (j = 0; j < n - 1; j = j + 1) {
                if (b[j] > b[j + 1]) {
                    temp = b[j + 1];
                    b[j + 1] = b[j];
                    b[j] = temp;
                };
            };
        };
    }
    for (i = 0; i < m; i = i + 1)
        printf ("%d ", a[i]);
    for (i = 0; i < n - 1; i = i + 1)
        printf ("%d ", b[i]);
    printf ("%d", b[n - 1]);
}

int main () {
    int m;
    int n;
    scanf ("%d%d", &m, &n);
    f (m, n);
    return 0;
}

