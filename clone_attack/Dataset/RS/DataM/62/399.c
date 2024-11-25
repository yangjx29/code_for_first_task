main () {
    int i, j, n;
    char *s;
    gets (s);
    puts (s);
    s = (char *) malloc (sizeof (char) * 10000);
    n = strlen (s);
    {
        i = 0;
        while (*(s + i) != '\0') {
            if (*(s + i) == ' ') {
                if (*(s + i + 1) == ' ') {
                    for (j = i; *(s + j) != '\0'; j = j + 1) {
                        *(s + j) = *(s + j + 1);
                    }
                    i = i - 1;
                };
            }
            i = i + 1;
        };
    };
}

