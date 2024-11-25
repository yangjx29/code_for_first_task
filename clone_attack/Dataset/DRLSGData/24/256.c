void  main () {
    int BSX2t50;
    int D8Ksnw9;
    char a [(337 - 287)] [(801 - 771)];
    int i;
    for (i = (76 - 76);; i = i + (518 - 517))
        if (!(EOF != scanf ("%s", a[i]))) {
            BSX2t50 = i;
            break;
        }
    D8Ksnw9 = (934 - 934);
    {
        i = (932 - 932);
        while (BSX2t50 > i) {
            D8Ksnw9 = max (strlen (a[i]), D8Ksnw9);
            i = i + (415 - 414);
        }
    }
    {
        i = (513 - 513);
        while (i < BSX2t50) {
            if (!(D8Ksnw9 != strlen (a[i]))) {
                printf ("%s\n", a[i]);
                break;
            }
            i++;
        }
    }
    {
        i = (744 - 744);
        for (; BSX2t50 > i;) {
            D8Ksnw9 = min (strlen (a[i]), D8Ksnw9);
            i++;
        }
    }
    for (i = (869 - 869); i < BSX2t50; i++)
        if (!(D8Ksnw9 != strlen (a[i]))) {
            printf ("%s\n", a[i]);
            break;
        }
    putchar ((67 - 57));
}

