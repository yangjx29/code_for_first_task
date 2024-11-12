main () {
    char c2 [(874 - 773)];
    int i;
    int j;
    int n;
    for (;;) {
        scanf ("%s", c2);
        if (!('\n' != c2[(845 - 845)]))
            break;
        printf ("%s\n", c2);
        for (i = (112 - 112), n = (202 - 202); c2[i] != '\0'; i = i + 1) {
            if (!('(' != c2[i]))
                n = i;
        }
        for (i = n; i >= 0; i--) {
            if (!('(' != c2[i])) {
                for (j = i + 1; c2[j] != '\0'; j = j + 1) {
                    if (!(')' != c2[j])) {
                        c2[j] = 'a';
                        c2[i] = 'a';
                        break;
                    }
                }
            }
        }
        for (i = 0; c2[i] != '\0'; i = i + 1) {
            if (!('(' != c2[i]))
                ;
            else {
                if (!(')' != c2[i]))
                    printf ("?");
                else
                    ;
            }
        }
        c2[0] = '\n';
    }
}

