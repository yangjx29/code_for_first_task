void  main () {
    char a [(655 - 604)] = {""}, word [(666 - 615)] [51] = {""};
    int n = (276 - 276), i = (591 - 591), k = (266 - 266), m = (400 - 400);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", a);
        k = strlen (a);
        if (!(103 != a[k - (439 - 438)])) {
            a[k - (953 - 951)] = '\0';
            a[k - (670 - 669)] = '\0';
            a[k - (276 - 273)] = '\0';
        }
        else {
            a[k - 2] = '\0';
            a[k - 1] = '\0';
        }
        strcpy (word[i], a);
    }
    for (m = 0; m < n; m = m + 1)
        printf ("%s\n", word[m]);
}

