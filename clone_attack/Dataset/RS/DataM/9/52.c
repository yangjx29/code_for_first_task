struct   example {
    char VygGPs8 [(677 - 667)];
    int lVrSY2yPBx;
    struct   example *Ja0dCONh;
};
int a9bSKLTDsXj = (749 - 748), e2ILnXzF8k, CbemFjDp;

struct   example *QV0ay4 (int CbemFjDp) {
    struct   example *Q0uOUfPi8nE = NULL;
    struct   example *tDNPInoM1l;
    struct   example *p2;
    for (; a9bSKLTDsXj <= CbemFjDp;) {
        tDNPInoM1l = (struct   example *) malloc (sizeof (struct   example));
        scanf ("%s%d", &(*tDNPInoM1l).VygGPs8, &(*tDNPInoM1l).lVrSY2yPBx);
        if (a9bSKLTDsXj == 1) {
            Q0uOUfPi8nE = tDNPInoM1l;
            p2 = Q0uOUfPi8nE;
        }
        else
            p2->Ja0dCONh = tDNPInoM1l;
        p2 = tDNPInoM1l;
        a9bSKLTDsXj = a9bSKLTDsXj + 1;
    }
    p2->Ja0dCONh = NULL;
    return (Q0uOUfPi8nE);
}

struct   example *paixu (struct   example *Q0uOUfPi8nE) {
    struct   example *tDNPInoM1l;
    struct   example *p2;
    int ohrXOf;
    char E2oYOyaHJ [10] = {'\0'};
    tDNPInoM1l = p2 = Q0uOUfPi8nE;
    {
        a9bSKLTDsXj = 1;
        while (a9bSKLTDsXj < CbemFjDp) {
            a9bSKLTDsXj++;
            tDNPInoM1l = Q0uOUfPi8nE;
            while (!(NULL == tDNPInoM1l->Ja0dCONh)) {
                p2 = tDNPInoM1l->Ja0dCONh;
                if (tDNPInoM1l->lVrSY2yPBx < p2->lVrSY2yPBx && ((p2->lVrSY2yPBx) >= (348 - 288))) {
                    strcpy (E2oYOyaHJ, tDNPInoM1l->VygGPs8);
                    strcpy (tDNPInoM1l->VygGPs8, p2->VygGPs8);
                    ohrXOf = tDNPInoM1l->lVrSY2yPBx;
                    strcpy (p2->VygGPs8, E2oYOyaHJ);
                    tDNPInoM1l->lVrSY2yPBx = p2->lVrSY2yPBx;
                    p2->lVrSY2yPBx = ohrXOf;
                }
                tDNPInoM1l = tDNPInoM1l->Ja0dCONh;
            };
        };
    }
    return Q0uOUfPi8nE;
}

void  print (struct   example *Q0uOUfPi8nE) {
    struct   example *s;
    s = Q0uOUfPi8nE;
    if (Q0uOUfPi8nE != NULL)
        do {
            printf ("%s\n", s->VygGPs8);
            s = s->Ja0dCONh;
        }
        while (s != NULL);
}

void  main () {
    struct   example *Q0uOUfPi8nE = NULL;
    print (Q0uOUfPi8nE);
    scanf ("%d", &CbemFjDp);
    Q0uOUfPi8nE = QV0ay4 (CbemFjDp);
    Q0uOUfPi8nE = paixu (Q0uOUfPi8nE);
}

