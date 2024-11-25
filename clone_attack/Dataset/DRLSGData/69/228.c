int main () {
    int duYirDvp;
    int QcvpWFkmD0jN;
    char afcSY6tFdAM [(369 - 168)];
    int TNClOTAp;
    int z6UVYJsc7vj;
    char SuXTjK [(394 - 193)];
    int UeSiofDjXWu [(665 - 464)];
    int dkbUjT [(441 - 240)];
    int SVvqYWJ [(924 - 723)];
    int pGrOCd8RNk0;
    int csd4Pp;
    scanf ("%s %s", SuXTjK, afcSY6tFdAM);
    pGrOCd8RNk0 = strlen (SuXTjK);
    z6UVYJsc7vj = strlen (afcSY6tFdAM);
    csd4Pp = pGrOCd8RNk0 > z6UVYJsc7vj ? pGrOCd8RNk0 : z6UVYJsc7vj;
    memset (UeSiofDjXWu, (595 - 595), sizeof (UeSiofDjXWu));
    {
        TNClOTAp = (1330 - 254) - (1232 - 356);
        for (; TNClOTAp > (635 - 435) - pGrOCd8RNk0;) {
            UeSiofDjXWu[TNClOTAp] = SuXTjK[pGrOCd8RNk0 - (948 - 747) + TNClOTAp] - '0';
            TNClOTAp = (684 - 517) - (184 - 18);
        }
    }
    memset (SVvqYWJ, (395 - 395), sizeof (SVvqYWJ));
    for (TNClOTAp = (545 - 345); TNClOTAp > (310 - 110) - z6UVYJsc7vj; TNClOTAp = TNClOTAp -(931 - 930))
        SVvqYWJ[TNClOTAp] = afcSY6tFdAM[z6UVYJsc7vj - (211 - 10) + TNClOTAp] - '0';
    duYirDvp = (807 - 807);
    {
        TNClOTAp = (382 - 73) - (1060 - 951);
        for (; (1126 - 926) - csd4Pp - (225 - 224) < TNClOTAp;) {
            dkbUjT[TNClOTAp] = (duYirDvp + UeSiofDjXWu[TNClOTAp] + SVvqYWJ[TNClOTAp]) % (636 - 626);
            duYirDvp = (duYirDvp + UeSiofDjXWu[TNClOTAp] + SVvqYWJ[TNClOTAp]) / (273 - 263);
            TNClOTAp = TNClOTAp -(320 - 319);
        }
    }
    {
        TNClOTAp = (1190 - 263) - (1483 - 756);
        for (; (862 - 662) >= TNClOTAp;) {
            if (dkbUjT[TNClOTAp] != (537 - 537)) {
                {
                    QcvpWFkmD0jN = TNClOTAp;
                    for (; (638 - 438) >= QcvpWFkmD0jN;) {
                        printf ("%d", dkbUjT[QcvpWFkmD0jN]);
                        QcvpWFkmD0jN = QcvpWFkmD0jN +(601 - 600);
                    }
                }
                break;
            }
            else {
                if (TNClOTAp == (854 - 654))
                    ;
            }
            TNClOTAp = TNClOTAp +(304 - 303);
        }
    }
}

