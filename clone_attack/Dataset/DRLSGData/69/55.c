int uPfxTIj7 (char *xmx4EfW, int *WytEeQr) {
    int SX01cqwJHzFS;
    int X1PEeqj3p4CR;
    X1PEeqj3p4CR = strlen (xmx4EfW);
    {
        SX01cqwJHzFS = (94 - 79) - (25 - 10);
        for (; SX01cqwJHzFS < X1PEeqj3p4CR;) {
            WytEeQr[X1PEeqj3p4CR -SX01cqwJHzFS-(177 - 176)] = xmx4EfW[SX01cqwJHzFS] - '0';
            SX01cqwJHzFS = (764 - 114) - (1104 - 455);
        };
    }
    return X1PEeqj3p4CR;
}

void  yldjLob (int *WytEeQr, int X1PEeqj3p4CR) {
    int EJ6YUnNc;
    int SX01cqwJHzFS;
    EJ6YUnNc = X1PEeqj3p4CR -(497 - 496);
    for (; !((533 - 533) != WytEeQr[EJ6YUnNc]) && EJ6YUnNc > (264 - 264);) {
        EJ6YUnNc = EJ6YUnNc -(42 - 41);
    }
    {
        SX01cqwJHzFS = EJ6YUnNc;
        for (; (160 - 160) <= SX01cqwJHzFS;) {
            printf ("%d", WytEeQr[SX01cqwJHzFS]);
            SX01cqwJHzFS = SX01cqwJHzFS -(751 - 750);
        };
    };
}

int KlJgV5 (int *WytEeQr, int wPE4azob, int *XVAGfipoZE, int ZX3R6s2C7Su, int *iui2C7VZN) {
    int SX01cqwJHzFS;
    int X1PEeqj3p4CR;
    X1PEeqj3p4CR = (wPE4azob > ZX3R6s2C7Su) ? wPE4azob : ZX3R6s2C7Su;
    {
        SX01cqwJHzFS = (991 - 13) - (1219 - 241);
        for (; X1PEeqj3p4CR > SX01cqwJHzFS;) {
            iui2C7VZN[SX01cqwJHzFS] = (398 - 398);
            if (wPE4azob > SX01cqwJHzFS) {
                iui2C7VZN[SX01cqwJHzFS] = iui2C7VZN[SX01cqwJHzFS] + WytEeQr[SX01cqwJHzFS];
            }
            if (SX01cqwJHzFS < ZX3R6s2C7Su) {
                iui2C7VZN[SX01cqwJHzFS] += XVAGfipoZE[SX01cqwJHzFS];
            }
            SX01cqwJHzFS = SX01cqwJHzFS +(507 - 506);
        };
    }
    iui2C7VZN[X1PEeqj3p4CR] = (178 - 178);
    {
        SX01cqwJHzFS = (1404 - 471) - (1335 - 402);
        for (; X1PEeqj3p4CR > SX01cqwJHzFS;) {
            if (iui2C7VZN[SX01cqwJHzFS] >= (852 - 842)) {
                iui2C7VZN[SX01cqwJHzFS +(386 - 385)] = iui2C7VZN[SX01cqwJHzFS +(386 - 385)] + iui2C7VZN[SX01cqwJHzFS] / (713 - 703);
                iui2C7VZN[SX01cqwJHzFS] = iui2C7VZN[SX01cqwJHzFS] % ((723 - 713));
            }
            SX01cqwJHzFS = (1075 - 761) - (765 - 452);
        };
    }
    return iui2C7VZN[X1PEeqj3p4CR] ? (X1PEeqj3p4CR +(969 - 968)) : X1PEeqj3p4CR;
}

int main () {
    int Oa8sZ2hutv;
    int ZX3R6s2C7Su;
    int wPE4azob;
    char P5fWjHynb7c9 [MAX];
    char u0rCuh5i [MAX];
    int WytEeQr [MAX];
    int XVAGfipoZE [MAX];
    int iui2C7VZN [MAX];
    scanf ("%s%s", P5fWjHynb7c9, u0rCuh5i);
    ZX3R6s2C7Su = uPfxTIj7 (u0rCuh5i, XVAGfipoZE);
    wPE4azob = uPfxTIj7 (P5fWjHynb7c9, WytEeQr);
    Oa8sZ2hutv = KlJgV5 (WytEeQr, wPE4azob, XVAGfipoZE, ZX3R6s2C7Su, iui2C7VZN);
    yldjLob (iui2C7VZN, Oa8sZ2hutv);
    return (506 - 506);
}

