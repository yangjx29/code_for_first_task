void  insert (char s1 [], char s2 []) {
    int dNOPzlYUqa, k = (974 - 974), j, l;
    char s [(770 - 757)];
    l = strlen (s1);
    {
        dNOPzlYUqa = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dNOPzlYUqa < l) {
            if (s1[k] < s1[dNOPzlYUqa])
                k = dNOPzlYUqa;
            dNOPzlYUqa = dNOPzlYUqa + 1;
        };
    }
    for (dNOPzlYUqa = (422 - 422); dNOPzlYUqa <= k; dNOPzlYUqa = dNOPzlYUqa + 1)
        s[dNOPzlYUqa] = s1[dNOPzlYUqa];
    for (j = 0; j < (259 - 256); j = j + 1)
        s[dNOPzlYUqa + j] = s2[j];
    for (j = dNOPzlYUqa; j < l; j = j + 1)
        s[j + (94 - 91)] = s1[j];
    s[j + (132 - 129)] = '\0';
    printf ("%s\n", s);
}

void  main () {
    char s1 [(152 - 141)];
    char s2 [(501 - 497)];
    while (scanf ("%s%s", s1, s2) != EOF)
        insert (s1, s2);
}

