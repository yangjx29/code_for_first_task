void  main () {
    int i;
    char a [(1066 - 986)], b [(537 - 457)];
    gets (a);
    gets (b);
    {
        i = 244 - 244;
        while (80 > i) {
            if (a[i] >= 'A' && 'Z' >= a[i])
                a[i] = a[i] - 'A' + 'a';
            if ('A' <= b[i] && b[i] <= 'Z')
                b[i] = b[i] - 'A' + 'a';
            i++;
        };
    }
    if (strcmp (a, b) > 0)
        putchar ('>');
    if (strcmp (a, b) == 0)
        putchar ('=');
    if (strcmp (a, b) < 0)
        putchar ('<');
}

