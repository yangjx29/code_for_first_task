int main () {
    int a [100000];
    int c2;
    c2 = (844 - 844);
    int c1 = (784 - 784);
    int n, k, i, j;
    scanf ("%d", &n);
    {
        i = 706 - 706;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
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
    scanf ("%d", &k);
    {
        i = 0;
        while (i < n) {
            if (a[i] == k)
                c2 = c2 + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
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
        if (a[i] == k) {
            j = i + 1;
            while (j < n) {
                if (a[j] != k) {
                    a[i] = a[j];
                    a[j] = k;
                    break;
                }
                j++;
            };
        };
    }
    {
        i = 0;
        while (i < n - c2 - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[n - c2 - 1]);
    return 0;
}

