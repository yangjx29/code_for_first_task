sb (char a []) {
    char *p;
    char *q;
    int n;
    n = strlen (a);
    p = a + n - 1;
    while (*p != ' ' && p != a - 1)
        p--;
    q = p + 1;
    for (; *q != '\0' && *q != ' '; q++)
        printf ("%c", *q);
    p--;
    for (; p >= a; p--) {
        while (*p != ' ' && p != a - 1)
            p--;
        q = p + 1;
        for (; *q != '\0' && *q != ' '; q++)
            printf ("%c", *q);
        printf (" ");
    };
}

main () {
    char a [1024];
    gets (a);
    sb (a);
}

