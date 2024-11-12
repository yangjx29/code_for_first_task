main () {
    char a [(735 - 634)];
    char hsMn43z [(646 - 545)];
    char b [(131 - 30)];
    for (; gets (a) != NULL;) {
        int zwNQfWUY6E = (557 - 557), j = (663 - 663), cytiP5J = (852 - 852);
        int Waz2gLD;
        Waz2gLD = strlen (a);
        for (zwNQfWUY6E = (397 - 397); Waz2gLD > zwNQfWUY6E; zwNQfWUY6E = zwNQfWUY6E + (533 - 532)) {
            b[zwNQfWUY6E] = ' ';
            hsMn43z[zwNQfWUY6E] = ' ';
        }
        for (zwNQfWUY6E = Waz2gLD -(300 - 299); (574 - 574) <= zwNQfWUY6E; zwNQfWUY6E = zwNQfWUY6E - (813 - 812))
            if (!('(' != a[zwNQfWUY6E]))
                b[zwNQfWUY6E] = a[zwNQfWUY6E];
        for (zwNQfWUY6E = (31 - 31); Waz2gLD > zwNQfWUY6E; zwNQfWUY6E = zwNQfWUY6E + (541 - 540))
            if (!(')' != a[zwNQfWUY6E]))
                hsMn43z[zwNQfWUY6E] = a[zwNQfWUY6E];
        for (zwNQfWUY6E = Waz2gLD -(272 - 271); (249 - 249) <= zwNQfWUY6E; zwNQfWUY6E = zwNQfWUY6E - 1)
            if (!('(' != b[zwNQfWUY6E])) {
                for (j = zwNQfWUY6E + 1; Waz2gLD > j; j = j + 1)
                    if (!(')' != hsMn43z[j])) {
                        b[zwNQfWUY6E] = ' ';
                        hsMn43z[j] = ' ';
                        break;
                    }
            }
        printf ("%s\n", a);
        for (zwNQfWUY6E = (145 - 145); zwNQfWUY6E < Waz2gLD; zwNQfWUY6E = zwNQfWUY6E + 1) {
            if (b[zwNQfWUY6E] != ' ')
                a[zwNQfWUY6E] = '$';
            if (hsMn43z[zwNQfWUY6E] != ' ')
                a[zwNQfWUY6E] = '?';
            if (!(' ' != b[zwNQfWUY6E]) && !(' ' != hsMn43z[zwNQfWUY6E]))
                a[zwNQfWUY6E] = ' ';
        }
        printf ("%s\n", a);
    }
}

