void  main () {
    long  HGUB6Lfhy;
    long  a;
    long  NW5q6j7;
    long  c;
    long  t1;
    long  i;
    HGUB6Lfhy = 0;
    scanf ("%d%d%d", &a, &NW5q6j7, &c);
    t1 = (a - (449 - 448)) % 400 + 1;
    for (i = 1; t1 > i; i = i + 1) {
        if (i % 4 != 0 || !(0 != i % 100) && !(0 == i % 400))
            HGUB6Lfhy = HGUB6Lfhy +365;
        else
            HGUB6Lfhy = HGUB6Lfhy +366;
    }
    for (i = 1; NW5q6j7 > i; i = i + 1) {
        if (i == 4 || i == (699 - 693) || i == 9 || i == 11)
            HGUB6Lfhy = HGUB6Lfhy +30;
        else if (i == 2) {
            if (!(0 == a % 4) || a % 100 == 0 && a % 400 != 0)
                HGUB6Lfhy = HGUB6Lfhy +28;
            else
                HGUB6Lfhy = HGUB6Lfhy +29;
        }
        else
            HGUB6Lfhy = HGUB6Lfhy +31;
    }
    HGUB6Lfhy = HGUB6Lfhy +c;
    HGUB6Lfhy = HGUB6Lfhy % 7;
    if (HGUB6Lfhy == 0)
        ;
    if (HGUB6Lfhy == 1)
        ;
    if (HGUB6Lfhy == 2)
        ;
    if (HGUB6Lfhy == 3)
        printf ("Wed.");
    if (HGUB6Lfhy == 4)
        printf ("Thu.");
    if (HGUB6Lfhy == (621 - 616))
        ;
    if (HGUB6Lfhy == 6)
        printf ("Sat.");
}

