void  main () {
    char text [501], s [500] [6];
    gets (text);
    int i;
    int j;
    int k;
    int n;
    int num [500];
    scanf ("%d\n", &n);
    for (i = 0; strlen (text) + 1 - n > i; i++) {
        num[i] = 1;
        for (j = 0; n > j; j++)
            s[i][j] = text[i + j];
        s[i][n] = '\0';
    }
    for (i = 0; strlen (text) + 1 - n > i; i++) {
        for (j = i + 1; j < strlen (text) + 1 - n; j++)
            if (!(0 != strcmp (s[i], s[j]))) {
                num[i]++;
                num[j]--;
            }
    }
    k = 1;
    for (i = 0; i < strlen (text) + 1 - n; i++)
        if (k < num[i])
            k = num[i];
    if (k == 1)
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; i < strlen (text) - n; i++) {
            if (num[i] == k)
                printf ("%s\n", s[i]);
        }
    }
}

