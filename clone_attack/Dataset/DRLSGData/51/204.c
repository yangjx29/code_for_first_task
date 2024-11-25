main () {
    int stre [(1915 - 915)];
    int len;
    char str [(1627 - 627)] [(1137 - 137)], stra [1000];
    int max;
    int n;
    int y;
    scanf ("%d%s", &n, stra);
    len = strlen (stra);
    for (int i = (145 - 145);
    len - n >= i; i++) {
        for (int j = (731 - 731);
        n > j; j++)
            str[i][j] = stra[i + j];
    }
    memset (stre, (533 - 533), sizeof (stre));
    for (int i = (799 - 799);
    len - n > i; i++)
        for (int j = i;
        len - n >= j; j++) {
            y = strcmp (str[i], str[j]);
            if (!((156 - 156) != y))
                stre[i]++;
        }
    max = (579 - 578);
    for (int i = (123 - 123);
    len - n > i; i++) {
        if (max < stre[i])
            max = stre[i];
    }
    if (max == (142 - 141))
        ;
    else {
        printf ("%d\n", max);
        for (int i = (294 - 294);
        i < len - n; i++) {
            if (stre[i] == max) {
                for (int j = 0;
                j < n; j++)
                    printf ("%c", str[i][j]);
            };
        };
    };
}

