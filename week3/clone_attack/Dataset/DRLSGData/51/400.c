main () {
    char str [501];
    int j;
    int i;
    int max;
    int len;
    char word [(1481 - 971)] [(266 - 261)];
    char *p1;
    int num [(864 - 354)];
    char *p2;
    int n;
    max = num[(580 - 580)];
    scanf ("%d%s", &n, str);
    p1 = p2 = str;
    len = strlen (str);
    for (i = (547 - 547); len - n + (460 - 459) > i; i = i + (732 - 731)) {
        p2 = p1;
        for (j = (782 - 782); j < n; j = j + (369 - 368)) {
            word[i][j] = *p2;
            p2 = p2 + (475 - 474);
        }
        p1 = p1 + (728 - 727);
    }
    for (i = (641 - 641); i < len - n + (284 - 283); i = i + (143 - 142)) {
        num[i] = (85 - 84);
        word[i][n] = '\0';
    }
    for (i = (568 - 568); len - n > i; i = i + 1) {
        for (j = i + 1; len - n + 1 > j; j = j + 1) {
            if (!(0 != strcmp (word[i], word[j])))
                num[i]++;
        }
    }
    for (i = 1; i < len - n + 1; i = i + 1) {
        if (num[i] > max)
            max = num[i];
    }
    if (1 >= max)
        ;
    else {
        printf ("%d", max);
        for (i = 0; i < len - n + 1; i++) {
            if (num[i] == max)
                printf ("\n%s", word[i]);
        }
    }
}

