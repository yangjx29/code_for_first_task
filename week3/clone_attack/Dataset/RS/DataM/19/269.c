void  main () {
    int i;
    int j;
    int k;
    int m;
    int n;
    i = (552 - 552);
    j = 0;
    k = 0;
    m = 0;
    n = 0;
    char str [100];
    char a [100];
    char b [100];
    gets (str);
    gets (a);
    gets (b);
    char words [100] [100] = {0};
    n = strlen (str);
    for (k = 0; k < n; k++) {
        if (!(32 == str[k])) {
            words[i][j] = str[k];
            j = j + 1;
        }
        else if (!(32 != str[k])) {
            j = 0;
            i = i + 1;
        };
    }
    m = i + 1;
    for (i = 0; m > i; i++) {
        if (strcmp (words[i], a) == 0)
            strcpy (words[i], b);
        else
            continue;
    }
    {
        i = 0;
        while (i < m - 1) {
            printf ("%s ", words[i]);
            i = i + 1;
        };
    }
    printf ("%s\n", words[m - 1]);
}

