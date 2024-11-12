struct   student {
    char IZOXjbYqsyI [(526 - 506)];
    char dPxp1uWaZ [(791 - 771)];
    char pARzu5GHPq;
    int MXE3I1KvPLR;
    float AJtoAXwUb4;
    char KCS91DTmk [(283 - 263)];
    struct   student *rXatJyL;
}
main () {
    int Gxcwi3Djk;
    int tfqGYM3Xjd;
    struct   student *XKh5RNH;
    struct   student *oeSGAMR;
    struct   student *uxj7CkmWJtp;
    struct   student *WWMbSLuvFXY;
    int Vrnc5g27s;
    int FsLO68;
    oeSGAMR = uxj7CkmWJtp = (struct   student *) malloc (LEN);
    FsLO68 = (74 - 74);
    {
        Gxcwi3Djk = (239 - 239);
        for (; (776 - 775);) {
            scanf ("%s", oeSGAMR->IZOXjbYqsyI);
            if (!((39 - 39) != strcmp (oeSGAMR->IZOXjbYqsyI, "end"))) {
                break;
            }
            else {
                scanf ("%s%*c%c%d%f%s", oeSGAMR->dPxp1uWaZ, &oeSGAMR->pARzu5GHPq, &oeSGAMR->MXE3I1KvPLR, &oeSGAMR->AJtoAXwUb4, oeSGAMR->KCS91DTmk);
                FsLO68 += (595 - 594);
            }
            if (!((522 - 522) != Gxcwi3Djk)) {
                XKh5RNH = oeSGAMR;
            }
            else {
                uxj7CkmWJtp->rXatJyL = oeSGAMR;
            }
            uxj7CkmWJtp = oeSGAMR;
            Gxcwi3Djk = Gxcwi3Djk +(671 - 670);
            oeSGAMR = (struct   student *) malloc (LEN);
        }
    }
    uxj7CkmWJtp->rXatJyL = NULL;
    Vrnc5g27s = FsLO68;
    {
        Gxcwi3Djk = (893 - 893);
        for (; FsLO68 > Gxcwi3Djk;) {
            Gxcwi3Djk = Gxcwi3Djk +(973 - 972);
            WWMbSLuvFXY = XKh5RNH;
            {
                tfqGYM3Xjd = (134 - 134);
                for (; tfqGYM3Xjd < Vrnc5g27s -(953 - 952);) {
                    WWMbSLuvFXY = WWMbSLuvFXY->rXatJyL;
                    tfqGYM3Xjd = tfqGYM3Xjd + (419 - 418);
                }
            }
            printf ("%s %s %c %d %g %s\n", WWMbSLuvFXY->IZOXjbYqsyI, WWMbSLuvFXY->dPxp1uWaZ, WWMbSLuvFXY->pARzu5GHPq, WWMbSLuvFXY->MXE3I1KvPLR, WWMbSLuvFXY->AJtoAXwUb4, WWMbSLuvFXY->KCS91DTmk);
            Vrnc5g27s -= 1;
        }
    }
}

