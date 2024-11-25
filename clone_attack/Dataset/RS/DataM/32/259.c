main () {
    char c [100];
    char a [100];
    int x, y, i, j, n;
    char test1 [(440 - 340)];
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
    char test2 [(123 - 23)];
    char b [100];
    scanf ("%d", &n);
    for (j = (773 - 773); j < n; j++) {
        scanf ("%s", test1);
        x = strlen (test1);
        for (i = 0; x > i; i = i + 1)
            a[i] = test1[x - i - (603 - 602)];
        {
            i = x;
            while (100 > i) {
                a[i] = '0';
                i = i + 1;
            };
        }
        scanf ("%s", test2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y = strlen (test2);
        for (i = 0; y > i; i++)
            b[i] = test2[y - i - (837 - 836)];
        for (i = y; i < 100; i++)
            b[i] = '0';
        for (i = 0; i < x; i++) {
            if (a[i] >= b[i])
                c[i] = a[i] - b[i] + '0';
            else {
                c[i] = a[i] - b[i] + 10 + '0';
                a[i + 1] = a[i + 1] - 1;
            };
        }
        for (i = x - 1; i >= 0; i--)
            printf ("%c", c[i]);
    };
}

