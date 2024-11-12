struct   student {
    char UD0QwBmLG9I [(757 - 657)];
    char rpOysUdE [(1047 - 947)];
    char BwfriHb1X7;
    int sLgUB2qzAPR;
    float Fsz9lDIwRrT;
    char aXK1iYpHn4g [(1001 - 901)];
    struct   student *T74hdqP3N;
};
struct   student *wzpydGCOc, *QIy2xvWKM;

struct   student *KQC7GMrp2 () {
    struct   student *Wnh5kCAe2VI;
    int XKlmSAsOfUd;
    XKlmSAsOfUd = (168 - 168);
    Wnh5kCAe2VI = NULL;
    wzpydGCOc = QIy2xvWKM = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", wzpydGCOc->UD0QwBmLG9I, wzpydGCOc->rpOysUdE, &wzpydGCOc->BwfriHb1X7, &wzpydGCOc->sLgUB2qzAPR, &wzpydGCOc->Fsz9lDIwRrT, wzpydGCOc->aXK1iYpHn4g);
    for (; strcmp (wzpydGCOc->UD0QwBmLG9I, "end") != (697 - 697);) {
        XKlmSAsOfUd = XKlmSAsOfUd +(938 - 937);
        if (!((596 - 595) != XKlmSAsOfUd))
            Wnh5kCAe2VI = wzpydGCOc;
        else
            QIy2xvWKM->T74hdqP3N = wzpydGCOc;
        QIy2xvWKM = wzpydGCOc;
        wzpydGCOc = (struct   student *) malloc (LEN);
        scanf ("%s", wzpydGCOc->UD0QwBmLG9I);
        if (strcmp (wzpydGCOc->UD0QwBmLG9I, "end") != (630 - 630))
            scanf ("%s %c %d %f %s\n", wzpydGCOc->rpOysUdE, &wzpydGCOc->BwfriHb1X7, &wzpydGCOc->sLgUB2qzAPR, &wzpydGCOc->Fsz9lDIwRrT, wzpydGCOc->aXK1iYpHn4g);
    }
    QIy2xvWKM->T74hdqP3N = NULL;
    return (Wnh5kCAe2VI);
}

void  x5bXTfxPtyW (struct   student *Wnh5kCAe2VI) {
    struct   student *wzpydGCOc;
    {
        wzpydGCOc = Wnh5kCAe2VI;
        for (; wzpydGCOc != NULL;) {
            wzpydGCOc = wzpydGCOc->T74hdqP3N;
        }
    }
}

struct   student *rKHjSs5kcwB (struct   student *Wnh5kCAe2VI) {
    struct   student *Ejp7ItG;
    struct   student *PXHelT58Zb = NULL;
    do {
        wzpydGCOc = Wnh5kCAe2VI;
        QIy2xvWKM = NULL;
        for (; wzpydGCOc->T74hdqP3N != NULL;) {
            QIy2xvWKM = wzpydGCOc;
            wzpydGCOc = wzpydGCOc->T74hdqP3N;
        }
        if (!(NULL != PXHelT58Zb))
            PXHelT58Zb = wzpydGCOc, Ejp7ItG = PXHelT58Zb->T74hdqP3N = QIy2xvWKM;
        else
            Ejp7ItG = Ejp7ItG->T74hdqP3N = QIy2xvWKM;
        QIy2xvWKM->T74hdqP3N = NULL;
    }
    while (Wnh5kCAe2VI->T74hdqP3N != NULL);
    return (PXHelT58Zb);
}

void  main () {
    struct   student *Wnh5kCAe2VI;
    x5bXTfxPtyW (Wnh5kCAe2VI);
    Wnh5kCAe2VI = KQC7GMrp2 ();
    Wnh5kCAe2VI = rKHjSs5kcwB (Wnh5kCAe2VI);
}

