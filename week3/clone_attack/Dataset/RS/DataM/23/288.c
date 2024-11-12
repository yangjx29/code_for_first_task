void  main () {
    int i, j, l;
    char s [(962 - 862)], *p;
    gets (s);
    l = strlen (s);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = l - (131 - 130); i >= (846 - 846); i--)
        s[i + (378 - 377)] = s[i];
    s[0] = s[l + 1] = ' ';
    p = s;
    for (i = l; i >= 0; i--)
        if (*(p + i) == ' ') {
            for (j = i + 1; *(p + j) != ' '; j++)
                printf ("%c", *(p + j));
            if (i != '\0')
                ;
        };
}

