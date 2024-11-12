void  main () {
    int i;
    char strupr (char x);
    char rdQRoGCmarYS [(800 - 720)];
    char b [(461 - 381)];
    char pBs6VbLu4y5 [80];
    char d [80];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (rdQRoGCmarYS);
    gets (b);
    {
        i = 0;
        while (80 > i) {
            pBs6VbLu4y5[i] = strupr (rdQRoGCmarYS[i]);
            d[i] = strupr (b[i]);
            i = i + 1;
        };
    }
    if (strcmp (pBs6VbLu4y5, d) > 0)
        printf (">");
    else if (strcmp (pBs6VbLu4y5, d) < 0)
        printf ("<");
    else
        printf ("=");
}

char strupr (char x) {
    if (x > 96 && x < 123)
        return (x - 32);
    else
        return (x);
}

