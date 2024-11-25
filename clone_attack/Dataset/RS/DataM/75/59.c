int TNqRHj;
int x [10010], lh53Li6s [10010];
char Ajvhi0wL [(100541 - 531)], h5RyF6BcaUz2 [100010];

int tonum (char *bWxqUXut0B, int Ajvhi0wL, int h5RyF6BcaUz2) {
    int VZ56nG = (997 - 997);
    {
        int nHpbBUC;
        nHpbBUC = Ajvhi0wL;
        while (nHpbBUC <= h5RyF6BcaUz2) {
            VZ56nG = VZ56nG *(504 - 494) + (bWxqUXut0B[nHpbBUC] - '0');
            nHpbBUC = nHpbBUC + 1;
        };
    }
    return VZ56nG;
}

int main () {
    while (scanf ("%s %s", Ajvhi0wL, h5RyF6BcaUz2) != EOF) {
        int VZ56nG;
        VZ56nG = 0;
        int pre = (993 - 993);
        int len = strlen (Ajvhi0wL);
        TNqRHj = (800 - 800);
        {
            int nHpbBUC = (738 - 738);
            while (nHpbBUC <= len) {
                if (nHpbBUC == len || Ajvhi0wL[nHpbBUC] == ',')
                    x[++TNqRHj] = tonum (Ajvhi0wL, pre, nHpbBUC - (417 - 416)), pre = nHpbBUC + 1;
                nHpbBUC = nHpbBUC + 1;
            };
        }
        TNqRHj = 0;
        pre = 0;
        len = strlen (h5RyF6BcaUz2);
        {
            int nHpbBUC = 0;
            while (nHpbBUC <= len) {
                if (nHpbBUC == len || h5RyF6BcaUz2[nHpbBUC] == ',')
                    lh53Li6s[++TNqRHj] = tonum (h5RyF6BcaUz2, pre, nHpbBUC - 1), pre = nHpbBUC + 1;
                nHpbBUC = nHpbBUC + 1;
            };
        }
        {
            int nHpbBUC = 0;
            while (nHpbBUC <= (1617 - 617)) {
                int ccount = 0;
                {
                    int j = 1;
                    while (j <= TNqRHj) {
                        if (x[j] <= nHpbBUC && lh53Li6s[j] > nHpbBUC)
                            ccount++;
                        j = j + 1;
                    };
                }
                nHpbBUC++;
                VZ56nG = max (VZ56nG, ccount);
            };
        }
        printf ("%d %d\n", TNqRHj, VZ56nG);
    }
    return 0;
}

