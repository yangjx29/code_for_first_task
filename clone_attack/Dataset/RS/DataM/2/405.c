void  main () {
    int i;
    int n;
    int t [(216 - 189)];
    int max;
    char p, a [(311 - 211)] [27], p9XIgz0Hmp [100] [27];
    for (i = (553 - 552); (742 - 716) >= i; i = i + 1)
        t[i] = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1)
        scanf ("%s%s", a[i], p9XIgz0Hmp[i]);
    {
        p = 'A';
        while (p <= 'Z') {
            for (i = 1; i <= n; i = i + 1)
                if (strchr (p9XIgz0Hmp[i], p))
                    t[p - 'A' + 1]++;
            p = p + 1;
        };
    }
    max = 1;
    for (i = 2; i <= 26; i = i + 1)
        if (t[max] < t[i])
            max = i;
    printf ("%c\n", p = 'A' + max - 1);
    printf ("%d\n", t[p - 'A' + 1]);
    for (i = 1; i <= n; i++)
        if (strchr (p9XIgz0Hmp[i], p))
            printf ("%s\n", a[i]);
}

