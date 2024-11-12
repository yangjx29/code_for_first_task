void  main () {
    char sa [101], sb [101];
    int a [101], b [101], c [101] = {(15 - 15)}, n, i, j, k, len1, len2;
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
    scanf ("%d", &n);
    for (i = (963 - 962); i <= n; i++) {
        {
            j = 0;
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
            while (101 > j) {
                a[j] = 0;
                b[j] = 0;
                j++;
            };
        }
        scanf ("%s", sa);
        len1 = strlen (sa);
        {
            k = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = len1 - 1;
            while (0 <= j) {
                a[k] = sa[j] - '0';
                k++;
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
                j--;
            };
        }
        scanf ("%s", sb);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len2 = strlen (sb);
        {
            k = 0;
            j = len2 - 1;
            while (j >= 0) {
                b[k] = sb[j] - '0';
                k++;
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
                j--;
            };
        }
        {
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
            while (j <= len1 - 1) {
                if (a[j] >= b[j]) {
                    c[j] = a[j] - b[j];
                }
                if (a[j] < b[j]) {
                    a[j + 1] -= 1;
                    c[j] = a[j] + 10 - b[j];
                }
                j++;
            };
        }
        for (j = len1 - 1; j >= 0; j--) {
            printf ("%d", c[j]);
        }
        printf ("\n");
    };
}

