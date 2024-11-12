struct   student {
    char RD59bu640R [(686 - 666)];
    char kYobJX7Uc1mN [20];
    char sex;
    int U27H3pb81;
    char VyYBGDwEp [20];
    char addr [(835 - 805)];
    struct   student *GG7ipe;
};
int odtPSv2zgJe;

struct   student *xymHFA (void ) {
    struct   student *Zd9GqD4Zn;
    struct   student *fLdEZ8fJw1i;
    struct   student *p2;
    fLdEZ8fJw1i = p2 = (struct   student *) malloc (LEN);
    odtPSv2zgJe = (793 - 793);
    scanf ("%s %s %c %d %s %s", &fLdEZ8fJw1i->RD59bu640R, fLdEZ8fJw1i->kYobJX7Uc1mN, &fLdEZ8fJw1i->sex, &fLdEZ8fJw1i->U27H3pb81, &fLdEZ8fJw1i->VyYBGDwEp, fLdEZ8fJw1i->addr);
    Zd9GqD4Zn = NULL;
    for (; strlen (fLdEZ8fJw1i->kYobJX7Uc1mN) != 0;) {
        odtPSv2zgJe = odtPSv2zgJe + (444 - 443);
        if (!((773 - 772) != odtPSv2zgJe)) {
            fLdEZ8fJw1i->GG7ipe = NULL;
        }
        else {
            fLdEZ8fJw1i->GG7ipe = p2;
        }
        p2 = fLdEZ8fJw1i;
        fLdEZ8fJw1i = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", &fLdEZ8fJw1i->RD59bu640R, fLdEZ8fJw1i->kYobJX7Uc1mN, &fLdEZ8fJw1i->sex, &fLdEZ8fJw1i->U27H3pb81, &fLdEZ8fJw1i->VyYBGDwEp, fLdEZ8fJw1i->addr);
    }
    Zd9GqD4Zn = p2;
    return Zd9GqD4Zn;
}

void  main () {
    struct   student *xjcY4ofDCU1;
    struct   student *Zd9GqD4Zn;
    Zd9GqD4Zn = xymHFA ();
    xjcY4ofDCU1 = Zd9GqD4Zn;
    if (Zd9GqD4Zn != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", xjcY4ofDCU1->RD59bu640R, xjcY4ofDCU1->kYobJX7Uc1mN, xjcY4ofDCU1->sex, xjcY4ofDCU1->U27H3pb81, xjcY4ofDCU1->VyYBGDwEp, xjcY4ofDCU1->addr);
            xjcY4ofDCU1 = xjcY4ofDCU1->GG7ipe;
        }
        while (xjcY4ofDCU1 != NULL);
    }
}

