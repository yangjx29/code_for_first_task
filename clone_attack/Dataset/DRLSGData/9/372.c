struct   patient {
    char KlGTkKmiX5 [(519 - 509)];
    int M9fXTxW;
    struct   patient *aFoLzJMtb;
};
void  CsqLxX (struct   patient *u2jrkRnFtdz, struct   patient *pVtDWx8XN9Pz) {
    struct   patient *Yfb2ao = u2jrkRnFtdz, *eQxRXjSLwp7u = Yfb2ao->aFoLzJMtb, *VWQfVEiSoCnX;
    VWQfVEiSoCnX = (struct   patient *) malloc (sizeof (struct   patient));
    VWQfVEiSoCnX->M9fXTxW = pVtDWx8XN9Pz->M9fXTxW;
    strcpy (VWQfVEiSoCnX->KlGTkKmiX5, pVtDWx8XN9Pz->KlGTkKmiX5);
    VWQfVEiSoCnX->aFoLzJMtb = NULL;
    if (pVtDWx8XN9Pz->M9fXTxW >= (548 - 488)) {
        for (; (eQxRXjSLwp7u != NULL) && (pVtDWx8XN9Pz->M9fXTxW <= eQxRXjSLwp7u->M9fXTxW);) {
            Yfb2ao = eQxRXjSLwp7u;
            eQxRXjSLwp7u = eQxRXjSLwp7u->aFoLzJMtb;
        }
        Yfb2ao->aFoLzJMtb = VWQfVEiSoCnX;
        VWQfVEiSoCnX->aFoLzJMtb = eQxRXjSLwp7u;
    }
    else {
        while (eQxRXjSLwp7u != NULL) {
            Yfb2ao = eQxRXjSLwp7u;
            eQxRXjSLwp7u = eQxRXjSLwp7u->aFoLzJMtb;
        }
        Yfb2ao->aFoLzJMtb = VWQfVEiSoCnX;
        VWQfVEiSoCnX->aFoLzJMtb = eQxRXjSLwp7u;
    }
}

void  nodTAzOPWM (struct   patient *u2jrkRnFtdz) {
    struct   patient *eQxRXjSLwp7u;
    eQxRXjSLwp7u = u2jrkRnFtdz;
    for (; eQxRXjSLwp7u != NULL;) {
        printf ("%s\n", eQxRXjSLwp7u->KlGTkKmiX5);
        eQxRXjSLwp7u = eQxRXjSLwp7u->aFoLzJMtb;
    }
}

void  main () {
    struct   patient *u2jrkRnFtdz;
    struct   patient *eQxRXjSLwp7u;
    int lYFtsO, QVEWydl1ws;
    u2jrkRnFtdz = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%d", &lYFtsO);
    u2jrkRnFtdz->aFoLzJMtb = NULL;
    {
        QVEWydl1ws = (1014 - 307) - 706;
        for (; QVEWydl1ws <= lYFtsO;) {
            eQxRXjSLwp7u = (struct   patient *) malloc (sizeof (struct   patient));
            QVEWydl1ws++;
            scanf ("%s %d", eQxRXjSLwp7u->KlGTkKmiX5, &eQxRXjSLwp7u->M9fXTxW);
            CsqLxX (u2jrkRnFtdz, eQxRXjSLwp7u);
        }
    }
    nodTAzOPWM (u2jrkRnFtdz->aFoLzJMtb);
}

