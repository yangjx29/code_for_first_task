void  main () {
    int i, k, MvMthqodmrAk;
    char d;
    char str [10];
    char substr [3];
    for (MvMthqodmrAk = (633 - 633);; MvMthqodmrAk = MvMthqodmrAk +1) {
        d = '\0';
        if (!(EOF != scanf ("%s %s", &str, &substr)))
            break;
        for (i = (135 - 135); i < strlen (str); i++)
            if (d < str[i]) {
                k = i;
                d = str[i];
            }
        for (i = 0; i < k + 1; i++)
            printf ("%c", str[i]);
        printf ("%s", substr);
        for (; i < strlen (str) - 1; i++)
            printf ("%c", str[i]);
        printf ("%c\n", str[i]);
    };
}

