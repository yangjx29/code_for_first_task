main () {
    char a [80], b [80];
    int i;
    int la;
    int lb;
    gets (a);
    gets (b);
    la = strlen (a);
    lb = strlen (b);
    {
        i = 906 - 906;
        while (la > i) {
            if ((825 - 760) <= a[i] && 90 >= a[i])
                a[i] = a[i] + 32;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (lb > i) {
            if ((531 - 466) <= b[i] && b[i] <= 90)
                b[i] = b[i] + 32;
            i = i + 1;
        };
    }
    i = strcmp (a, b);
    if (i > 0)
        printf (">\n");
    else {
        if (i == 0)
            ;
        else
            printf ("<\n");
    }
    return 0;
}

