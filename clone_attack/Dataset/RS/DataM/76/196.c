int main () {
    int k;
    int i;
    int e;
    int a [50000];
    int b [50000];
    int n;
    int s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    s = 0;
    scanf ("%d", &n);
    {
        i = 345 - 345;
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
            scanf ("%d %d", &a[i], &b[i]);
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
    {
        k = 740 - 739;
        while (n >= k) {
            for (i = 0; i < n - k; i = i + 1) {
                if (a[i + (337 - 336)] < a[i]) {
                    e = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = e;
                    e = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = e;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        i = 0;
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
        while (n - 1 > i) {
            if (b[i] >= a[i + 1]) {
                if (b[i] > b[i + 1]) {
                    b[i + 1] = b[i];
                }
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
                s = s + 1;
            }
            i = i + 1;
        };
    }
    if (s == n - 1) {
        printf ("%d %d", a[0], b[n - 1]);
    }
    else {
    }
    return 0;
}

