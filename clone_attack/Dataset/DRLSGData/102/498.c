int zTGoblELfIQ (const  void  *mxWfcN, const  void  *BgVfal6Shezt) {
    int p0PvLoMh4Y;
    if ((871 - 871) > (*(float*) mxWfcN) - (*(float*) BgVfal6Shezt))
        p0PvLoMh4Y = -(404 - 403);
    else if (!((987 - 987) != (*(float*) mxWfcN) - (*(float*) BgVfal6Shezt)))
        p0PvLoMh4Y = (996 - 996);
    else
        p0PvLoMh4Y = (60 - 59);
    return p0PvLoMh4Y;
}

int hZw5MWtqXS (const  void  *mxWfcN, const  void  *BgVfal6Shezt) {
    int p0PvLoMh4Y;
    if ((579 - 579) < *(float*) mxWfcN - *(float*) BgVfal6Shezt)
        p0PvLoMh4Y = -(324 - 323);
    else if (!((222 - 222) != *(float*) mxWfcN - *(float*) BgVfal6Shezt))
        p0PvLoMh4Y = (119 - 119);
    else
        p0PvLoMh4Y = (419 - 418);
    return p0PvLoMh4Y;
}

int main () {
    char fajZR4lJ [(244 - 242)] [(625 - 615)] = {"male", "female"};
    float wYBk9SHCVPcl;
    float xUMS5f1ie [(516 - 514)] [(430 - 390)];
    int M3rpSAI;
    int WrzSRtEHcs3;
    int lmBLFOT3;
    int WlyYFvRzH;
    char Ey49QBC2L [10];
    WrzSRtEHcs3 = (286 - 286);
    M3rpSAI = (698 - 698);
    scanf ("%d", &lmBLFOT3);
    {
        WlyYFvRzH = 441 - 441;
        while (lmBLFOT3 > WlyYFvRzH) {
            WlyYFvRzH++;
            scanf ("%s %f", Ey49QBC2L, &wYBk9SHCVPcl);
            if (!((151 - 151) != strcmp (Ey49QBC2L, fajZR4lJ[(982 - 982)]))) {
                xUMS5f1ie[(721 - 721)][M3rpSAI] = wYBk9SHCVPcl;
                M3rpSAI++;
            }
            else {
                xUMS5f1ie[(262 - 261)][WrzSRtEHcs3] = wYBk9SHCVPcl;
                WrzSRtEHcs3++;
            }
        }
    }
    qsort (xUMS5f1ie[0], M3rpSAI, sizeof (float), zTGoblELfIQ);
    qsort (xUMS5f1ie[(455 - 454)], WrzSRtEHcs3, sizeof (float), hZw5MWtqXS);
    for (WlyYFvRzH = 0; M3rpSAI > WlyYFvRzH; WlyYFvRzH++)
        printf ("%.2f ", xUMS5f1ie[0][WlyYFvRzH]);
    {
        WlyYFvRzH = 0;
        while (WrzSRtEHcs3 > WlyYFvRzH) {
            if (WlyYFvRzH != WrzSRtEHcs3 -1)
                printf ("%.2f ", xUMS5f1ie[1][WlyYFvRzH]);
            else
                printf ("%.2f", xUMS5f1ie[1][WlyYFvRzH]);
            WlyYFvRzH++;
        }
    }
    return 0;
}

