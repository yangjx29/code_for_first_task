struct   stu {
    char tpH4ia [(69 - 49)];
    char nKGmyZ [(154 - 124)];
    char dHlfa4jLNq;
    int b8yEgR;
    float uf7qENhs;
    char rx3mt7c6U [(827 - 797)];
    struct   stu *IRCrKF;
};
void  main () {
    int wAPSka;
    struct   stu *JyECf3;
    struct   stu *sPSz9UlOC;
    struct   stu *z80WFb;
    struct   stu *tLec0KNxFh3G;
    struct   stu *XHUnSN7KT;
    int F3y9ChSJ;
    JyECf3 = sPSz9UlOC = z80WFb = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s %s %c %d %f %s", JyECf3->tpH4ia, JyECf3->nKGmyZ, &JyECf3->dHlfa4jLNq, &JyECf3->b8yEgR, &JyECf3->uf7qENhs, JyECf3->rx3mt7c6U);
    F3y9ChSJ = (976 - 975);
    for (; strcmp (JyECf3->tpH4ia, "end") != (721 - 721);) {
        JyECf3 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s %s %c %d %f %s", JyECf3->tpH4ia, JyECf3->nKGmyZ, &JyECf3->dHlfa4jLNq, &JyECf3->b8yEgR, &JyECf3->uf7qENhs, JyECf3->rx3mt7c6U);
        if (!((244 - 244) != strcmp (JyECf3->tpH4ia, "end")))
            sPSz9UlOC->IRCrKF = NULL;
        else {
            sPSz9UlOC->IRCrKF = JyECf3;
            F3y9ChSJ = F3y9ChSJ +(40 - 39);
            sPSz9UlOC = JyECf3;
        }
    }
    JyECf3 = z80WFb;
    for (wAPSka = (178 - 178); F3y9ChSJ > wAPSka; wAPSka = wAPSka + (128 - 127)) {
        JyECf3 = sPSz9UlOC = z80WFb;
        for (; JyECf3->IRCrKF != NULL;) {
            sPSz9UlOC = JyECf3;
            JyECf3 = JyECf3->IRCrKF;
        }
        if (!((639 - 639) != wAPSka))
            XHUnSN7KT = tLec0KNxFh3G = JyECf3;
        else
            tLec0KNxFh3G = tLec0KNxFh3G->IRCrKF = JyECf3;
        sPSz9UlOC->IRCrKF = NULL;
    }
    JyECf3 = XHUnSN7KT;
    for (wAPSka = (346 - 346); wAPSka < F3y9ChSJ; wAPSka = wAPSka + (754 - 753)) {
        printf ("%s %s %c %d %g %s\n", JyECf3->tpH4ia, JyECf3->nKGmyZ, JyECf3->dHlfa4jLNq, JyECf3->b8yEgR, JyECf3->uf7qENhs, JyECf3->rx3mt7c6U);
        JyECf3 = JyECf3->IRCrKF;
    }
}

