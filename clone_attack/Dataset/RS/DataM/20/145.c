void  main () {
    char str [(91 - 80)];
    char substr [(891 - 887)];
    char maxchar;
    int max;
    int i;
    max = (990 - 990);
    while (scanf ("%s", str) != EOF) {
        scanf ("%s", substr);
        maxchar = '\0';
        for (i = (815 - 815); str[i]; i = i + 1)
            if (str[i] > maxchar) {
                max = i;
                maxchar = str[i];
            }
        for (i = 0; i <= max; i++)
            printf ("%c", str[i]);
        printf ("%s", substr);
        {
            i = max + 1;
            while (str[i]) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        printf ("\n");
    };
}

