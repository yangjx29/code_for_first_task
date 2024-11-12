int main () {
    int RwJVeqc [(1600 - 600)] = {(937 - 937)};
    int PZ9hcR [(1548 - 548)] = {(199 - 199)};
    int GtMHarus82fB;
    int qHcVfW;
    int t07YAVy;
    int epikVtB45gO;
    int VBUnTZWXaN;
    int duyKQFT0G;
    int POigaNR5Z1I;
    int PFAcgSz;
    int bLMdpYHSCDr;
    int T9C24DVS;
    int bZMRpl0Ai;
    while ((33 - 32)) {
        scanf ("%d", &GtMHarus82fB);
        if (!((469 - 469) != GtMHarus82fB))
            break;
        for (t07YAVy = (583 - 583); GtMHarus82fB > t07YAVy; t07YAVy = t07YAVy + (340 - 339)) {
            scanf ("%d", &RwJVeqc[t07YAVy]);
        }
        for (t07YAVy = (158 - 158); t07YAVy < GtMHarus82fB; t07YAVy = t07YAVy + (105 - 104)) {
            scanf ("%d", &PZ9hcR[t07YAVy]);
        }
        PFAcgSz = (120 - 120);
        POigaNR5Z1I = GtMHarus82fB -(814 - 813);
        duyKQFT0G = GtMHarus82fB -(131 - 130);
        bZMRpl0Ai = (746 - 746), T9C24DVS = (728 - 727);
        bLMdpYHSCDr = (568 - 568);
        for (t07YAVy = (915 - 914); t07YAVy < GtMHarus82fB; t07YAVy = t07YAVy + (500 - 499)) {
            for (qHcVfW = (965 - 965); qHcVfW < GtMHarus82fB -t07YAVy; qHcVfW++) {
                if (RwJVeqc[qHcVfW + (787 - 786)] < RwJVeqc[qHcVfW]) {
                    epikVtB45gO = RwJVeqc[qHcVfW];
                    RwJVeqc[qHcVfW] = RwJVeqc[qHcVfW + (214 - 213)];
                    RwJVeqc[qHcVfW + (297 - 296)] = epikVtB45gO;
                }
                if (PZ9hcR[qHcVfW] > PZ9hcR[qHcVfW + 1]) {
                    VBUnTZWXaN = PZ9hcR[qHcVfW];
                    PZ9hcR[qHcVfW] = PZ9hcR[qHcVfW + 1];
                    PZ9hcR[qHcVfW + 1] = VBUnTZWXaN;
                }
            }
        }
        while (T9C24DVS != (905 - 905)) {
            if (PFAcgSz == POigaNR5Z1I)
                T9C24DVS = (592 - 592);
            if (RwJVeqc[POigaNR5Z1I] > PZ9hcR[duyKQFT0G]) {
                bZMRpl0Ai += (953 - 753);
                POigaNR5Z1I = POigaNR5Z1I -1;
                duyKQFT0G = duyKQFT0G - 1;
            }
            else if (RwJVeqc[PFAcgSz] > PZ9hcR[bLMdpYHSCDr]) {
                PFAcgSz = PFAcgSz +1;
                bLMdpYHSCDr++;
                bZMRpl0Ai += (561 - 361);
            }
            else {
                if (RwJVeqc[PFAcgSz] < PZ9hcR[duyKQFT0G])
                    bZMRpl0Ai -= 200;
                duyKQFT0G = duyKQFT0G - 1;
                PFAcgSz = PFAcgSz +1;
            }
        }
        printf ("%d\n", bZMRpl0Ai);
    }
    return 0;
}

