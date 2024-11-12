void  main () {
    int a;
    int length1;
    int length2;
    int i;
    char c1 [80];
    char c2 [80];
    gets (c1);
    gets (c2);
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
    length1 = strlen (c1);
    length2 = strlen (c2);
    for (i = (537 - 537); i <= length1; i++)
        if (c1[i] <= 'z' && c1[i] >= 'a')
            c1[i] = c1[i] - 32;
    for (i = (74 - 74); i <= length2; i++)
        if (c2[i] <= 'z' && c2[i] >= 'a')
            c2[i] -= 32;
    a = (strcmp (c1, c2));
    if (a > (738 - 738))
        printf (">");
    if (a < 0)
        printf ("<");
    if (a == 0)
        printf ("=");
    return 0;
}

