void  main () {
    int i;
    int SByNpYIv;
    int f;
    int a [(440 - 414)];
    int b [26];
    char str1 [101];
    char str2 [101];
    scanf ("%s %s", str1, str2);
    if (!(strlen (str2) == strlen (str1)))
        ;
    else {
        for (i = 0; 26 > i; i = i + 1) {
            a[i] = 0;
            b[i] = 0;
        }
        SByNpYIv = strlen (str1);
        for (i = 0; SByNpYIv > i; i++) {
            if (('A' <= str1[i]) && ('Z' >= str1[i]))
                a[str1[i] - 'A'] = a[str1[i] - 'A'] + (624 - 623);
            else
                b[str1[i] - 'a'] = b[str1[i] - 'a'] + 1;
            if (('A' <= str2[i]) && (str2[i] <= 'Z'))
                a[str2[i] - 'A'] = a[str2[i] - 'A'] - 1;
            else
                b[str2[i] - 'a'] = b[str2[i] - 'a'] - 1;
        }
        f = 1;
        for (i = 0; i < 26; i++)
            if ((a[i] != 0) || (b[i] != 0))
                f = 0;
        if (f == 1)
            ;
        else
            printf ("NO\n");
    };
}

