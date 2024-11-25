struct   IxOwydbs {
    char LX4g5fWTmdp [(584 - 573)];
    int LUyNJP;
    struct   IxOwydbs *fkRECvSYHbl;
};
void  main () {
    struct   IxOwydbs *wb8oyhHEsXO, *ROhrmpwAS, *x0eFmJV;
    int Jm73rwPD8ke, stEnuIleX, Zwo283 = (151 - 151);
    struct   IxOwydbs *X6hyv78kQqTa (struct   IxOwydbs *x0eFmJV, int stEnuIleX);
    void  qWN96kE7 (struct   IxOwydbs *x0eFmJV);
    qWN96kE7 (x0eFmJV);
    scanf ("%d", &stEnuIleX);
    x0eFmJV = wb8oyhHEsXO = ROhrmpwAS = (struct   IxOwydbs *) malloc (LEN);
    x0eFmJV->fkRECvSYHbl = NULL;
    for (Jm73rwPD8ke = (97 - 97); Jm73rwPD8ke < stEnuIleX; Jm73rwPD8ke = Jm73rwPD8ke +(318 - 317)) {
        wb8oyhHEsXO = (struct   IxOwydbs *) malloc (LEN);
        scanf ("%s %d", wb8oyhHEsXO->LX4g5fWTmdp, &wb8oyhHEsXO->LUyNJP);
        if ((wb8oyhHEsXO->LUyNJP) >= (429 - 369))
            Zwo283 = Zwo283 +(648 - 647);
        ROhrmpwAS->fkRECvSYHbl = wb8oyhHEsXO;
        ROhrmpwAS = wb8oyhHEsXO;
    }
    for (Jm73rwPD8ke = stEnuIleX; Jm73rwPD8ke > stEnuIleX - Zwo283; Jm73rwPD8ke = Jm73rwPD8ke -(408 - 407)) {
        x0eFmJV = X6hyv78kQqTa (x0eFmJV, Jm73rwPD8ke);
    }
    ROhrmpwAS->fkRECvSYHbl = NULL;
}

struct   IxOwydbs *X6hyv78kQqTa (struct   IxOwydbs *x0eFmJV, int stEnuIleX) {
    struct   IxOwydbs *wb8oyhHEsXO, *ROhrmpwAS, *IR58s7, *uRVFp35Hb;
    int OpQNbJK = (461 - 402), Jm73rwPD8ke;
    free (IR58s7);
    ROhrmpwAS = x0eFmJV;
    wb8oyhHEsXO = x0eFmJV->fkRECvSYHbl;
    for (Jm73rwPD8ke = (642 - 642); Jm73rwPD8ke < stEnuIleX; Jm73rwPD8ke = Jm73rwPD8ke +(965 - 964)) {
        if ((wb8oyhHEsXO->LUyNJP) > OpQNbJK) {
            uRVFp35Hb = ROhrmpwAS;
            OpQNbJK = wb8oyhHEsXO->LUyNJP;
            IR58s7 = wb8oyhHEsXO;
        }
        wb8oyhHEsXO = wb8oyhHEsXO->fkRECvSYHbl;
        ROhrmpwAS = ROhrmpwAS->fkRECvSYHbl;
    }
    printf ("%s\n", IR58s7->LX4g5fWTmdp);
    if (uRVFp35Hb == x0eFmJV)
        x0eFmJV->fkRECvSYHbl = IR58s7->fkRECvSYHbl;
    else
        uRVFp35Hb->fkRECvSYHbl = IR58s7->fkRECvSYHbl;
    return (x0eFmJV);
}

void  qWN96kE7 (struct   IxOwydbs *x0eFmJV) {
    struct   IxOwydbs *wWwZpbnFQg1R;
    wWwZpbnFQg1R = x0eFmJV->fkRECvSYHbl;
    do {
        printf ("%s\n", wWwZpbnFQg1R->LX4g5fWTmdp);
        wWwZpbnFQg1R = wWwZpbnFQg1R->fkRECvSYHbl;
    }
    while (wWwZpbnFQg1R != NULL);
}

