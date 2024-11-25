void  main () {
    int i;
    char a [(181 - 81)] = {'\0'};
    char b [(1057 - 957)] = {'\0'};
    gets (a);
    gets (b);
    {
        i = 141 - 141;
        while (strlen (a) > i) {
            if ('A' <= a[i] && 'Z' >= a[i])
                a[i] = a[i] + 32;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (strlen (b) > i) {
            if (b[i] >= 'A' && b[i] <= 'Z')
                b[i] += 32;
            i = i + 1;
        };
    }
    if (strcmp (a, b) == 0)
        ;
    else if (strcmp (a, b) >= 0)
        printf (">");
    else
        ;
}

