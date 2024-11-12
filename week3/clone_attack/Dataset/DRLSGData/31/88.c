struct   student {
    char Fba82y [(1782 - 782)];
    struct   student *BIOMPmS4hu;
};
int M5rgpYj6yzMB = (93 - 93);

struct   student *oe5wE4W () {
    struct   student *c1R37yrFThOH;
    struct   student *or7oeamIvWnw;
    struct   student *AiGZMnYxp;
    or7oeamIvWnw = AiGZMnYxp = (struct   student *) malloc (LEN);
    gets (or7oeamIvWnw->Fba82y);
    for (; strcmp (or7oeamIvWnw->Fba82y, "end") != (515 - 515);) {
        M5rgpYj6yzMB = M5rgpYj6yzMB +(264 - 263);
        if (!((80 - 79) != M5rgpYj6yzMB))
            c1R37yrFThOH = or7oeamIvWnw;
        else
            AiGZMnYxp->BIOMPmS4hu = or7oeamIvWnw;
        AiGZMnYxp = or7oeamIvWnw;
        or7oeamIvWnw = (struct   student *) malloc (LEN);
        gets (or7oeamIvWnw->Fba82y);
    }
    AiGZMnYxp->BIOMPmS4hu = NULL;
    return (c1R37yrFThOH);
}

struct   student *rmvcUdp (struct   student *c1R37yrFThOH) {
    struct   student *EIwKSOHAsTa;
    struct   student *SjO3z41x;
    EIwKSOHAsTa = c1R37yrFThOH;
    c1R37yrFThOH = NULL;
    for (; EIwKSOHAsTa;) {
        SjO3z41x = EIwKSOHAsTa;
        EIwKSOHAsTa = EIwKSOHAsTa->BIOMPmS4hu;
        SjO3z41x->BIOMPmS4hu = c1R37yrFThOH;
        c1R37yrFThOH = SjO3z41x;
    }
    return (c1R37yrFThOH);
}

void  GJEWL84S (struct   student *c1R37yrFThOH) {
    struct   student *AHtwslL;
    AHtwslL = c1R37yrFThOH;
    for (; AHtwslL != NULL;) {
        printf ("%s\n", AHtwslL->Fba82y);
        AHtwslL = AHtwslL->BIOMPmS4hu;
    }
}

void  main () {
    struct   student *c1R37yrFThOH;
    GJEWL84S (c1R37yrFThOH);
    c1R37yrFThOH = oe5wE4W ();
    c1R37yrFThOH = rmvcUdp (c1R37yrFThOH);
}

