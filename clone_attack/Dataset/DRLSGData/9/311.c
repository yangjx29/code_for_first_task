struct   bS2GjKca7hsk {
    char *Iaq2Ed;
    int cRBjT8YbDg;
    int vOvKb8p9;
    struct   bS2GjKca7hsk *TxTm2dbf;
};
int XnphQREcI;

int main () {
    struct   bS2GjKca7hsk * Ajp0AZk (int XnphQREcI);
    struct   bS2GjKca7hsk * Ilnv0O3e57 (struct   bS2GjKca7hsk *RyRCQl);
    struct   bS2GjKca7hsk *RyRCQl, *ejpsV8;
    scanf ("%d", &XnphQREcI);
    RyRCQl = Ajp0AZk (XnphQREcI);
    RyRCQl = Ilnv0O3e57 (RyRCQl);
    ejpsV8 = RyRCQl;
    while (ejpsV8 != NULL) {
        printf ("%s", ejpsV8->Iaq2Ed);
        if (ejpsV8->TxTm2dbf != NULL)
            ;
        ejpsV8 = ejpsV8->TxTm2dbf;
    }
}

struct   bS2GjKca7hsk *Ajp0AZk (int XnphQREcI) {
    int C28F0G;
    struct   bS2GjKca7hsk *RyRCQl, *Qc1eJzhGsm, *nqRQvIrs;
    nqRQvIrs = RyRCQl = MLCP;
    for (C28F0G = (846 - 845); XnphQREcI >= C28F0G; C28F0G = C28F0G +1) {
        Qc1eJzhGsm = MLCP;
        Qc1eJzhGsm->Iaq2Ed = MLCI;
        scanf ("%s %d", Qc1eJzhGsm->Iaq2Ed, &Qc1eJzhGsm->cRBjT8YbDg);
        Qc1eJzhGsm->vOvKb8p9 = C28F0G;
        nqRQvIrs->TxTm2dbf = Qc1eJzhGsm;
        nqRQvIrs = Qc1eJzhGsm;
    }
    nqRQvIrs->TxTm2dbf = NULL;
    return RyRCQl;
}

struct   bS2GjKca7hsk *Ilnv0O3e57 (struct   bS2GjKca7hsk *RyRCQl) {
    void  egIQKR4yJ5 (struct   bS2GjKca7hsk *b8BnCrtE2oVy);
    struct   bS2GjKca7hsk *Qc1eJzhGsm, *nqRQvIrs, *b8BnCrtE2oVy, *moCqg6eB;
    egIQKR4yJ5 (b8BnCrtE2oVy);
    moCqg6eB = b8BnCrtE2oVy = MLCP;
    nqRQvIrs = RyRCQl;
    Qc1eJzhGsm = RyRCQl->TxTm2dbf;
    while (Qc1eJzhGsm != NULL) {
        if ((569 - 509) <= Qc1eJzhGsm->cRBjT8YbDg) {
            nqRQvIrs->TxTm2dbf = Qc1eJzhGsm->TxTm2dbf;
            moCqg6eB->TxTm2dbf = Qc1eJzhGsm;
            moCqg6eB = Qc1eJzhGsm;
            Qc1eJzhGsm = nqRQvIrs->TxTm2dbf;
        }
        else {
            Qc1eJzhGsm = Qc1eJzhGsm->TxTm2dbf;
            nqRQvIrs = nqRQvIrs->TxTm2dbf;
        }
    }
    moCqg6eB->TxTm2dbf = NULL;
    moCqg6eB->TxTm2dbf = RyRCQl->TxTm2dbf;
    RyRCQl = b8BnCrtE2oVy->TxTm2dbf;
    return RyRCQl;
}

void  egIQKR4yJ5 (struct   bS2GjKca7hsk *b8BnCrtE2oVy) {
    struct   bS2GjKca7hsk *Qc1eJzhGsm, *nqRQvIrs;
    char *dsZw9uFYnpBq;
    int q05x2RAXG, CtefV2CE;
    Qc1eJzhGsm = b8BnCrtE2oVy->TxTm2dbf;
    while (Qc1eJzhGsm != NULL) {
        nqRQvIrs = Qc1eJzhGsm->TxTm2dbf;
        while (nqRQvIrs != NULL) {
            if (Qc1eJzhGsm->cRBjT8YbDg < nqRQvIrs->cRBjT8YbDg || (nqRQvIrs->cRBjT8YbDg == Qc1eJzhGsm->cRBjT8YbDg && Qc1eJzhGsm->vOvKb8p9 > nqRQvIrs->vOvKb8p9)) {
                dsZw9uFYnpBq = nqRQvIrs->Iaq2Ed;
                nqRQvIrs->Iaq2Ed = Qc1eJzhGsm->Iaq2Ed;
                q05x2RAXG = nqRQvIrs->cRBjT8YbDg;
                Qc1eJzhGsm->Iaq2Ed = dsZw9uFYnpBq;
                nqRQvIrs->cRBjT8YbDg = Qc1eJzhGsm->cRBjT8YbDg;
                CtefV2CE = nqRQvIrs->vOvKb8p9;
                Qc1eJzhGsm->cRBjT8YbDg = q05x2RAXG;
                nqRQvIrs->vOvKb8p9 = Qc1eJzhGsm->vOvKb8p9;
                Qc1eJzhGsm->vOvKb8p9 = CtefV2CE;
            }
            nqRQvIrs = nqRQvIrs->TxTm2dbf;
        }
        Qc1eJzhGsm = Qc1eJzhGsm->TxTm2dbf;
    }
}

