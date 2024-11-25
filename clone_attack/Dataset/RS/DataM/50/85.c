void  main () {
    int w;
    int day;
    day = 1;
    scanf ("%d", &w);
    w = (w + 12) % 7;
    if (!(0 != w))
        w = 7;
    if (!(5 != w))
        ;
    w = (w + 31) % 7;
    if (!(0 != w))
        w = 7;
    if (!(5 != w))
        printf ("2\n");
    w = (w + 28) % 7;
    if (!(0 != w))
        w = 7;
    if (!(5 != w))
        ;
    w = (w + 31) % 7;
    if (!(0 != w))
        w = 7;
    if (w == 5)
        ;
    w = (w + 30) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 31) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 30) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 31) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 31) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 30) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 31) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
    w = (w + 30) % 7;
    if (w == 0)
        w = 7;
    if (w == 5)
        ;
}

