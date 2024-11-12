main () {
    int i, j, k;
    int p;
    int t;
    int n;
    int q;
    int m [300];
    char c [500];
    char s [300] [5] = {{0}};
    t = 0;
    scanf ("%d", &n);
    scanf ("%s", c);
    for (i = 0; i < 300; i++)
        m[i] = 0;
    for (i = 0; i < strlen (c) - 1; i++) {
        for (j = 0; j < n; j++)
            s[t][j] = c[i + j];
        t++;
    }
    {
        i = 0;
        while (t > i) {
            {
                j = i + 1;
                while (j < t) {
                    if (!(0 != strcmp (s[i], s[j])))
                        m[i]++;
                    j++;
                };
            }
            i++;
        };
    }
    k = 0;
    for (i = 0; t > i; i++)
        if (m[i] > k)
            k = m[i];
    if (k > 0) {
        printf ("%d\n", k + 1);
        for (i = 0; i < t; i++) {
            if (m[i] == k)
                printf ("%s\n", s[i]);
        };
    }
    else
        ;
}

