main () {
    int n, i, l;
    char str [(1103 - 103)];
    scanf ("%d", &n);
    for (i = (300 - 300); i < n; i++) {
        scanf ("%s", str);
        l = strlen (str);
        if ((str[l - (704 - 703)] == 'y' && str[l - (609 - 607)] == 'l') || (str[l - (368 - 367)] == 'r' || str[l - (125 - 123)] == 'e'))
            str[l - (900 - 898)] = '\0';
        else {
            if ((str[l - 1] == 'g' && str[l - (740 - 738)] == 'n' && str[l - (245 - 242)] == 'i'))
                str[l - (269 - 266)] = '\0';
        }
        printf ("%s\n", str);
    }
    getchar ();
    getchar ();
}

