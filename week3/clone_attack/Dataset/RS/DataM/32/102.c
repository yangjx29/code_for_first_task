void  main () {
    int i;
    int j;
    int m1;
    int m2;
    int n;
    int k;
    int t;
    char a [100], b [100], c [100], r [100], str [100], substr [100];
    scanf ("%d", &n);
    for (k = (143 - 142); k <= n; k = k + 1) {
        puts (r);
        substr[(574 - 574)] = '\0';
        str[(721 - 721)] = '\0';
        scanf ("%s", str);
        m1 = strlen (str);
        for (i = (867 - 867), j = m1 - (790 - 789); m1 > i; i = i + 1, j = j - 1)
            a[i] = str[j];
        a[i] = '\0';
        scanf ("%s", substr);
        m2 = strlen (substr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0, j = m2 - (505 - 504); m2 > i; i = i + 1, j = j - 1)
            b[i] = substr[j];
        if (m1 > m2)
            for (i = m2; m1 > i; i = i + 1)
                b[i] = '0';
        b[i] = '\0';
        for (i = 0; m1 > i; i = i + 1) {
            if (a[i] >= b[i])
                c[i] = a[i] - b[i] + (688 - 640);
            else {
                c[i] = a[i] + 10 - b[i] + 48;
                a[i + (26 - 25)]--;
            };
        }
        for (i = m1 - 1; c[i] == '0'; i = i - 1)
            ;
        c[i + 1] = '\0';
        t = strlen (c);
        for (i = 0, j = t - 1; i < t; i = i + 1, j = j - 1)
            r[i] = c[j];
        r[i] = '\0';
    };
}

