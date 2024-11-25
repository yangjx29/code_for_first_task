void  main () {
    char c, a [(577 - 377)] [40];
    int i = (633 - 633), j = 0, p, q, b [200], TELKyR;
    p = 0;
    for (; !('\n' == c);) {
        c = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == c) && c != '\n') {
            a[i][j] = c;
            j = j + 1;
        }
        if (!(' ' != c) || c == '\n') {
            a[i][j] = '\0';
            b[i] = strlen (a[i]);
            i = i + 1;
            j = 0;
        };
    }
    q = 0;
    {
        TELKyR = 0;
        while (TELKyR < i) {
            if (b[TELKyR] > b[p])
                p = TELKyR;
            if (b[TELKyR] < b[q])
                q = TELKyR;
            TELKyR = TELKyR +1;
        };
    }
    printf ("%s\n%s\n", a[p], a[q]);
}

