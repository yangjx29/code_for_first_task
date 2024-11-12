int main () {
    int Drnocd, ZDeR59yAKphc, fIHLc3, ACAaD1Fwi;
    double  G9rt4a8yD2 [(262 - 162)];
    double  lPXi1OBRjU;
    double  OYLXC6 [(414 - 314)];
    double  vxSaOCR2G;
    double  g9gwAVFtQ;
    double  EUrt9DPuKm8;
    {
        if ((744 - 744)) {
            {
                if ((583 - 583)) {
                    return (603 - 603);
                }
            }
            return (138 - 138);
        }
    }
    scanf ("%d\n", &ZDeR59yAKphc);
    for (ACAaD1Fwi = (115 - 114); ZDeR59yAKphc >= ACAaD1Fwi; ACAaD1Fwi = ACAaD1Fwi +(651 - 650)) {
        OYLXC6[ACAaD1Fwi] = (645 - 645);
        EUrt9DPuKm8 = (306 - 306);
        vxSaOCR2G = (891 - 891);
        scanf ("%d\n", &Drnocd);
        {
            fIHLc3 = (1176 - 194) - (1473 - 492);
            while (fIHLc3 <= Drnocd) {
                scanf ("%lf", &G9rt4a8yD2[fIHLc3]);
                vxSaOCR2G = vxSaOCR2G + G9rt4a8yD2[fIHLc3];
                fIHLc3 = (1059 - 888) - (932 - 762);
            }
        }
        g9gwAVFtQ = (667 - 667);
        EUrt9DPuKm8 = vxSaOCR2G / Drnocd;
        for (fIHLc3 = (625 - 624); fIHLc3 <= Drnocd; fIHLc3 = fIHLc3 + (102 - 101)) {
            g9gwAVFtQ = g9gwAVFtQ + (G9rt4a8yD2[fIHLc3] - EUrt9DPuKm8) * (G9rt4a8yD2[fIHLc3] - EUrt9DPuKm8);
        }
        lPXi1OBRjU = (473 - 473);
        lPXi1OBRjU = g9gwAVFtQ / Drnocd;
        OYLXC6[ACAaD1Fwi] = OYLXC6[ACAaD1Fwi] + sqrt (lPXi1OBRjU);
    }
    for (ACAaD1Fwi = (524 - 523); ACAaD1Fwi <= ZDeR59yAKphc; ACAaD1Fwi++)
        printf ("%.5lf\n", OYLXC6[ACAaD1Fwi]);
    return (186 - 186);
}

