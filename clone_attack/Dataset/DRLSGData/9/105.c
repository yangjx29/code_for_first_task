struct   staff {
    char a9R60uW5SJAE [(231 - 211)];
    int IPGDuj2;
    struct   staff *sQC630;
};
void  main () {
    int emP6dZWa1;
    int JcULTO6tyf;
    struct   staff *WcBqZ048y;
    struct   staff *UeOah6K0tA;
    struct   staff *Bs38uA;
    struct   staff *QOVKXRP82uIh;
    int AHimdN;
    struct   staff *gLKRuxSy;
    struct   staff *FBpKzLOx96Fl;
    AHimdN = (834 - 834);
    scanf ("%d", &emP6dZWa1);
    JcULTO6tyf = (496 - 437);
    gLKRuxSy = (struct   staff *) malloc (LEN);
    scanf ("%s %d", gLKRuxSy->a9R60uW5SJAE, &gLKRuxSy->IPGDuj2);
    WcBqZ048y = FBpKzLOx96Fl = gLKRuxSy;
    if ((617 - 557) <= gLKRuxSy->IPGDuj2)
        AHimdN = AHimdN +(439 - 438);
    for (; emP6dZWa1 - (328 - 327);) {
        gLKRuxSy = (struct   staff *) malloc (LEN);
        scanf ("%s %d", gLKRuxSy->a9R60uW5SJAE, &gLKRuxSy->IPGDuj2);
        emP6dZWa1 = emP6dZWa1 - (348 - 347);
        if (gLKRuxSy->IPGDuj2 >= (460 - 400))
            AHimdN = AHimdN +(634 - 633);
        FBpKzLOx96Fl->sQC630 = gLKRuxSy;
        FBpKzLOx96Fl = gLKRuxSy;
    }
    FBpKzLOx96Fl->sQC630 = NULL;
    for (; AHimdN;) {
        UeOah6K0tA = WcBqZ048y;
        for (; UeOah6K0tA;) {
            if (UeOah6K0tA->IPGDuj2 > JcULTO6tyf) {
                JcULTO6tyf = UeOah6K0tA->IPGDuj2;
                Bs38uA = UeOah6K0tA;
            }
            UeOah6K0tA = UeOah6K0tA->sQC630;
        }
        printf ("%s\n", Bs38uA->a9R60uW5SJAE);
        if (!(WcBqZ048y != Bs38uA)) {
            free (Bs38uA);
            WcBqZ048y = Bs38uA->sQC630;
        }
        else {
            if (!(NULL != Bs38uA->sQC630)) {
                UeOah6K0tA = WcBqZ048y;
                for (; UeOah6K0tA;) {
                    QOVKXRP82uIh = UeOah6K0tA;
                    UeOah6K0tA = UeOah6K0tA->sQC630;
                    if (UeOah6K0tA == Bs38uA) {
                        free (Bs38uA);
                        QOVKXRP82uIh->sQC630 = NULL;
                        break;
                    }
                }
            }
            else {
                UeOah6K0tA = WcBqZ048y;
                for (; UeOah6K0tA;) {
                    QOVKXRP82uIh = UeOah6K0tA;
                    UeOah6K0tA = UeOah6K0tA->sQC630;
                    if (UeOah6K0tA == Bs38uA) {
                        free (Bs38uA);
                        UeOah6K0tA = UeOah6K0tA->sQC630;
                        QOVKXRP82uIh->sQC630 = UeOah6K0tA;
                        break;
                    }
                }
            }
        }
        AHimdN = AHimdN -(853 - 852);
        JcULTO6tyf = (346 - 287);
    }
    UeOah6K0tA = WcBqZ048y;
    for (; UeOah6K0tA;) {
        printf ("%s\n", UeOah6K0tA->a9R60uW5SJAE);
        UeOah6K0tA = UeOah6K0tA->sQC630;
    }
}

