int R2wGYSm;
int OXz5p0e9TNY8 [1000], sztsx6nS7MV [1000];

void  vHqyEOkja7dV (int *IXdPsLVt) {
    int XruyUFP4wSBd, ygFfQe3CR, uj0MDz7xk;
    for (XruyUFP4wSBd = 1; R2wGYSm >= XruyUFP4wSBd; XruyUFP4wSBd = XruyUFP4wSBd +1) {
        for (ygFfQe3CR = XruyUFP4wSBd +1; R2wGYSm >= ygFfQe3CR; ygFfQe3CR = ygFfQe3CR + 1) {
            if (IXdPsLVt[ygFfQe3CR] > IXdPsLVt[XruyUFP4wSBd]) {
                uj0MDz7xk = IXdPsLVt[XruyUFP4wSBd];
                IXdPsLVt[XruyUFP4wSBd] = IXdPsLVt[ygFfQe3CR];
                IXdPsLVt[ygFfQe3CR] = uj0MDz7xk;
            }
        }
    }
}

main () {
    int ygFfQe3CR;
    int nYlxm4;
    int ALbaRGp;
    int IXdPsLVt;
    int XruyUFP4wSBd;
    int uj0MDz7xk;
    int gUJsgx45wb3;
    for (;;) {
        scanf ("%d", &R2wGYSm);
        if (!(0 != R2wGYSm))
            break;
        else {
            vHqyEOkja7dV (OXz5p0e9TNY8);
            vHqyEOkja7dV (sztsx6nS7MV);
            for (XruyUFP4wSBd = 1; R2wGYSm >= XruyUFP4wSBd; XruyUFP4wSBd = XruyUFP4wSBd +1)
                scanf ("%d", &OXz5p0e9TNY8[XruyUFP4wSBd]);
            for (XruyUFP4wSBd = 1; R2wGYSm >= XruyUFP4wSBd; XruyUFP4wSBd = XruyUFP4wSBd +1)
                scanf ("%d", &sztsx6nS7MV[XruyUFP4wSBd]);
            nYlxm4 = 0;
            for (XruyUFP4wSBd = 1, ygFfQe3CR = 1, IXdPsLVt = R2wGYSm, ALbaRGp = R2wGYSm; XruyUFP4wSBd <= ALbaRGp;) {
                if (sztsx6nS7MV[XruyUFP4wSBd] < OXz5p0e9TNY8[ygFfQe3CR]) {
                    ygFfQe3CR++;
                    XruyUFP4wSBd = XruyUFP4wSBd +1;
                    nYlxm4 += 200;
                }
                else if (sztsx6nS7MV[ALbaRGp] < OXz5p0e9TNY8[IXdPsLVt]) {
                    nYlxm4 += 200;
                    IXdPsLVt = IXdPsLVt -1;
                    ALbaRGp = ALbaRGp -1;
                }
                else if (sztsx6nS7MV[XruyUFP4wSBd] == OXz5p0e9TNY8[IXdPsLVt]) {
                    IXdPsLVt = IXdPsLVt -1;
                    XruyUFP4wSBd = XruyUFP4wSBd +1;
                }
                else if (sztsx6nS7MV[XruyUFP4wSBd] > OXz5p0e9TNY8[IXdPsLVt]) {
                    nYlxm4 -= 200;
                    XruyUFP4wSBd = XruyUFP4wSBd +1;
                    IXdPsLVt = IXdPsLVt -1;
                }
            }
            printf ("%d\n", nYlxm4);
        }
    }
}

