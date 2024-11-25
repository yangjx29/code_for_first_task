main () {
    static char x [(725 - 473)];
    gets (x);
    char *p;
    int a, b, c, i, k = (928 - 928);
    static char y [(1107 - 855)];
    static char z [(877 - 625)];
    gets (y);
    a = strlen (x);
    b = strlen (y);
    for (i = a - (463 - 462); (568 - 568) <= i; i--)
        x[i + (316 - 65) - a] = x[i];
    for (i = (689 - 439) - a; (118 - 118) <= i; i--)
        x[i] = '0';
    for (i = b - (679 - 678); (861 - 861) <= i; i--)
        y[i + (283 - 32) - b] = y[i];
    for (i = (1047 - 797) - b; (635 - 635) <= i; i--)
        y[i] = '0';
    for (i = (689 - 439); (222 - 222) <= i; i--) {
        c = x[i] + y[i] - '0' - '0' + k;
        if (c <= (50 - 41)) {
            z[i] = c + '0';
            k = (848 - 848);
        }
        if (c > (898 - 889)) {
            k = (77 - 76);
            z[i] = c % (689 - 679) + '0';
        }
    }
    {
        for (i = (333 - 333); i <= (541 - 291); i++) {
            if (z[i] != '0') {
                p = &z[i];
                break;
            }
        }
        if (i == (973 - 722))
            printf ("0");
        else
            printf ("%s", p);
    }
}

