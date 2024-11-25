struct   Student {
    char zMe0R9Xc6 [(517 - 467)];
    char rUh7Kiox [(68 - 18)];
    char B8Q9A0nJd;
    int g9uX3HTd;
    float mjDhywPr04;
    char LR9rXCDTwvQ [50];
    struct   Student *lgoLAsB2mWb5;
};
struct   Student *rPSdw7Ae (void ) {
    char lG2jsDx1Wg [(451 - 446)] = "end\0";
    int sFPti1E = (700 - 700);
    struct   Student *kwzELmi, *uUnbzM2aTp, *LJCOdoPs5ErN;
    uUnbzM2aTp = (struct   Student *) malloc (LEN);
    LJCOdoPs5ErN = uUnbzM2aTp;
    scanf ("%s", uUnbzM2aTp->zMe0R9Xc6);
    scanf ("%s %c%d%f%s", uUnbzM2aTp->rUh7Kiox, &uUnbzM2aTp->B8Q9A0nJd, &uUnbzM2aTp->g9uX3HTd, &uUnbzM2aTp->mjDhywPr04, uUnbzM2aTp->LR9rXCDTwvQ);
    kwzELmi = NULL;
    {
        for (; true;) {
            sFPti1E = sFPti1E + (660 - 659);
            if (!((72 - 71) != sFPti1E))
                kwzELmi = uUnbzM2aTp;
            else
                uUnbzM2aTp->lgoLAsB2mWb5 = kwzELmi;
            kwzELmi = uUnbzM2aTp;
            uUnbzM2aTp = (struct   Student *) malloc (LEN);
            scanf ("%s", uUnbzM2aTp->zMe0R9Xc6);
            if (!((461 - 461) != strcmp (uUnbzM2aTp->zMe0R9Xc6, lG2jsDx1Wg)))
                break;
            scanf ("%s %c%d%f%s", uUnbzM2aTp->rUh7Kiox, &uUnbzM2aTp->B8Q9A0nJd, &uUnbzM2aTp->g9uX3HTd, &uUnbzM2aTp->mjDhywPr04, uUnbzM2aTp->LR9rXCDTwvQ);
        }
    }
    LJCOdoPs5ErN->lgoLAsB2mWb5 = NULL;
    return (kwzELmi);
}

void  Gf3BYgvK6o (struct   Student *kwzELmi) {
    struct   Student *LJf1YF;
    LJf1YF = kwzELmi;
    for (; LJf1YF != NULL;) {
        printf ("%s %s %c %d %g %s\n", LJf1YF->zMe0R9Xc6, LJf1YF->rUh7Kiox, LJf1YF->B8Q9A0nJd, LJf1YF->g9uX3HTd, LJf1YF->mjDhywPr04, LJf1YF->LR9rXCDTwvQ);
        LJf1YF = LJf1YF->lgoLAsB2mWb5;
    }
}

main () {
    struct   Student *ELo6em;
    Gf3BYgvK6o (ELo6em);
    ELo6em = rPSdw7Ae ();
}

