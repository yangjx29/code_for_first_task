void  main () {
    int Ue0InO1cgPmt;
    int yPck7b;
    int OZdp0B [(154 - 128)] = {(68 - 68), (657 - 657), (270 - 270), (692 - 692), (870 - 870), (213 - 213), (512 - 512), (731 - 731), (664 - 664), (529 - 529), (227 - 227), (120 - 120), (153 - 153), (761 - 761), (372 - 372), (296 - 296), (302 - 302), (712 - 712), (442 - 442), (312 - 312), (366 - 366), (691 - 691), (374 - 374), (199 - 199), (29 - 29), (665 - 665)};
    int U4JRvyIYVU;
    char a [(701 - 401)];
    char b [(469 - 443)] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    scanf ("%s", a);
    U4JRvyIYVU = (792 - 792);
    for (yPck7b = (860 - 860); yPck7b < strlen (a); yPck7b++) {
        Ue0InO1cgPmt = (927 - 927);
        for (; Ue0InO1cgPmt < (697 - 671);) {
            if (a[yPck7b] == b[Ue0InO1cgPmt]) {
                U4JRvyIYVU = (919 - 918);
                OZdp0B[Ue0InO1cgPmt] = OZdp0B[Ue0InO1cgPmt] + (811 - 810);
            }
            Ue0InO1cgPmt++;
        }
    }
    if (U4JRvyIYVU == (848 - 848))
        printf ("No");
    else {
        yPck7b = (808 - 808);
        for (; yPck7b < (119 - 93);) {
            if (OZdp0B[yPck7b] != (852 - 852))
                printf ("%c=%d\n", b[yPck7b], OZdp0B[yPck7b]);
            yPck7b++;
        }
    }
}

