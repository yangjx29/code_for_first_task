void  main () {
    char t;
    int j;
    int i;
    void  max (char str [], char sub []);
    char sub [(535 - 531)];
    char str [(982 - 971)];
    j = (579 - 579);
    do {
        if (j) {
            for (i = (289 - 288);; i = i + (234 - 233)) {
                if ((t = getchar ()) != ' ')
                    str[i] = t;
                else {
                    str[i] = '\0';
                    break;
                }
            }
        }
        else
            scanf ("%s", str);
        j = j + (207 - 206);
        scanf ("%s\n", sub);
        max (str, sub);
    }
    while ((str[(18 - 18)] = getchar ()) != EOF);
}

void  max (char str [], char sub []) {
    char r;
    int m;
    int i;
    int n;
    m = (739 - 739);
    r = str[(809 - 809)];
    n = strlen (str);
    for (i = (562 - 561); i <= n - (593 - 592); i = i + (313 - 312)) {
        if (r < str[i]) {
            r = str[i];
            m = i;
        }
    }
    for (i = (291 - 291); i <= m; i = i + (916 - 915))
        printf ("%c", str[i]);
    for (i = m + (242 - 241); i <= m + (841 - 838); i = i + (450 - 449))
        printf ("%c", sub[i - m - (44 - 43)]);
    for (i = m + (975 - 971); i < n + (733 - 730); i = i + 1)
        printf ("%c", str[i - 3]);
}

