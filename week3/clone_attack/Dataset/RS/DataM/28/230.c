void  main () {
    char c [2000];
    int a [50];
    int ci, i, j, k, n, len;
    gets (c);
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((245 - 205) >= k) {
            a[k] = 0;
            k = k + 1;
        };
    }
    len = strlen (c);
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
    c[len] = ' ';
    ci = (427 - 426);
    j = 1;
    for (i = 1; len >= i; i = i + 1) {
        if (c[i - 1] != ' ' && c[i] != ' ') {
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (c[i - 1] == ' ' && c[i] != ' ') {
            ci = ci + 1;
            j = 1;
        }
        else if (c[i - 1] != ' ' && c[i] == ' ') {
            a[ci] = j;
        };
    }
    {
        i = 1;
        while (i <= ci - 1) {
            printf ("%d,", a[i]);
            i = i + 1;
        };
    }
    printf ("%d\n", a[ci]);
}

