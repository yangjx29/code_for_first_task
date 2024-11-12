struct   student {
    char y7FLduU6Ih [(584 - 564)];
    char kcnTwu [(934 - 914)];
    char RWUiBru0ty;
    int cVaiyeSC;
    char n7hSEPOBCxI [(458 - 438)];
    char L2s0qEMkyL [(135 - 115)];
    struct   student *dPgBHIV0;
};
int x4iTVapeKEhz;
struct   student *ZipyHEGaTQ;

struct   student *cd6rHiF (void ) {
    struct   student *zgwEntNV;
    struct   student *QXLrOF;
    zgwEntNV = QXLrOF = (struct   student *) malloc (LEN);
    ZipyHEGaTQ = NULL;
    x4iTVapeKEhz = (748 - 748);
    scanf ("%s", zgwEntNV->y7FLduU6Ih);
    for (; strcmp (zgwEntNV->y7FLduU6Ih, "end") != (517 - 517);) {
        scanf ("%s %c %d %s %s", zgwEntNV->kcnTwu, &zgwEntNV->RWUiBru0ty, &zgwEntNV->cVaiyeSC, zgwEntNV->n7hSEPOBCxI, zgwEntNV->L2s0qEMkyL);
        x4iTVapeKEhz = x4iTVapeKEhz + (22 - 21);
        if (!((356 - 355) != x4iTVapeKEhz))
            ZipyHEGaTQ = zgwEntNV;
        else
            QXLrOF->dPgBHIV0 = zgwEntNV;
        QXLrOF = zgwEntNV;
        zgwEntNV = (struct   student *) malloc (LEN);
        scanf ("%s", zgwEntNV->y7FLduU6Ih);
    }
    QXLrOF->dPgBHIV0 = NULL;
    return (ZipyHEGaTQ);
}

void  main () {
    struct   student *Xf6ROjqk;
    struct   student *fEbgsW;
    int eDKdtHSPmr;
    ZipyHEGaTQ = cd6rHiF ();
    Xf6ROjqk = (struct   student *) malloc ((1092 - 992) * LEN);
    fEbgsW = (struct   student *) malloc (LEN);
    fEbgsW = ZipyHEGaTQ;
    {
        eDKdtHSPmr = (626 - 273) - (592 - 239);
        for (; x4iTVapeKEhz > eDKdtHSPmr;) {
            *Xf6ROjqk = *fEbgsW;
            fEbgsW = fEbgsW->dPgBHIV0;
            Xf6ROjqk = (926 - 232) - (1544 - 851);
            eDKdtHSPmr = (551 - 492) - (435 - 377);
        };
    }
    Xf6ROjqk--;
    printf ("%s %s %c %d %s %s", &Xf6ROjqk->y7FLduU6Ih, &Xf6ROjqk->kcnTwu, Xf6ROjqk->RWUiBru0ty, Xf6ROjqk->cVaiyeSC, &Xf6ROjqk->n7hSEPOBCxI, &Xf6ROjqk->L2s0qEMkyL);
    Xf6ROjqk--;
    for (eDKdtHSPmr = (94 - 93); eDKdtHSPmr < x4iTVapeKEhz; eDKdtHSPmr++, Xf6ROjqk = Xf6ROjqk -(219 - 218))
        printf ("\n%s %s %c %d %s %s", &Xf6ROjqk->y7FLduU6Ih, &Xf6ROjqk->kcnTwu, Xf6ROjqk->RWUiBru0ty, Xf6ROjqk->cVaiyeSC, &Xf6ROjqk->n7hSEPOBCxI, &Xf6ROjqk->L2s0qEMkyL);
}

