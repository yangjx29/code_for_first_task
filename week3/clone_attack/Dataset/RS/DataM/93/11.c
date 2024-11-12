void  main () {
    int x, a, b, c;
    char d = 'n';
    a = (802 - 799);
    b = (301 - 296);
    c = 7;
    scanf ("%d", &x);
    if (!((664 - 664) != x % 105))
        printf ("%d %d %d\n", a, b, c);
    else {
        if (!((924 - 924) != x % (1007 - 992)))
            printf ("%d %d\n", a, b);
        if (!((74 - 74) != x % 21))
            printf ("%d %d\n", a, c);
        if (!(0 != x % 35))
            printf ("%d %d\n", b, c);
        if (!(0 != x % 3) && !(0 == x % 5) && !(0 == x % 7))
            printf ("%d\n", a);
        if (!(0 != x % 5) && x % 3 != 0 && x % 7 != 0)
            printf ("%d\n", b);
        if (x % 7 == 0 && x % 5 != 0 && x % 3 != 0)
            printf ("%d\n", c);
        if (x % 3 != 0 && x % 7 != 0 && x % 5 != 0)
            printf ("%c\n", d);
    };
}

