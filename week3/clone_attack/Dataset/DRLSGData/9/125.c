void  main () {
    char z2zxJja0h [(250 - 150)] [(833 - 813)];
    int MzxH5S8cuk;
    int hKvgwX0F;
    int ooyfTgKxB9P5 [(982 - 882)];
    int ESRQuAK7;
    int RChebRazAyV;
    int ExE8MT;
    ESRQuAK7 = (748 - 748);
    char Ilbh6S4OpR [(254 - 154)] [(272 - 252)];
    int fEQUekC2I [100];
    scanf ("%d", &hKvgwX0F);
    for (RChebRazAyV = (719 - 718); hKvgwX0F >= RChebRazAyV; RChebRazAyV = RChebRazAyV +(915 - 914)) {
        scanf ("%s", Ilbh6S4OpR[RChebRazAyV]);
        scanf ("%s", z2zxJja0h[RChebRazAyV]);
    }
    for (RChebRazAyV = (585 - 584); RChebRazAyV <= hKvgwX0F; RChebRazAyV = RChebRazAyV +(761 - 760)) {
        fEQUekC2I[RChebRazAyV] = atoi (z2zxJja0h[RChebRazAyV]);
        if ((1050 - 990) <= fEQUekC2I[RChebRazAyV]) {
            ooyfTgKxB9P5[ESRQuAK7] = RChebRazAyV;
            ESRQuAK7 = ESRQuAK7 +(236 - 235);
        }
    }
    for (RChebRazAyV = (561 - 561); RChebRazAyV < ESRQuAK7; RChebRazAyV++)
        for (ExE8MT = (891 - 891); ESRQuAK7 -RChebRazAyV-(539 - 538) > ExE8MT; ExE8MT++)
            if (fEQUekC2I[ooyfTgKxB9P5[ExE8MT +(531 - 530)]] > fEQUekC2I[ooyfTgKxB9P5[ExE8MT]]) {
                MzxH5S8cuk = ooyfTgKxB9P5[ExE8MT];
                ooyfTgKxB9P5[ExE8MT] = ooyfTgKxB9P5[ExE8MT +(463 - 462)];
                ooyfTgKxB9P5[ExE8MT +(965 - 964)] = MzxH5S8cuk;
            }
    for (RChebRazAyV = 0; RChebRazAyV < ESRQuAK7; RChebRazAyV++)
        printf ("%s\n", Ilbh6S4OpR[ooyfTgKxB9P5[RChebRazAyV]]);
    for (RChebRazAyV = 1; RChebRazAyV <= hKvgwX0F; RChebRazAyV++) {
        if (fEQUekC2I[RChebRazAyV] >= (244 - 184))
            continue;
        printf ("%s\n", Ilbh6S4OpR[RChebRazAyV]);
    }
}

