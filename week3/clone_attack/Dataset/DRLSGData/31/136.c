struct   student {
    struct   student *tZsU1IBh;
    char mj13OaTVWrcH [(392 - 382)];
    char bIA3yurBf [(735 - 715)];
    char W2qHIOjvb;
    int p4nphm;
    float FialrA;
    char lSIBlLiU [(316 - 296)];
    struct   student *teKomR8zpH3;
};
struct   student *IAJLSsZhV () {
    struct   student *fEHwX1dm;
    struct   student *ZdpMBxK;
    struct   student *M6YAvxMK4eJ;
    struct   student *u7SY5uQ;
    struct   student *omFWC85B;
    ZdpMBxK = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", ZdpMBxK->mj13OaTVWrcH);
    if (!('e' != ZdpMBxK->mj13OaTVWrcH[(585 - 585)])) {
        free (ZdpMBxK);
        fEHwX1dm = NULL;
        return fEHwX1dm;
    }
    else {
        scanf ("%s", ZdpMBxK->bIA3yurBf);
        scanf ("%c", &ZdpMBxK->W2qHIOjvb);
        scanf ("%d", &ZdpMBxK->p4nphm);
        scanf ("%f", &ZdpMBxK->FialrA);
        scanf ("%s", ZdpMBxK->lSIBlLiU);
        getchar ();
        ZdpMBxK->teKomR8zpH3 = NULL;
    }
    fEHwX1dm = ZdpMBxK;
    M6YAvxMK4eJ = ZdpMBxK;
    {
        for (; true;) {
            ZdpMBxK = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s", ZdpMBxK->mj13OaTVWrcH);
            if (!('e' != ZdpMBxK->mj13OaTVWrcH[(573 - 573)])) {
                free (ZdpMBxK);
                fEHwX1dm->tZsU1IBh = NULL;
                for (u7SY5uQ = fEHwX1dm; u7SY5uQ->teKomR8zpH3 != NULL;) {
                    omFWC85B = u7SY5uQ->teKomR8zpH3;
                    omFWC85B->tZsU1IBh = u7SY5uQ;
                    u7SY5uQ = u7SY5uQ->teKomR8zpH3;
                }
                return fEHwX1dm;
            }
            else {
                scanf ("%s", ZdpMBxK->bIA3yurBf);
                scanf ("%c", &ZdpMBxK->W2qHIOjvb);
                scanf ("%d", &ZdpMBxK->p4nphm);
                scanf ("%f", &ZdpMBxK->FialrA);
                scanf ("%s", ZdpMBxK->lSIBlLiU);
                ZdpMBxK->teKomR8zpH3 = NULL;
                getchar ();
            }
            M6YAvxMK4eJ->teKomR8zpH3 = ZdpMBxK;
            M6YAvxMK4eJ = ZdpMBxK;
        }
    }
}

void  OPktna59x (struct   student *fEHwX1dm) {
    struct   student *omFWC85B;
    for (; fEHwX1dm != NULL;) {
        free (omFWC85B);
        omFWC85B = fEHwX1dm;
        fEHwX1dm = fEHwX1dm->teKomR8zpH3;
    }
}

void  main () {
    struct   student *u7SY5uQ;
    OPktna59x (u7SY5uQ);
    struct   student *DFwC9gnrSdu;
    struct   student *lbo5sv;
    u7SY5uQ = IAJLSsZhV ();
    for (lbo5sv = u7SY5uQ; lbo5sv->teKomR8zpH3 != NULL;) {
        lbo5sv = lbo5sv->teKomR8zpH3;
    }
    {
        DFwC9gnrSdu = lbo5sv;
        while (DFwC9gnrSdu != NULL) {
            printf ("%s %s %c %d %g %s\n", DFwC9gnrSdu->mj13OaTVWrcH, DFwC9gnrSdu->bIA3yurBf, DFwC9gnrSdu->W2qHIOjvb, DFwC9gnrSdu->p4nphm, DFwC9gnrSdu->FialrA, DFwC9gnrSdu->lSIBlLiU);
            DFwC9gnrSdu = DFwC9gnrSdu->tZsU1IBh;
        }
    }
}

