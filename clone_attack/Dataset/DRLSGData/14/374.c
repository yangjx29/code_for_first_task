struct   student {
    long  Rt8XfkxPvd;
    int RnSFWQDgR;
    int MgWJGoQLfaze;
    int inRC9g;
    struct   student *tm8QpyKqbJ;
};
long  WZwt47iN;

void  main () {
    int ZtQziR;
    struct   student *nxvHwyO1Yt ();
    struct   student *kyu5cjX6va2;
    struct   student *a1tWoNn3h;
    struct   student *c5AGyf3un;
    struct   student *PwmPARgW;
    struct   student *b6k9AulqrS1;
    ZtQziR = (939 - 939);
    kyu5cjX6va2 = nxvHwyO1Yt ();
    scanf ("%ld", &WZwt47iN);
    a1tWoNn3h = kyu5cjX6va2;
    for (; a1tWoNn3h != NULL;) {
        if (a1tWoNn3h->inRC9g > ZtQziR) {
            ZtQziR = a1tWoNn3h->inRC9g;
            c5AGyf3un = a1tWoNn3h;
        }
        a1tWoNn3h = a1tWoNn3h->tm8QpyKqbJ;
    }
    a1tWoNn3h = kyu5cjX6va2;
    ZtQziR = 0;
    for (; a1tWoNn3h != NULL;) {
        if (a1tWoNn3h->inRC9g > ZtQziR &&a1tWoNn3h != c5AGyf3un) {
            ZtQziR = a1tWoNn3h->inRC9g;
            PwmPARgW = a1tWoNn3h;
        }
        a1tWoNn3h = a1tWoNn3h->tm8QpyKqbJ;
    }
    ZtQziR = 0;
    a1tWoNn3h = kyu5cjX6va2;
    for (; a1tWoNn3h != NULL;) {
        if (a1tWoNn3h->inRC9g > ZtQziR &&a1tWoNn3h != c5AGyf3un && a1tWoNn3h != PwmPARgW) {
            ZtQziR = a1tWoNn3h->inRC9g;
            b6k9AulqrS1 = a1tWoNn3h;
        }
        a1tWoNn3h = a1tWoNn3h->tm8QpyKqbJ;
    }
    printf ("%d %d\n", c5AGyf3un->Rt8XfkxPvd, c5AGyf3un->inRC9g);
    printf ("%d %d\n", PwmPARgW->Rt8XfkxPvd, PwmPARgW->inRC9g);
    printf ("%d %d\n", b6k9AulqrS1->Rt8XfkxPvd, b6k9AulqrS1->inRC9g);
}

struct   student *nxvHwyO1Yt () {
    int sUHafP;
    struct   student *kyu5cjX6va2, *ChpM1mJ0A9e, *XeycaSB;
    ChpM1mJ0A9e = XeycaSB = (struct   student *) malloc (LEN);
    kyu5cjX6va2 = NULL;
    {
        sUHafP = 0;
        for (; sUHafP <= WZwt47iN -1;) {
            scanf ("%ld%d%d", &ChpM1mJ0A9e->Rt8XfkxPvd, &ChpM1mJ0A9e->RnSFWQDgR, &ChpM1mJ0A9e->MgWJGoQLfaze);
            ChpM1mJ0A9e->inRC9g = ChpM1mJ0A9e->RnSFWQDgR + ChpM1mJ0A9e->MgWJGoQLfaze;
            if (sUHafP == 0)
                kyu5cjX6va2 = ChpM1mJ0A9e;
            else
                XeycaSB->tm8QpyKqbJ = ChpM1mJ0A9e;
            sUHafP++;
            XeycaSB = ChpM1mJ0A9e;
            ChpM1mJ0A9e = (struct   student *) malloc (LEN);
        }
    }
    XeycaSB->tm8QpyKqbJ = NULL;
    return (kyu5cjX6va2);
}

