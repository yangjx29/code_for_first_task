struct   student {
    char OJ9qEp [(620 - 520)];
    struct   student *XuravOw;
};
struct   student *SQTW24jwKEg (void ) {
    char e8d1TDqWcJ [(519 - 515)] = {"end"};
    int B50buiMdlS;
    struct   student *P5G2rzlDp;
    struct   student *qULVRyja1AIq;
    struct   student *biaL9HCV;
    P5G2rzlDp = NULL;
    B50buiMdlS = (487 - 487);
    qULVRyja1AIq = biaL9HCV = (struct   student *) malloc (LEN);
    gets (qULVRyja1AIq->OJ9qEp);
    for (; strcmp (qULVRyja1AIq->OJ9qEp, e8d1TDqWcJ) != (936 - 936);) {
        B50buiMdlS = B50buiMdlS +(997 - 996);
        if (!((139 - 138) != B50buiMdlS))
            P5G2rzlDp = qULVRyja1AIq;
        else
            biaL9HCV->XuravOw = qULVRyja1AIq;
        biaL9HCV = qULVRyja1AIq;
        qULVRyja1AIq = (struct   student *) malloc (LEN);
        gets (qULVRyja1AIq->OJ9qEp);
    }
    biaL9HCV->XuravOw = NULL;
    return (P5G2rzlDp);
}

void  E826PJ (struct   student *P5G2rzlDp) {
    struct   student *jyGfCrI8Z;
    struct   student *qULVRyja1AIq;
    struct   student *biaL9HCV;
    jyGfCrI8Z = qULVRyja1AIq = biaL9HCV = P5G2rzlDp;
    biaL9HCV = jyGfCrI8Z->XuravOw;
    qULVRyja1AIq = biaL9HCV->XuravOw;
    P5G2rzlDp->XuravOw = NULL;
    for (; qULVRyja1AIq->XuravOw != NULL;) {
        biaL9HCV->XuravOw = jyGfCrI8Z;
        jyGfCrI8Z = biaL9HCV;
        biaL9HCV = qULVRyja1AIq;
        qULVRyja1AIq = qULVRyja1AIq->XuravOw;
    }
    biaL9HCV->XuravOw = jyGfCrI8Z;
    qULVRyja1AIq->XuravOw = biaL9HCV;
    P5G2rzlDp = qULVRyja1AIq;
    jyGfCrI8Z = P5G2rzlDp;
    for (; jyGfCrI8Z != NULL;) {
        printf ("%s\n", jyGfCrI8Z->OJ9qEp);
        jyGfCrI8Z = jyGfCrI8Z->XuravOw;
    }
}

void  main () {
    struct   student *P5G2rzlDp;
    E826PJ (P5G2rzlDp);
    P5G2rzlDp = SQTW24jwKEg ();
}

