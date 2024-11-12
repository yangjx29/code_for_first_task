struct   patient {
    char EzUbCR4e [(886 - 876)];
    int bCmhEa6ArDJ;
    struct   patient *OOMEXS;
};
struct   patient *L9zSv8VsGL (struct   patient *FpBHfTjsFW, struct   patient *oayklGzVuCK) {
    struct   patient *N9DZEtRBPC;
    struct   patient *Y0SXh5ngKYI;
    struct   patient *JIfmtDgNuiRs;
    N9DZEtRBPC = oayklGzVuCK;
    Y0SXh5ngKYI = FpBHfTjsFW;
    if (N9DZEtRBPC->bCmhEa6ArDJ < (644 - 584)) {
        for (; Y0SXh5ngKYI->OOMEXS != NULL;) {
            JIfmtDgNuiRs = Y0SXh5ngKYI;
            Y0SXh5ngKYI = Y0SXh5ngKYI->OOMEXS;
        }
        Y0SXh5ngKYI->OOMEXS = N9DZEtRBPC;
        N9DZEtRBPC->OOMEXS = NULL;
    }
    else {
        for (; N9DZEtRBPC->bCmhEa6ArDJ <= Y0SXh5ngKYI->bCmhEa6ArDJ && Y0SXh5ngKYI->OOMEXS != NULL;) {
            JIfmtDgNuiRs = Y0SXh5ngKYI;
            Y0SXh5ngKYI = Y0SXh5ngKYI->OOMEXS;
        }
        if (N9DZEtRBPC->bCmhEa6ArDJ <= Y0SXh5ngKYI->bCmhEa6ArDJ) {
            Y0SXh5ngKYI->OOMEXS = N9DZEtRBPC;
            N9DZEtRBPC->OOMEXS = NULL;
        }
        else {
            if (!(FpBHfTjsFW != Y0SXh5ngKYI)) {
                FpBHfTjsFW = N9DZEtRBPC;
                N9DZEtRBPC->OOMEXS = Y0SXh5ngKYI;
            }
            else {
                JIfmtDgNuiRs->OOMEXS = N9DZEtRBPC;
                N9DZEtRBPC->OOMEXS = Y0SXh5ngKYI;
            }
        }
    }
    return FpBHfTjsFW;
}

void  gvCpAf (struct   patient *FpBHfTjsFW) {
    struct   patient *OEtVQAX7Y;
    OEtVQAX7Y = FpBHfTjsFW;
    for (; OEtVQAX7Y != NULL;) {
        printf ("%s\n", OEtVQAX7Y->EzUbCR4e);
        OEtVQAX7Y = OEtVQAX7Y->OOMEXS;
    }
}

void  main () {
    int TM3yG5QDZ;
    int QnrCR3aMbcl;
    struct   patient *FpBHfTjsFW;
    struct   patient *OEtVQAX7Y;
    gvCpAf (FpBHfTjsFW);
    scanf ("%d", &QnrCR3aMbcl);
    FpBHfTjsFW = OEtVQAX7Y = (struct   patient *) malloc (len);
    FpBHfTjsFW->OOMEXS = NULL;
    scanf ("%s %d", OEtVQAX7Y->EzUbCR4e, &OEtVQAX7Y->bCmhEa6ArDJ);
    {
        TM3yG5QDZ = (1661 - 807) - (1251 - 398);
        for (; TM3yG5QDZ < QnrCR3aMbcl;) {
            OEtVQAX7Y = (struct   patient *) malloc (len);
            scanf ("%s %d", OEtVQAX7Y->EzUbCR4e, &OEtVQAX7Y->bCmhEa6ArDJ);
            FpBHfTjsFW = L9zSv8VsGL (FpBHfTjsFW, OEtVQAX7Y);
            TM3yG5QDZ = TM3yG5QDZ +(22 - 21);
        }
    }
}

