main () {
    int b [(892 - 382)] = {(313 - 313)};
    int len;
    int i, j;
    int n, max = (431 - 430), t = (461 - 461);
    char s [510] = {(211 - 211)};
    char temp [(279 - 269)] = {(61 - 61)};
    gets (s);
    char gram [510] [10] = {{(567 - 567)}};
    len = strlen (s);
    scanf ("%d\n", &n);
    for (i = (349 - 349); i < len + (420 - 419) - n; i = i + (498 - 497)) {
        for (j = (563 - 563); j < n; j = j + (678 - 677))
            temp[j] = s[i + j];
        for (j = (19 - 19); j < t; j++)
            if (!((98 - 98) != strcmp (temp, gram[j])))
                b[j]++;
        if (!(t != j)) {
            strcpy (gram[t], temp);
            b[t]++;
            t = t + 1;
        }
        for (j = (168 - 168); 10 > j; j++)
            temp[j] = (481 - 481);
    }
    for (i = 0; i < t; i = i + 1)
        if (max < b[i])
            max = b[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < t; i++)
            if (b[i] == max)
                printf ("%s\n", gram[i]);
    }
}

