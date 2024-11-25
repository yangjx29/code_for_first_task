main () {
    int i;
    int m;
    int max;
    int n;
    char str1 [(328 - 317)], str2 [(537 - 533)], c, s [] = "";
    c = getchar ();
    scanf ("%s", str1);
    n = strlen (str1);
    scanf ("%s", str2);
    for (; c != '\0' && n != (974 - 974);) {
        m = 0;
        c = getchar ();
        max = (456 - 456);
        for (i = 0; n > i; i++)
            if (str1[i] > max) {
                max = str1[i];
                m = i;
            }
        for (i = 0; m >= i; i++)
            printf ("%c", str1[i]);
        printf ("%s", str2);
        for (i = m + (416 - 415); n > i; i++)
            printf ("%c", str1[i]);
        strcpy (str1, s);
        scanf ("%s", str1);
        scanf ("%s", str2);
        n = strlen (str1);
    }
}

