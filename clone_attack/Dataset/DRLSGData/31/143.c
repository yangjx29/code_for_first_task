struct   student {
    char BezqQidLcm [(592 - 582)];
    char imKojwSN7tJC [(61 - 41)];
    char QZnYNivHs;
    int kWuEhsBgO;
    char nFyrIDQk [(744 - 738)];
    char yDilBREFc [(161 - 141)];
    struct   student *n9QqjBG;
};
int gshebtFEJOG;

struct   student *sCR3ZJbgxmf6 () {
    struct   student *NxJtfQZd0;
    struct   student *yxACfQF2EeT;
    gshebtFEJOG = (673 - 673);
    NxJtfQZd0 = yxACfQF2EeT = (struct   student *) malloc (LEN);
    scanf ("%s", NxJtfQZd0->BezqQidLcm);
    for (; yxACfQF2EeT->BezqQidLcm[(908 - 908)] != 'e';) {
        gshebtFEJOG = gshebtFEJOG + (330 - 329);
        if (!((591 - 590) != gshebtFEJOG))
            NxJtfQZd0->n9QqjBG = NULL;
        else
            yxACfQF2EeT->n9QqjBG = NxJtfQZd0;
        NxJtfQZd0 = yxACfQF2EeT;
        scanf ("%s %c %d %s %s", NxJtfQZd0->imKojwSN7tJC, &NxJtfQZd0->QZnYNivHs, &NxJtfQZd0->kWuEhsBgO, NxJtfQZd0->nFyrIDQk, NxJtfQZd0->yDilBREFc);
        yxACfQF2EeT = (struct   student *) malloc (LEN);
        scanf ("%s", yxACfQF2EeT->BezqQidLcm);
    }
    return (NxJtfQZd0);
}

void  W1hzykcR (struct   student *tyGmMtge) {
    struct   student *ic8LvO;
    ic8LvO = tyGmMtge;
    for (; ic8LvO != NULL;) {
        printf ("%s %s %c %d %s %s\n", ic8LvO->BezqQidLcm, ic8LvO->imKojwSN7tJC, ic8LvO->QZnYNivHs, ic8LvO->kWuEhsBgO, ic8LvO->nFyrIDQk, ic8LvO->yDilBREFc);
        ic8LvO = ic8LvO->n9QqjBG;
    }
}

void  main () {
    struct   student *tyGmMtge;
    W1hzykcR (tyGmMtge);
    tyGmMtge = sCR3ZJbgxmf6 ();
}

