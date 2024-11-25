struct   books {
    int eo8lVDR6f;
    char IK9xXayR [(273 - 173)];
    struct   books *flQRBm;
};
struct   books *FvReZ1pIX6 (int RIH04PraB) {
    struct   books *vd9lbq;
    struct   books *uYKo1kMt;
    struct   books *buBZdg;
    uYKo1kMt = (struct   books *) malloc (Len);
    scanf ("%d %s", &uYKo1kMt->eo8lVDR6f, uYKo1kMt->IK9xXayR);
    uYKo1kMt->flQRBm = NULL;
    vd9lbq = uYKo1kMt;
    buBZdg = uYKo1kMt;
    for (; RIH04PraB = RIH04PraB -(91 - 90);) {
        uYKo1kMt = (struct   books *) malloc (Len);
        scanf ("%d %s", &uYKo1kMt->eo8lVDR6f, uYKo1kMt->IK9xXayR);
        uYKo1kMt->flQRBm = NULL;
        buBZdg->flQRBm = uYKo1kMt;
        buBZdg = uYKo1kMt;
    }
    return vd9lbq;
}

void  main () {
    char IK9xXayR [(698 - 672)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int eo8lVDR6f [(812 - 786)] = {(330 - 330)};
    int lqIis7;
    int N29Apls;
    int fFfZm7USnezJ;
    char *X3npdPDbc8z;
    int RIH04PraB;
    struct   books *uYKo1kMt;
    struct   books *vd9lbq;
    scanf ("%d", &RIH04PraB);
    vd9lbq = FvReZ1pIX6 (RIH04PraB);
    uYKo1kMt = vd9lbq;
    {
        N29Apls = (434 - 434);
        for (; (829 - 803) > N29Apls;) {
            uYKo1kMt = vd9lbq;
            X3npdPDbc8z = uYKo1kMt->IK9xXayR;
            do {
                if (!(IK9xXayR[N29Apls] != *X3npdPDbc8z)) {
                    eo8lVDR6f[N29Apls]++;
                    uYKo1kMt = uYKo1kMt->flQRBm;
                    X3npdPDbc8z = uYKo1kMt->IK9xXayR;
                }
                else {
                    if (!('\0' != *X3npdPDbc8z)) {
                        uYKo1kMt = uYKo1kMt->flQRBm;
                        X3npdPDbc8z = uYKo1kMt->IK9xXayR;
                    }
                    else {
                        X3npdPDbc8z = X3npdPDbc8z +(480 - 479);
                    }
                }
            }
            while (uYKo1kMt != NULL);
            N29Apls = N29Apls +(886 - 885);
        }
    }
    lqIis7 = eo8lVDR6f[(580 - 580)];
    {
        N29Apls = (986 - 986);
        for (; N29Apls < (626 - 600);) {
            if (lqIis7 <= eo8lVDR6f[N29Apls]) {
                fFfZm7USnezJ = N29Apls;
                lqIis7 = eo8lVDR6f[N29Apls];
            }
            N29Apls = N29Apls +(144 - 143);
        }
    }
    printf ("%c\n", IK9xXayR[fFfZm7USnezJ]);
    uYKo1kMt = vd9lbq;
    printf ("%d\n", eo8lVDR6f[fFfZm7USnezJ]);
    X3npdPDbc8z = uYKo1kMt->IK9xXayR;
    for (; uYKo1kMt != NULL;) {
        if (!(IK9xXayR[fFfZm7USnezJ] != *X3npdPDbc8z)) {
            printf ("%d\n", uYKo1kMt->eo8lVDR6f);
            uYKo1kMt = uYKo1kMt->flQRBm;
            X3npdPDbc8z = uYKo1kMt->IK9xXayR;
        }
        else {
            if (!('\0' != *X3npdPDbc8z)) {
                uYKo1kMt = uYKo1kMt->flQRBm;
                X3npdPDbc8z = uYKo1kMt->IK9xXayR;
            }
            else {
                X3npdPDbc8z = X3npdPDbc8z +(785 - 784);
            }
        }
    }
}

