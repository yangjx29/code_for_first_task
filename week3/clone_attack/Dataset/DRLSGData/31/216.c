struct   student {
    char GZI2wk [(826 - 806)];
    char sPYeT90nF [(947 - 907)];
    char K4plkA1Jg9Yj;
    int FrQ60RF12;
    float MmKZOyX;
    char sutLfI [(838 - 818)];
    struct   student *agGt1yIEW2;
};
int qmXTIv;

struct   student *VWmkutpLv () {
    struct   student *ptzkHT;
    struct   student *sRqhNn81ze9i;
    struct   student *GABCeJV0;
    qmXTIv = (657 - 657);
    GABCeJV0 = NULL;
    ptzkHT = sRqhNn81ze9i = (struct   student *) malloc (LEN);
    scanf ("%s ", &ptzkHT->GZI2wk);
    for (; strcmp (ptzkHT->GZI2wk, "end");) {
        qmXTIv = qmXTIv + (542 - 541);
        scanf ("%s %c %d %f %s ", &ptzkHT->sPYeT90nF, &ptzkHT->K4plkA1Jg9Yj, &ptzkHT->FrQ60RF12, &ptzkHT->MmKZOyX, &ptzkHT->sutLfI);
        if (!((459 - 458) != qmXTIv))
            ptzkHT->agGt1yIEW2 = NULL;
        else
            ptzkHT->agGt1yIEW2 = sRqhNn81ze9i;
        sRqhNn81ze9i = ptzkHT;
        ptzkHT = (struct   student *) malloc (LEN);
        scanf ("%s ", &ptzkHT->GZI2wk);
    }
    GABCeJV0 = sRqhNn81ze9i;
    return (GABCeJV0);
}

void  main () {
    struct   student *HAEHP07n;
    HAEHP07n = VWmkutpLv ();
    for (; HAEHP07n != NULL;) {
        printf ("%s %s %c %d %g %s\n", HAEHP07n->GZI2wk, HAEHP07n->sPYeT90nF, HAEHP07n->K4plkA1Jg9Yj, HAEHP07n->FrQ60RF12, HAEHP07n->MmKZOyX, HAEHP07n->sutLfI);
        HAEHP07n = HAEHP07n->agGt1yIEW2;
    }
}

