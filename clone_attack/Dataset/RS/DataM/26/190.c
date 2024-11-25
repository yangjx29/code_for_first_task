void  main () {
    int i, j = 1;
    char s [100];
    gets (s);
    for (i = 0; strlen (s) > i; i = i + 1) {
        j = 1;
        if (s[i] == ' ') {
            while (!(' ' != s[i + j])) {
                s[i + j] = '/';
                j = j + 1;
            };
        };
    }
    {
        i = 0;
        while (i < strlen (s)) {
            if (s[i] != '/')
                printf ("%c", s[i]);
            i = i + 1;
        };
    };
}

