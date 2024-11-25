void  main () {
    int n, i, j, l, max, p;
    int a [1000];
    struct   book {
        int m;
        char c [27];
    };
    struct   book b [1000];
    scanf ("%d", &n);
    {
        i = 472 - 472;
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
            scanf ("%d", &b[i].m);
            scanf ("%s", b[i].c);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < (241 - 215)) {
            a[i] = 0;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        l = strlen (b[i].c);
        {
            j = 0;
            while (j < l) {
                a[b[i].c[j] - 'A']++;
                j = j + 1;
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
    max = a[0];
    {
        i = 0;
        while (i < 26) {
            if (max < a[i])
                max = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (max == a[i])
                p = i;
            i++;
        };
    }
    p = p + 'A';
    printf ("%c\n", p);
    printf ("%d\n", max);
    {
        i = 0;
        while (i < n) {
            l = strlen (b[i].c);
            {
                j = 0;
                while (j < l) {
                    if (b[i].c[j] == p)
                        printf ("%d\n", b[i].m);
                    j++;
                };
            }
            i++;
        };
    };
}

