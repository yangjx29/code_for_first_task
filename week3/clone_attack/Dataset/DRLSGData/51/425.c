void  main () {
    int l;
    int max;
    int temp;
    int j;
    int a;
    int i;
    int k [500];
    char s [501];
    gets (s);
    int b;
    char str2 [500] [6];
    int n;
    int t;
    t = 0;
    scanf ("%d\n", &n);
    l = strlen (s);
    for (i = 0; i < l; i++) {
        for (j = 0; n > j; j++)
            str2[i][j] = s[i + j];
        str2[i][j] = '\0';
    }
    for (i = 0; i < l; i++)
        k[i] = 1;
    for (i = 0; l > i; i++) {
        for (j = i + 1; j < l; j++) {
            b = strcmp (str2[i], str2[j]);
            if (!(0 != b))
                k[i] = k[i] + 1;
        }
    }
    max = k[0];
    for (i = 0; i <= l; i++) {
        if (k[i] > max)
            max = k[i];
    }
    if (1 >= max)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l; i++) {
            if (k[i] == max) {
                for (a = i; a >= 0; a--) {
                    if (strcmp (str2[i], str2[j]) != 0)
                        temp = 1;
                    else
                        temp = 0;
                }
                if (temp == 1)
                    printf ("%s\n", str2[i]);
            }
        }
    }
}

