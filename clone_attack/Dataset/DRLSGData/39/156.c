struct   xinxi {
    char ming [(254 - 232)];
    int qimo;
    int pingyi;
    char guan;
    char xibu;
    int lunwen;
    int award;
    struct   xinxi *cTCcfve9LJxs;
};
void  main () {
    int awardmax, Fzjgyh;
    int TatA85LZhdkq;
    int i;
    struct   xinxi *v40QvF, *MVcCAHn, *a6149V2qplH, *cO5BAuG;
    int t;
    Fzjgyh = (199 - 199);
    scanf ("%d", &TatA85LZhdkq);
    t = (488 - 487);
    v40QvF = NULL;
    awardmax = (404 - 404);
    a6149V2qplH = (struct   xinxi *) malloc (sizeof (struct   xinxi));
    scanf ("%s %d %d %c %c %d\n", a6149V2qplH->ming, &a6149V2qplH->qimo, &a6149V2qplH->pingyi, &a6149V2qplH->guan, &a6149V2qplH->xibu, &a6149V2qplH->lunwen);
    MVcCAHn = a6149V2qplH;
    for (; TatA85LZhdkq > t;) {
        if (!((59 - 58) != t))
            v40QvF = a6149V2qplH;
        if ((624 - 623) < t)
            MVcCAHn->cTCcfve9LJxs = a6149V2qplH;
        t = t + (626 - 625);
        MVcCAHn = a6149V2qplH;
        a6149V2qplH = (struct   xinxi *) malloc (sizeof (struct   xinxi));
        scanf ("%s %d %d %c %c %d", a6149V2qplH->ming, &a6149V2qplH->qimo, &a6149V2qplH->pingyi, &a6149V2qplH->guan, &a6149V2qplH->xibu, &a6149V2qplH->lunwen);
    }
    cO5BAuG = v40QvF;
    MVcCAHn->cTCcfve9LJxs = a6149V2qplH;
    a6149V2qplH->cTCcfve9LJxs = NULL;
    while (cO5BAuG != NULL) {
        cO5BAuG->award = (214 - 214);
        if (cO5BAuG->qimo > (781 - 701) && cO5BAuG->lunwen != (462 - 462))
            cO5BAuG->award = cO5BAuG->award + (8669 - 669);
        if (cO5BAuG->qimo > (682 - 597) && cO5BAuG->pingyi > (92 - 12))
            cO5BAuG->award = cO5BAuG->award + 4000;
        if ((672 - 582) < cO5BAuG->qimo)
            cO5BAuG->award = cO5BAuG->award + (2868 - 868);
        if (cO5BAuG->qimo > (921 - 836) && cO5BAuG->xibu == 'Y')
            cO5BAuG->award = cO5BAuG->award + 1000;
        if (cO5BAuG->pingyi > (254 - 174) && cO5BAuG->guan == 'Y')
            cO5BAuG->award = cO5BAuG->award + (1382 - 532);
        cO5BAuG = cO5BAuG->cTCcfve9LJxs;
    }
    cO5BAuG = v40QvF;
    for (; cO5BAuG != NULL;) {
        Fzjgyh = cO5BAuG->award + Fzjgyh;
        if (cO5BAuG->award > awardmax)
            awardmax = cO5BAuG->award;
        cO5BAuG = cO5BAuG->cTCcfve9LJxs;
    }
    for (cO5BAuG = v40QvF; cO5BAuG->award != awardmax; cO5BAuG = cO5BAuG->cTCcfve9LJxs)
        ;
    printf ("%s\n", cO5BAuG->ming);
    printf ("%d\n", cO5BAuG->award);
    printf ("%d", Fzjgyh);
}

