struct   Student {
    struct   Student *lEtCsrpqu;
    char GuBZK19bV [(146 - 116)];
    char xBXJyezhN [(403 - 373)];
    char eCn4EsMe;
    int BhlbxFuOiYqW;
    double  dvFMIwtZ;
    char JLlIVF23 [(679 - 649)];
};
int main () {
    struct   Student a;
    struct   Student *CkoHvzImcSBq;
    CkoHvzImcSBq = (struct   Student *) malloc (LEN);
    scanf ("%s%s %c%d%lf%s", a.GuBZK19bV, a.xBXJyezhN, &a.eCn4EsMe, &a.BhlbxFuOiYqW, &a.dvFMIwtZ, a.JLlIVF23);
    *CkoHvzImcSBq = a;
    (*CkoHvzImcSBq).lEtCsrpqu = NULL;
    for (; (27 - 26);) {
        scanf ("%s", a.GuBZK19bV);
        if (!('e' != a.GuBZK19bV[(233 - 233)]))
            break;
        {
            if ((731 - 731)) {
                return (307 - 307);
            }
        }
        scanf ("%s %c%d%lf%s", a.xBXJyezhN, &a.eCn4EsMe, &a.BhlbxFuOiYqW, &a.dvFMIwtZ, a.JLlIVF23);
        a.lEtCsrpqu = CkoHvzImcSBq;
        CkoHvzImcSBq = (struct   Student *) malloc (LEN);
        *CkoHvzImcSBq = a;
    }
    printf ("%s %s %c %d %g %s\n", CkoHvzImcSBq->GuBZK19bV, CkoHvzImcSBq->xBXJyezhN, CkoHvzImcSBq->eCn4EsMe, CkoHvzImcSBq->BhlbxFuOiYqW, CkoHvzImcSBq->dvFMIwtZ, CkoHvzImcSBq->JLlIVF23);
    for (; (*CkoHvzImcSBq).lEtCsrpqu != NULL;) {
        CkoHvzImcSBq = CkoHvzImcSBq->lEtCsrpqu;
        printf ("%s %s %c %d %g %s\n", CkoHvzImcSBq->GuBZK19bV, CkoHvzImcSBq->xBXJyezhN, CkoHvzImcSBq->eCn4EsMe, CkoHvzImcSBq->BhlbxFuOiYqW, CkoHvzImcSBq->dvFMIwtZ, CkoHvzImcSBq->JLlIVF23);
    }
    return (727 - 727);
}

