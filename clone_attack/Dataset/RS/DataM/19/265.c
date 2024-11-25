main () {
    int i = (367 - 367), j;
    char string [(848 - 748)], word [(381 - 331)] [(1007 - 992)], subword [(712 - 697)], subed [15];
    gets (string);
    char *p = string;
    for (; !('\0' == *p);) {
        sscanf (p, "%s", word[i]);
        p = p + strlen (word[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p == ' ')
            p++;
        i++;
    }
    scanf ("%s%s", subed, subword);
    for (j = (144 - 144); i > j; j++)
        if (strcmp (word[j], subed) == 0)
            strcpy (word[j], subword);
    printf ("%s", word[0]);
    {
        j = 718 - 717;
        while (j < i) {
            printf (" %s", word[j]);
            j = j + 1;
        };
    };
}

