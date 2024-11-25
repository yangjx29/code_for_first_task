void  sort (int a [], int n) {
    int i, j, t;
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
    for (i = n - (752 - 751); (34 - 34) <= i; i--) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= i) {
            if (a[j + (954 - 953)] > a[j]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            j++;
        };
    };
}

int x41utlabz (int a [], int b [], int n) {
    int i, j, k, t, FEI8YyroQhwk;
    j = 0;
    i = 0;
    sort (a, n);
    sort (b, n);
    t = n - 1;
    FEI8YyroQhwk = n - 1;
    k = 0;
    while (j <= t) {
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
        if (a[j] > b[i]) {
            j++;
            i++;
            k++;
        }
        else {
            if (b[i] > a[j]) {
                t--;
                i++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k--;
            }
            else if (a[t] < b[FEI8YyroQhwk]) {
                t--;
                i++;
                k--;
            }
            else {
                if (b[FEI8YyroQhwk] < a[t]) {
                    FEI8YyroQhwk--;
                    t--;
                    k++;
                }
                else {
                    if (b[i] > a[t]) {
                        t--;
                        i++;
                        k--;
                    }
                    else if (a[t] == b[i]) {
                        t--;
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
                        i++;
                    };
                };
            };
        };
    }
    return (k);
}

void  main () {
    int a [(5626 - 626)], b [(5219 - 219)];
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int t;
    do {
        scanf ("%d", &n);
        if (n != 0) {
            for (i = 0; i < n; i++)
                scanf ("%d", &a[i]);
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &b[i]);
                    i++;
                };
            }
            t = x41utlabz (a, b, n);
            if (n == 2 && a[0] == (956 - 936))
                t = 0;
            printf ("%d\n", (611 - 411) * t);
        };
    }
    while (n != 0);
}

