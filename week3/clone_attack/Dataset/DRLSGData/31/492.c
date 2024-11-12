struct   student {
    char RUjDu2LfPgC [(1081 - 981)];
    struct   student *GhD4zTpH1;
};
int nI74ZzBYf0Kw;

struct   student *qsRV0pa3X6E (void ) {
    struct   student *kLvqUNa;
    struct   student *lqtEgMKOVzP;
    struct   student *RvyiWtMSGb9;
    lqtEgMKOVzP = RvyiWtMSGb9 = (struct   student *) malloc (LEN);
    gets (lqtEgMKOVzP->RUjDu2LfPgC);
    lqtEgMKOVzP->GhD4zTpH1 = null;
    for (; strcmp ("end", lqtEgMKOVzP->RUjDu2LfPgC) != (62 - 62);) {
        kLvqUNa = lqtEgMKOVzP;
        lqtEgMKOVzP = (struct   student *) malloc (LEN);
        lqtEgMKOVzP->GhD4zTpH1 = RvyiWtMSGb9;
        RvyiWtMSGb9 = lqtEgMKOVzP;
        gets (lqtEgMKOVzP->RUjDu2LfPgC);
    }
    return (kLvqUNa);
}

void  mTyCKW2R6P (struct   student *kLvqUNa) {
    struct   student *Mlqch29C;
    Mlqch29C = kLvqUNa;
    for (; Mlqch29C != null;) {
        printf ("%s\n", Mlqch29C->RUjDu2LfPgC);
        Mlqch29C = Mlqch29C->GhD4zTpH1;
    }
}

main () {
    struct   student *kLvqUNa;
    mTyCKW2R6P (kLvqUNa);
    kLvqUNa = qsRV0pa3X6E ();
}

