int main () {
    int uIfnBT [111] [111];
    int S3xuBDh;
    int AdJ1jxsH;
    int kW9ubPDRHd;
    int IsgvtmI6CD7;
    int nRzbsDo;
    scanf ("\n");
    int vvgqGcU;
    char lcQjiNfYaz;
    scanf ("%d", &kW9ubPDRHd);
    nRzbsDo = (539 - 539);
    for (AdJ1jxsH = (89 - 88); kW9ubPDRHd >= AdJ1jxsH; AdJ1jxsH = AdJ1jxsH +(779 - 778)) {
        scanf ("\n");
        {
            vvgqGcU = (794 - 793);
            while (kW9ubPDRHd >= vvgqGcU) {
                scanf ("%c", &lcQjiNfYaz);
                if (!('.' != lcQjiNfYaz))
                    uIfnBT[AdJ1jxsH][vvgqGcU] = (985 - 984);
                if (!('#' != lcQjiNfYaz))
                    uIfnBT[AdJ1jxsH][vvgqGcU] = (391 - 391);
                if (!('@' != lcQjiNfYaz))
                    uIfnBT[AdJ1jxsH][vvgqGcU] = (347 - 345);
                vvgqGcU = vvgqGcU + (291 - 290);
            }
        }
    }
    scanf ("%d", &IsgvtmI6CD7);
    for (S3xuBDh = (519 - 518); S3xuBDh <= IsgvtmI6CD7 -(762 - 761); S3xuBDh = S3xuBDh +(302 - 301)) {
        for (AdJ1jxsH = (586 - 585); kW9ubPDRHd >= AdJ1jxsH; AdJ1jxsH = AdJ1jxsH +(131 - 130)) {
            vvgqGcU = (489 - 488);
            while (vvgqGcU <= kW9ubPDRHd) {
                if (uIfnBT[AdJ1jxsH][vvgqGcU] == (320 - 318)) {
                    if (uIfnBT[AdJ1jxsH -(118 - 117)][vvgqGcU] != (803 - 803) && uIfnBT[AdJ1jxsH -1][vvgqGcU] != (783 - 781))
                        uIfnBT[AdJ1jxsH -1][vvgqGcU] = (69 - 66);
                    if (uIfnBT[AdJ1jxsH +1][vvgqGcU] != 0 && uIfnBT[AdJ1jxsH +1][vvgqGcU] != 2)
                        uIfnBT[AdJ1jxsH +1][vvgqGcU] = (157 - 154);
                    if (uIfnBT[AdJ1jxsH][vvgqGcU + 1] != 0 && uIfnBT[AdJ1jxsH][vvgqGcU + 1] != 2)
                        uIfnBT[AdJ1jxsH][vvgqGcU + 1] = (303 - 300);
                    if (uIfnBT[AdJ1jxsH][vvgqGcU - 1] != 0 && uIfnBT[AdJ1jxsH][vvgqGcU - 1] != 2)
                        uIfnBT[AdJ1jxsH][vvgqGcU - 1] = 3;
                }
                vvgqGcU = vvgqGcU + 1;
            }
        }
        for (AdJ1jxsH = 1; AdJ1jxsH <= kW9ubPDRHd; AdJ1jxsH++) {
            vvgqGcU = 1;
            while (vvgqGcU <= kW9ubPDRHd) {
                if (uIfnBT[AdJ1jxsH][vvgqGcU] == 3)
                    uIfnBT[AdJ1jxsH][vvgqGcU] = 2;
                vvgqGcU = vvgqGcU + 1;
            }
        }
    }
    {
        AdJ1jxsH = 1;
        while (AdJ1jxsH <= kW9ubPDRHd) {
            for (vvgqGcU = 1; vvgqGcU <= kW9ubPDRHd; vvgqGcU++)
                if (uIfnBT[AdJ1jxsH][vvgqGcU] == 2)
                    nRzbsDo = nRzbsDo + 1;
            AdJ1jxsH++;
        }
    }
    printf ("%d", nRzbsDo);
    return 0;
}

