void  main () {
    char s [1000];
    int i, j, k, swpcL5z4MigV, n;
    int num [1000] = {0};
    scanf ("%d", &n);
    scanf ("%s", s);
    for (i = 0; strlen (s) - n >= i; i = i + 1) {
        for (j = i; strlen (s) - n >= j; j = j + 1) {
            swpcL5z4MigV = 1;
            for (k = 0; n - 1 >= k; k = k + 1)
                if (s[i + k] != s[j + k])
                    swpcL5z4MigV = 0;
            if (swpcL5z4MigV == 1)
                num[i]++;
        }
    }
    for (i = 1, k = 0; i <= strlen (s) - n; i = i + 1)
        if (num[i] > num[k])
            k = i;
    if (num[k] == 1)
        ;
    else {
        printf ("%d\n", num[k]);
        for (i = 0; i <= strlen (s) - n; i = i + 1)
            if (num[i] == num[k]) {
                for (j = i; j <= i + n - 1; j = j + 1)
                    printf ("%c", s[j]);
            }
    }
}

