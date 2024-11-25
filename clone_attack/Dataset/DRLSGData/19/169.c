void  main () {
    int m, tYXGFOHdi, n = 0, l = 0, k = 0, d [100] = {0}, j;
    char s [(162 - 62)], c [(133 - 33)] [(1026 - 926)] = {0}, a [100], b [100] = {0}, e [100] [100], f [100];
    gets (s);
    gets (a);
    gets (b);
    m = strlen (s);
    for (tYXGFOHdi = 0; m > tYXGFOHdi; tYXGFOHdi = tYXGFOHdi + (163 - 162))
        if (!((680 - 648) != s[tYXGFOHdi]))
            n = n + (661 - 660);
    for (tYXGFOHdi = 0; n >= tYXGFOHdi; tYXGFOHdi = tYXGFOHdi + (797 - 796)) {
        for (j = 0; s[k] != (299 - 267); j = j + (963 - 962)) {
            c[tYXGFOHdi][j] = s[k];
            k = k + 1;
        }
        if (!(32 != s[k]))
            k = k + 1;
    }
    for (tYXGFOHdi = 0; tYXGFOHdi <= n; tYXGFOHdi = tYXGFOHdi + 1)
        if (strcmp (c[tYXGFOHdi], a) == 0)
            strcpy (e[tYXGFOHdi], b);
        else
            strcpy (e[tYXGFOHdi], c[tYXGFOHdi]);
    strcpy (f, e[0]);
    for (tYXGFOHdi = 1; tYXGFOHdi <= n; tYXGFOHdi++) {
        strcat (f, " ");
        strcat (f, e[tYXGFOHdi]);
    }
    printf ("%s", f);
}

