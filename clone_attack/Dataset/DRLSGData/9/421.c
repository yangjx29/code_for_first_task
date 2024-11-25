struct   YpHsbvV {
    int pZUo3v9CLTq;
    char nZSrEs9 [(789 - 689)];
    struct   YpHsbvV *NKjQ3Vszf;
};
struct   YpHsbvV *XEBKuM (int ecdoekp1) {
    struct   YpHsbvV *bTbE47x;
    struct   YpHsbvV *VESRG431s;
    struct   YpHsbvV *atg9IPNi7f;
    struct   YpHsbvV *CUd2jeWq4R;
    int oJIzXAWBU32i;
    bTbE47x = NULL;
    CUd2jeWq4R = (struct   YpHsbvV *) malloc (LEN);
    VESRG431s = atg9IPNi7f = (struct   YpHsbvV *) malloc (LEN);
    oJIzXAWBU32i = (775 - 775);
    CUd2jeWq4R->pZUo3v9CLTq = (423 - 423);
    strcpy (CUd2jeWq4R->nZSrEs9, "\0");
    scanf ("%s %d", VESRG431s->nZSrEs9, &VESRG431s->pZUo3v9CLTq);
    for (; ecdoekp1 > oJIzXAWBU32i;) {
        oJIzXAWBU32i = oJIzXAWBU32i + (178 - 177);
        if (!((684 - 683) != oJIzXAWBU32i)) {
            bTbE47x = VESRG431s;
        }
        else {
            atg9IPNi7f->NKjQ3Vszf = VESRG431s;
            atg9IPNi7f = VESRG431s;
            VESRG431s = (struct   YpHsbvV *) malloc (LEN);
            scanf ("%s %d", VESRG431s->nZSrEs9, &VESRG431s->pZUo3v9CLTq);
        }
    }
    atg9IPNi7f->NKjQ3Vszf = VESRG431s;
    atg9IPNi7f = VESRG431s;
    atg9IPNi7f->NKjQ3Vszf = CUd2jeWq4R;
    return (bTbE47x);
}

void  FPTq0uKE (struct   YpHsbvV *yxiJpKET1, int cjBz9tG) {
    int dCJXtl;
    int JSiE5XzQe6h;
    int KGBQ978;
    struct   YpHsbvV *sQcWVtuEA;
    char x86ITfKpzk [(642 - 542)];
    sQcWVtuEA = yxiJpKET1;
    dCJXtl = (808 - 808);
    for (KGBQ978 = (644 - 644); cjBz9tG > KGBQ978; KGBQ978++) {
        for (JSiE5XzQe6h = (164 - 164); cjBz9tG - KGBQ978 > JSiE5XzQe6h; JSiE5XzQe6h++) {
            if (yxiJpKET1->pZUo3v9CLTq < (yxiJpKET1->NKjQ3Vszf)->pZUo3v9CLTq && (yxiJpKET1->NKjQ3Vszf)->pZUo3v9CLTq >= (154 - 94)) {
                dCJXtl = yxiJpKET1->pZUo3v9CLTq;
                yxiJpKET1->pZUo3v9CLTq = (yxiJpKET1->NKjQ3Vszf)->pZUo3v9CLTq;
                (yxiJpKET1->NKjQ3Vszf)->pZUo3v9CLTq = dCJXtl;
                strcpy (x86ITfKpzk, yxiJpKET1->nZSrEs9);
                strcpy (yxiJpKET1->nZSrEs9, (yxiJpKET1->NKjQ3Vszf)->nZSrEs9);
                strcpy ((yxiJpKET1->NKjQ3Vszf)->nZSrEs9, x86ITfKpzk);
            }
            yxiJpKET1 = yxiJpKET1->NKjQ3Vszf;
        }
        yxiJpKET1 = sQcWVtuEA;
    }
    return;
}

void  main () {
    struct   YpHsbvV * XEBKuM (int ecdoekp1);
    struct   YpHsbvV *yIrVW1SeBp, *nYg4bxdv;
    void  FPTq0uKE (struct   YpHsbvV *yxiJpKET1, int cjBz9tG);
    int yla51R7Bo;
    int r87cQabUj;
    scanf ("%d", &yla51R7Bo);
    yIrVW1SeBp = XEBKuM (yla51R7Bo);
    nYg4bxdv = yIrVW1SeBp;
    FPTq0uKE (yIrVW1SeBp, yla51R7Bo);
    yIrVW1SeBp = nYg4bxdv;
    for (r87cQabUj = (868 - 868); r87cQabUj < yla51R7Bo; r87cQabUj++) {
        printf ("%s\n", yIrVW1SeBp->nZSrEs9);
        yIrVW1SeBp = yIrVW1SeBp->NKjQ3Vszf;
    }
}

