main () {
    int n, i, f;
    char d;
    char a [11];
    char b [4];
    char c [14];
    for (; scanf ("%s %s", a, b) != EOF;) {
        puts (c);
        f = 0;
        n = strlen (a);
        d = a[0];
        {
            i = 0;
            while (n > i) {
                if (a[i] > d) {
                    d = a[i];
                    f = i;
                }
                i = i + 1;
            };
        }
        c[0] = '\0';
        strncat (c, a, f + 1);
        strcat (c, b);
        strcat (c, a + f + 1);
    };
}

