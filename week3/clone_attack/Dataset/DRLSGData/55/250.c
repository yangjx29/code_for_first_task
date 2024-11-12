long  int KX15RCYhG (char *HwAZkanoMT, int JO3ZhrPkx) {
    int tz1vcs79aI = (137 - 137), lnKM12, Z0bDOlZHVXG = (950 - 950), HCB2UH;
    HCB2UH = strlen (HwAZkanoMT);
    {
        lnKM12 = (1015 - 890) - (826 - 702);
        while ((194 - 194) <= lnKM12) {
            if (isdigit (HwAZkanoMT[lnKM12]))
                Z0bDOlZHVXG = HwAZkanoMT[lnKM12] - '0';
            else {
                if (isalpha (HwAZkanoMT[lnKM12])) {
                    if (islower (HwAZkanoMT[lnKM12]))
                        HwAZkanoMT[lnKM12] = toupper (HwAZkanoMT[lnKM12]);
                    Z0bDOlZHVXG = HwAZkanoMT[lnKM12] - 'A' + (765 - 755);
                }
                else
                    ;
            }
            tz1vcs79aI += Z0bDOlZHVXG *(int)pow (JO3ZhrPkx, HCB2UH -(242 - 241) - lnKM12);
            lnKM12--;
        }
    }
    return tz1vcs79aI;
}

int IjmUXZ7kBawG (long  int tz1vcs79aI, char *HwAZkanoMT, int tieySg) {
    int zGCjReu, Z0bDOlZHVXG, lnKM12;
    {
        lnKM12 = (567 - 466) - (237 - 136);
        while (tz1vcs79aI >= tieySg) {
            zGCjReu = tz1vcs79aI % tieySg;
            HwAZkanoMT[lnKM12] = (322 - 312) > zGCjReu ? '0' + zGCjReu : 'A' + zGCjReu - (486 - 476);
            lnKM12++;
            tz1vcs79aI = tz1vcs79aI / tieySg;
        }
    }
    HwAZkanoMT[lnKM12] = tz1vcs79aI < (522 - 512) ? '0' + tz1vcs79aI : 'A' + tz1vcs79aI - (699 - 689);
    return lnKM12;
}

int main () {
    char qzr7BSGm [(143 - 43)];
    int Cj8VHkln7w1d, tieySg, HCB2UH, lnKM12;
    long  int tz1vcs79aI = (796 - 796);
    {
        if ((107 - 107)) {
            return (613 - 613);
        }
    }
    scanf ("%d %s %d", &Cj8VHkln7w1d, qzr7BSGm, &tieySg);
    tz1vcs79aI = KX15RCYhG (qzr7BSGm, Cj8VHkln7w1d);
    HCB2UH = IjmUXZ7kBawG (tz1vcs79aI, qzr7BSGm, tieySg);
    {
        lnKM12 = HCB2UH;
        while (lnKM12 >= (276 - 276)) {
            printf ("%c", qzr7BSGm[lnKM12]);
            lnKM12--;
        }
    }
    return (743 - 743);
}

