int EQH1Ix (int pv0PFLz []) {
    char s [1000];
    gets (s);
    int len;
    int IAvW5B;
    int GAyldHSKZOJ;
    int s7ZYIQMgmO;
    int SIVahBdAfn2r;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    len = strlen (s);
    IAvW5B = 0;
    GAyldHSKZOJ = 0;
    s7ZYIQMgmO = 0;
    for (SIVahBdAfn2r = 0; len > SIVahBdAfn2r; SIVahBdAfn2r++) {
        if (s[SIVahBdAfn2r] == ',') {
            pv0PFLz[GAyldHSKZOJ++] = IAvW5B;
            IAvW5B = 0;
        }
        else
            IAvW5B = IAvW5B *10 + s[SIVahBdAfn2r] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    pv0PFLz[GAyldHSKZOJ++] = IAvW5B;
    return (GAyldHSKZOJ);
}

int I91Yzi (int pv0PFLz [], int GAyldHSKZOJ) {
    int QXGJ4I;
    int zC7DtmPu;
    int SIVahBdAfn2r;
    QXGJ4I = 0, zC7DtmPu = 0;
    for (SIVahBdAfn2r = 0; SIVahBdAfn2r < GAyldHSKZOJ; SIVahBdAfn2r++) {
        if (QXGJ4I < pv0PFLz[SIVahBdAfn2r]) {
            zC7DtmPu = QXGJ4I;
            QXGJ4I = pv0PFLz[SIVahBdAfn2r];
        }
        else if (pv0PFLz[SIVahBdAfn2r] > zC7DtmPu && pv0PFLz[SIVahBdAfn2r] < QXGJ4I)
            zC7DtmPu = pv0PFLz[SIVahBdAfn2r];
    }
    if (QXGJ4I == zC7DtmPu)
        return 0;
    else
        return (zC7DtmPu);
}

void  main () {
    int NHtiyM;
    int pv0PFLz [100];
    int zC7DtmPu;
    NHtiyM = EQH1Ix (pv0PFLz);
    zC7DtmPu = I91Yzi (pv0PFLz, NHtiyM);
    if (zC7DtmPu)
        printf ("%d\n", zC7DtmPu);
    else
        ;
}

