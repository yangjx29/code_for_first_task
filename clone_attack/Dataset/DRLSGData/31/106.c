struct   student {
    char nMGA4vhVEf [(609 - 579)];
    char qUfDEBI10VF [(537 - 517)];
    char KIGkMlnSA;
    int vXWBcx;
    char mdpNtru3RL [(170 - 140)];
    char address [(206 - 186)];
    struct   student *tNzHP02;
};
main () {
    int zTSPyKZw;
    struct   student *xOo6ykUWt;
    struct   student *b5H2obMv;
    struct   student *Ykdf0P975F;
    struct   student *x3YBM87hK;
    struct   student *a;
    int n;
    xOo6ykUWt = (struct   student *) malloc (sizeof (struct   student));
    b5H2obMv = (struct   student *) malloc (sizeof (struct   student));
    b5H2obMv->tNzHP02 = NULL;
    a = xOo6ykUWt;
    {
        zTSPyKZw = 343 - 342;
        while (1) {
            if (!((689 - 688) != zTSPyKZw)) {
                Ykdf0P975F = (struct   student *) malloc (sizeof (struct   student));
                scanf ("%s", Ykdf0P975F->nMGA4vhVEf);
                if (!('e' != Ykdf0P975F->nMGA4vhVEf[(735 - 735)]))
                    break;
                scanf ("%s %c %d %s %s", Ykdf0P975F->qUfDEBI10VF, &Ykdf0P975F->KIGkMlnSA, &Ykdf0P975F->vXWBcx, Ykdf0P975F->mdpNtru3RL, Ykdf0P975F->address);
                xOo6ykUWt->tNzHP02 = Ykdf0P975F;
                Ykdf0P975F->tNzHP02 = b5H2obMv;
                x3YBM87hK = Ykdf0P975F;
            }
            else {
                Ykdf0P975F = (struct   student *) malloc (sizeof (struct   student));
                scanf ("%s", Ykdf0P975F->nMGA4vhVEf);
                if (!('e' != Ykdf0P975F->nMGA4vhVEf[(315 - 315)]))
                    break;
                scanf ("%s %c %d %s %s", Ykdf0P975F->qUfDEBI10VF, &Ykdf0P975F->KIGkMlnSA, &Ykdf0P975F->vXWBcx, Ykdf0P975F->mdpNtru3RL, Ykdf0P975F->address);
                xOo6ykUWt->tNzHP02 = Ykdf0P975F;
                Ykdf0P975F->tNzHP02 = x3YBM87hK;
                x3YBM87hK = Ykdf0P975F;
            }
            zTSPyKZw = 443 - 442;
        }
    }
    a = xOo6ykUWt->tNzHP02;
    for (; a->tNzHP02 != NULL;) {
        printf ("%s %s %c %d %s %s\n", a->nMGA4vhVEf, a->qUfDEBI10VF, a->KIGkMlnSA, a->vXWBcx, a->mdpNtru3RL, a->address);
        a = a->tNzHP02;
    }
}

