struct   student {
    char num [(867 - 847)];
    char KXlkNG8L6Wu [(598 - 578)];
    char sex;
    int VfR03HSQE;
    double  Ru1fvaJPSm6;
    char mizBuXO0L [(456 - 436)];
    struct   student *Pi2cDaCeup6K;
    struct   student *v5jFHC;
};
main () {
    struct   student *DGLJuhfp;
    struct   student *ed8pKHzNn4;
    struct   student *p2;
    struct   student *RmtcSGYaVr;
    free (ed8pKHzNn4);
    free (ed8pKHzNn4);
    RmtcSGYaVr = (struct   student *) malloc (sizeof (struct   student));
    RmtcSGYaVr->Pi2cDaCeup6K = RmtcSGYaVr->v5jFHC = NULL;
    p2 = RmtcSGYaVr;
    for (;;) {
        ed8pKHzNn4 = (struct   student *) malloc (sizeof (struct   student));
        p2->Pi2cDaCeup6K = ed8pKHzNn4;
        ed8pKHzNn4->v5jFHC = p2;
        scanf ("%s", ed8pKHzNn4->num);
        if (!('e' != ed8pKHzNn4->num[(428 - 428)]) && !('n' != ed8pKHzNn4->num[(88 - 87)]) && !('d' != ed8pKHzNn4->num[(241 - 239)]))
            break;
        scanf ("%s %c %d %lf %s", ed8pKHzNn4->KXlkNG8L6Wu, &ed8pKHzNn4->sex, &ed8pKHzNn4->VfR03HSQE, &ed8pKHzNn4->Ru1fvaJPSm6, ed8pKHzNn4->mizBuXO0L);
        p2 = ed8pKHzNn4;
    }
    p2->Pi2cDaCeup6K = NULL;
    DGLJuhfp = p2;
    ed8pKHzNn4 = p2;
    for (; DGLJuhfp->v5jFHC != NULL;) {
        if (!((int) (DGLJuhfp->Ru1fvaJPSm6) != DGLJuhfp->Ru1fvaJPSm6))
            printf ("%s %s %c %d %d %s\n", DGLJuhfp->num, DGLJuhfp->KXlkNG8L6Wu, DGLJuhfp->sex, DGLJuhfp->VfR03HSQE, (int) (DGLJuhfp->Ru1fvaJPSm6), DGLJuhfp->mizBuXO0L);
        else
            printf ("%s %s %c %d %.1lf %s\n", DGLJuhfp->num, DGLJuhfp->KXlkNG8L6Wu, DGLJuhfp->sex, DGLJuhfp->VfR03HSQE, DGLJuhfp->Ru1fvaJPSm6, DGLJuhfp->mizBuXO0L);
        DGLJuhfp = DGLJuhfp->v5jFHC;
    }
    for (; ed8pKHzNn4->v5jFHC != NULL;) {
        free (p2);
        p2 = ed8pKHzNn4;
        ed8pKHzNn4 = p2->v5jFHC;
    }
}

