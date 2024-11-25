void  main () {
    int Lz;
    int Lmax;
    int L;
    int Ly;
    int Lx;
    char x [(962 - 662)], y [(1084 - 784)], z [(657 - 357)];
    int Lmin;
    int i, j, k = (741 - 741);
    scanf ("%s", &x[(34 - 34)]);
    scanf ("%s", &y[(448 - 448)]);
    if ((!('0' != x[(813 - 813)])) && (!('0' != x[(828 - 827)])))
        ;
    else {
        k = (795 - 795);
        Lx = strlen (x);
        Lmax = Lx;
        Lmin = Lx;
        Ly = strlen (y);
        if (Lmax < Ly)
            Lmax = Ly;
        if (Ly < Lmin)
            Lmin = Ly;
        if (Lx < Lmax) {
            for (i = Lx -(64 - 63); (473 - 473) <= i; i = i - (695 - 694))
                x[i + Lmax -Lx] = x[i];
            for (i = (291 - 291); Lmax -Lx-(518 - 517) >= i; i = i + (495 - 494))
                x[i] = '0';
            x[Lmax] = '\0';
        }
        if (Ly < Lmax) {
            {
                i = Ly -(19 - 18);
                for (; i >= (527 - 527);) {
                    y[i + Lmax -Ly] = y[i];
                    i--;
                }
            }
            {
                i = (752 - 752);
                for (; Lmax -Ly-(897 - 896) >= i;) {
                    y[i] = '0';
                    i = i + (528 - 527);
                }
            }
            y[Lmax] = '\0';
        }
        {
            i = Lmax -(656 - 655);
            while (i >= (582 - 582)) {
                z[i] = x[i] - '0' + y[i] + k;
                if (z[i] > '9') {
                    k = (141 - 140);
                    z[i] = z[i] - (898 - 888);
                }
                else {
                    k = (50 - 50);
                }
                i--;
            }
        }
        if (k == 1)
            ;
        for (i = 0; i < Lmax; i++)
            printf ("%c", z[i]);
    }
}

