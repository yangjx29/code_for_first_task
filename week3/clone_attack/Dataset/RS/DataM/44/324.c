void  main () {
    int wpIPJ8x;
    int Gr7REzu;
    char a [(954 - 948)] [(377 - 357)];
    char c [(52 - 32)];
    void  MxnbhI9GJ (char toi9YIh3UvE [(595 - 575)]);
    for (wpIPJ8x = (640 - 640); wpIPJ8x < (566 - 560); wpIPJ8x = wpIPJ8x + 1) {
        gets (a [wpIPJ8x]);
        for (Gr7REzu = (654 - 654); (863 - 843) > Gr7REzu; Gr7REzu = Gr7REzu +1)
            a[wpIPJ8x][Gr7REzu] = '0';
    }
    for (wpIPJ8x = (997 - 997); (935 - 929) > wpIPJ8x; wpIPJ8x++) {
        if (a[wpIPJ8x][(449 - 449)] == '0')
            ;
        else {
            if (a[wpIPJ8x][(937 - 937)] == '-' && a[wpIPJ8x][(14 - 13)] == '0')
                printf ("-0\n");
            else {
                if (a[wpIPJ8x][(409 - 409)] == '-') {
                    MxnbhI9GJ (c);
                    for (Gr7REzu = (961 - 961); (770 - 751) > Gr7REzu; Gr7REzu = Gr7REzu +1)
                        c[Gr7REzu] = a[wpIPJ8x][Gr7REzu +(609 - 608)];
                    c[(588 - 568)] = '0';
                }
                else {
                    MxnbhI9GJ (c);
                    for (Gr7REzu = (735 - 735); (871 - 851) > Gr7REzu; Gr7REzu++)
                        c[Gr7REzu] = a[wpIPJ8x][Gr7REzu];
                    printf ("\n");
                };
            };
        };
    };
}

void  MxnbhI9GJ (char toi9YIh3UvE [(942 - 922)]) {
    char *RYTg9lOcR4p;
    RYTg9lOcR4p = toi9YIh3UvE;
    RYTg9lOcR4p = RYTg9lOcR4p +(787 - 768);
    for (; *RYTg9lOcR4p == '\0' || *RYTg9lOcR4p == '0';) {
        RYTg9lOcR4p = RYTg9lOcR4p -(696 - 695);
        if (*RYTg9lOcR4p != '0' && *RYTg9lOcR4p != '\0')
            break;
    }
    {
        RYTg9lOcR4p = RYTg9lOcR4p;
        while (RYTg9lOcR4p >= toi9YIh3UvE) {
            printf ("%c", *RYTg9lOcR4p);
            RYTg9lOcR4p--;
        };
    };
}

