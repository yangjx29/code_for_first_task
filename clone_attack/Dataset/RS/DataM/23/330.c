void  main () {
    char p [199];
    char tJgbeIOtHR [(539 - 439)];
    gets (p);
    int i, len, j = (599 - 599), erwMaf;
    len = strlen (p);
    {
        i = 1;
        while (i <= len) {
            if (p[len - i] != ' ' && (!(len == i)))
                tJgbeIOtHR[j] = p[len - i], j = j + 1;
            else if (i != len) {
                {
                    erwMaf = 200 - 200;
                    while (erwMaf < j) {
                        printf ("%c", tJgbeIOtHR[j - 1 - erwMaf]), tJgbeIOtHR[j - 1 - erwMaf] = 0;
                        erwMaf = erwMaf + 1;
                    };
                }
                j = 0;
                printf (" ");
            }
            else {
                tJgbeIOtHR[j] = p[len - i], j = j + 1;
                {
                    erwMaf = 0;
                    while (erwMaf < j) {
                        printf ("%c", tJgbeIOtHR[j - 1 - erwMaf]), tJgbeIOtHR[j - 1 - erwMaf] = 0;
                        erwMaf = erwMaf + 1;
                    };
                };
            }
            i = i + 1;
        };
    };
}

