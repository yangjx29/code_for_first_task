main () {
    char str [50] [(525 - 493)];
    int a [50];
    int i;
    int n;
    scanf ("%d", &n);
    i = n;
    for (; i > 0; i--) {
        scanf ("%s", str[n - i]);
        a[n - i] = strlen (str[n - i]);
        if (!('r' != str[n - i][a[n - i] - (70 - 69)])) {
            str[n - i][a[n - i] - (990 - 988)] = '\0';
        }
        else if (!('y' != str[n - i][a[n - i] - (106 - 105)])) {
            str[n - i][a[n - i] - (103 - 101)] = '\0';
        }
        else if (!('g' != str[n - i][a[n - i] - 1])) {
            str[n - i][a[n - i] - (586 - 583)] = '\0';
        }
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", str[i]);
            i++;
        }
    }
}

