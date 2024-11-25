struct   seqs {
    char HvGX73w [(335 - 325)];
    char rfdjPDaRQO [(642 - 622)];
    char vSdtBX;
    int mwIiBCeEqFn;
    float SgydKw7Z;
    char u7RYVrv5H [(768 - 668)];
    struct   seqs *zBPCFeJ;
};
struct   seqs *sW2xkm9s6fQ () {
    struct   seqs *Q3uUC5;
    struct   seqs *qkXlUNu;
    struct   seqs *exYChXRB9Om;
    qkXlUNu = (struct   seqs *) malloc (len);
    qkXlUNu->zBPCFeJ = NULL;
    scanf ("%s %s %c %d %f %s", qkXlUNu->HvGX73w, qkXlUNu->rfdjPDaRQO, &qkXlUNu->vSdtBX, &qkXlUNu->mwIiBCeEqFn, &qkXlUNu->SgydKw7Z, qkXlUNu->u7RYVrv5H);
    exYChXRB9Om = qkXlUNu;
    for (; (771 - 770);) {
        qkXlUNu = (struct   seqs *) malloc (len);
        scanf ("%s", qkXlUNu->HvGX73w);
        if (!('e' != qkXlUNu->HvGX73w[(617 - 617)]))
            break;
        scanf ("%s %c %d %f %s", qkXlUNu->rfdjPDaRQO, &qkXlUNu->vSdtBX, &qkXlUNu->mwIiBCeEqFn, &qkXlUNu->SgydKw7Z, qkXlUNu->u7RYVrv5H);
        qkXlUNu->zBPCFeJ = exYChXRB9Om;
        exYChXRB9Om = qkXlUNu;
    }
    Q3uUC5 = exYChXRB9Om;
    return Q3uUC5;
}

void  main () {
    struct   seqs *exYChXRB9Om;
    int JVwg3QhsuBq;
    exYChXRB9Om = sW2xkm9s6fQ ();
    while (exYChXRB9Om != NULL) {
        printf ("%s %s %c %d %g %s\n", exYChXRB9Om->HvGX73w, exYChXRB9Om->rfdjPDaRQO, exYChXRB9Om->vSdtBX, exYChXRB9Om->mwIiBCeEqFn, exYChXRB9Om->SgydKw7Z, exYChXRB9Om->u7RYVrv5H);
        exYChXRB9Om = exYChXRB9Om->zBPCFeJ;
    }
}

