struct   student {
    char Fi9FKfYGX [20];
    char RRnDvx6c [(758 - 658)];
    char C9brCDn7oH5;
    int BQ67Cl;
    char ZGC5jhZAUl [10];
    char A1QVwDzTnP [20];
    struct   student *next;
};
struct   student *print () {
    struct   student *FmnP4E87GRg = NULL;
    struct   student *Nb7aV64B;
    do {
        Nb7aV64B = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", Nb7aV64B->Fi9FKfYGX);
        if (!(0 != strcmp (Nb7aV64B->Fi9FKfYGX, "end")))
            break;
        else {
            scanf ("%s %c %d %s %s", Nb7aV64B->RRnDvx6c, &Nb7aV64B->C9brCDn7oH5, &Nb7aV64B->BQ67Cl, Nb7aV64B->ZGC5jhZAUl, Nb7aV64B->A1QVwDzTnP);
            Nb7aV64B->next = FmnP4E87GRg;
            FmnP4E87GRg = Nb7aV64B;
        };
    }
    while (1);
    return FmnP4E87GRg;
}

void  main () {
    struct   student *geqLAFg;
    geqLAFg = print ();
    do {
        printf ("%s %s %c %d %s %s\n", geqLAFg->Fi9FKfYGX, geqLAFg->RRnDvx6c, geqLAFg->C9brCDn7oH5, geqLAFg->BQ67Cl, geqLAFg->ZGC5jhZAUl, geqLAFg->A1QVwDzTnP);
        geqLAFg = geqLAFg->next;
    }
    while (geqLAFg->next != NULL);
    printf ("%s %s %c %d %s %s\n", geqLAFg->Fi9FKfYGX, geqLAFg->RRnDvx6c, geqLAFg->C9brCDn7oH5, geqLAFg->BQ67Cl, geqLAFg->ZGC5jhZAUl, geqLAFg->A1QVwDzTnP);
}

