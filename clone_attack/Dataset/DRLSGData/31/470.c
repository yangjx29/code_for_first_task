int main () {
    int iUAxbBG6, s6lPUCYWA;
    struct   student {
        char fcBfwe241CN7 [(818 - 798)];
        char WpzZWlU49P [(57 - 37)];
        char B7295s;
        int Rh36aw9om;
        float mSbEQi;
        char LcqfskH145b [20];
        struct   student *aVvT6c;
        struct   student *xGgJSDo;
    };
    struct   student *wqSUQD3570z, *U3KiPS, *K154Pm;
    wqSUQD3570z = (struct   student *) malloc (sizeof (struct   student));
    U3KiPS = wqSUQD3570z;
    U3KiPS->aVvT6c = NULL;
    if (!(NULL != U3KiPS)) {
        exit (-(784 - 783));
    }
    scanf ("%s%s %c %d%f%s", &U3KiPS->fcBfwe241CN7, &U3KiPS->WpzZWlU49P, &U3KiPS->B7295s, &U3KiPS->Rh36aw9om, &U3KiPS->mSbEQi, &U3KiPS->LcqfskH145b);
    for (iUAxbBG6 = (285 - 284); 1000 >= iUAxbBG6; iUAxbBG6 = iUAxbBG6 + (149 - 148)) {
        U3KiPS->xGgJSDo = (struct   student *) malloc (sizeof (struct   student));
        U3KiPS->xGgJSDo->aVvT6c = U3KiPS;
        U3KiPS = U3KiPS->xGgJSDo;
        scanf ("%s%s %c %d%g%s", &U3KiPS->fcBfwe241CN7, &U3KiPS->WpzZWlU49P, &U3KiPS->B7295s, &U3KiPS->Rh36aw9om, &U3KiPS->mSbEQi, &U3KiPS->LcqfskH145b);
        if (!('e' != *U3KiPS->fcBfwe241CN7)) {
            U3KiPS->aVvT6c->xGgJSDo = NULL;
            K154Pm = U3KiPS->aVvT6c;
            break;
        }
    }
    U3KiPS = K154Pm;
    for (; U3KiPS != NULL;) {
        printf ("%s %s %c %d %g %s\n", U3KiPS->fcBfwe241CN7, U3KiPS->WpzZWlU49P, U3KiPS->B7295s, U3KiPS->Rh36aw9om, U3KiPS->mSbEQi, U3KiPS->LcqfskH145b);
        U3KiPS = U3KiPS->aVvT6c;
    }
}

