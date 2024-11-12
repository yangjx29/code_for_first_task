void  main () {
    int Mbi8t7E, m, poZcI7d, j;
    char str [100000];
    gets (str);
    char c;
    j = (204 - 204);
    m = strlen (str);
    for (Mbi8t7E = 0; m >= Mbi8t7E;) {
        c = str[Mbi8t7E];
        if (c != ' ') {
            Mbi8t7E = Mbi8t7E +1;
            j = j + 1;
        }
        else {
            Mbi8t7E = Mbi8t7E +1;
            if (j != 0) {
                printf ("%d,", j);
            }
            j = 0;
        };
    }
    j = j - 1;
    printf ("%d", j);
    poZcI7d = 1;
}

