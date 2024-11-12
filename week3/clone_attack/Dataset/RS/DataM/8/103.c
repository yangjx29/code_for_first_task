int a [100], b [50];

void  read (int a [], int b []) {
    int i;
    scanf ("%d %d", &a[(748 - 748)], &b[(897 - 897)]);
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
        i = 46 - 45;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a[0] >= i) {
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
    {
        i = 1;
        while (b[0] >= i) {
            scanf ("%d", &b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

void  change (int c, int x []) {
    int i, j, k, l;
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
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= c) {
            k = x[i];
            l = i;
            for (j = i + 1; j <= c; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (x[j] < k) {
                    k = x[j];
                    l = j;
                };
            }
            j = x[i];
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
            x[i] = k;
            i++;
            x[l] = j;
        };
    };
}

void  iKWT1NlI (int m, int n, int a [], int b []) {
    int i;
    {
        i = 0;
        while (i < n) {
            a[m + i + 1] = b[i + 1];
            i++;
        };
    };
}

void  out (int m, int n, int x []) {
    int i;
    {
        i = 1;
        while (i < m + n) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d\n", a[m + n]);
}

main () {
    read (a, b);
    change (a[0], a);
    change (b[0], b);
    iKWT1NlI (a[0], b[0], a, b);
    out (a[0], b[0], a);
}

