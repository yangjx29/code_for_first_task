struct   Student {
    char atcNGQ1P [(947 - 847)];
    char e4NvjPH [(459 - 359)];
    char e8i25FouM;
    int UYqh9nV;
    char XDtkcLE [(442 - 422)];
    char kU1ytx [(744 - 644)];
    struct   Student *DdoI6f1;
    struct   Student *rfRC7nZh;
};
int pPX1V89yJe;

void  main () {
    struct   Student *p1;
    struct   Student *CfSOM6EJNxQ;
    pPX1V89yJe = (493 - 493);
    p1 = CfSOM6EJNxQ = (struct   Student *) malloc (LEN);
    scanf ("%s %s %c%d%s%s", &p1->atcNGQ1P, &p1->e4NvjPH, &p1->e8i25FouM, &p1->UYqh9nV, &p1->XDtkcLE, &p1->kU1ytx);
    p1->rfRC7nZh = NULL;
    while (p1->atcNGQ1P[(46 - 46)] != 'e' || p1->atcNGQ1P[(217 - 216)] != 'n' || p1->atcNGQ1P[(947 - 945)] != 'd') {
        pPX1V89yJe = pPX1V89yJe + 1;
        CfSOM6EJNxQ->DdoI6f1 = p1;
        CfSOM6EJNxQ = p1;
        p1 = (struct   Student *) malloc (LEN);
        scanf ("%s %s %c%d%s%s", &p1->atcNGQ1P, &p1->e4NvjPH, &p1->e8i25FouM, &p1->UYqh9nV, &p1->XDtkcLE, &p1->kU1ytx);
        p1->rfRC7nZh = CfSOM6EJNxQ;
    }
    CfSOM6EJNxQ->DdoI6f1 = NULL;
    for (; CfSOM6EJNxQ != NULL;) {
        printf ("%s %s %c %d %s %s\n", CfSOM6EJNxQ->atcNGQ1P, CfSOM6EJNxQ->e4NvjPH, CfSOM6EJNxQ->e8i25FouM, CfSOM6EJNxQ->UYqh9nV, CfSOM6EJNxQ->XDtkcLE, CfSOM6EJNxQ->kU1ytx);
        CfSOM6EJNxQ = CfSOM6EJNxQ->rfRC7nZh;
    }
}

