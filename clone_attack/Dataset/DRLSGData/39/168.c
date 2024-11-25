struct   Student {
    char JpLSuib6zv3m [21];
    int BHhU13Ppkbd;
    int UFn76Wap;
    char WG0B8FC2Nf;
    char nMHo9536;
    int NLNjPY;
    int gCTpnvO7b;
};
int main () {
    int DyKnCt0p8;
    int joGruL = (676 - 676);
    int C5PL2iASY;
    struct   Student pbPymY2U [100];
    int WcN0xvenLb = (897 - 897);
    scanf ("%d", &DyKnCt0p8);
    for (C5PL2iASY = (713 - 713); C5PL2iASY < DyKnCt0p8; C5PL2iASY++) {
        scanf ("%s%d%d %c %c%d", pbPymY2U[C5PL2iASY].JpLSuib6zv3m, &pbPymY2U[C5PL2iASY].BHhU13Ppkbd, &pbPymY2U[C5PL2iASY].UFn76Wap, &pbPymY2U[C5PL2iASY].WG0B8FC2Nf, &pbPymY2U[C5PL2iASY].nMHo9536, &pbPymY2U[C5PL2iASY].NLNjPY);
        pbPymY2U[C5PL2iASY].gCTpnvO7b = (204 - 204);
        if (pbPymY2U[C5PL2iASY].BHhU13Ppkbd > (366 - 286) && (99 - 99) < pbPymY2U[C5PL2iASY].NLNjPY) {
            pbPymY2U[C5PL2iASY].gCTpnvO7b = pbPymY2U[C5PL2iASY].gCTpnvO7b + 8000;
        }
        if ((601 - 516) < pbPymY2U[C5PL2iASY].BHhU13Ppkbd && 80 < pbPymY2U[C5PL2iASY].UFn76Wap) {
            pbPymY2U[C5PL2iASY].gCTpnvO7b = pbPymY2U[C5PL2iASY].gCTpnvO7b + 4000;
        }
        if (pbPymY2U[C5PL2iASY].BHhU13Ppkbd > (735 - 645)) {
            pbPymY2U[C5PL2iASY].gCTpnvO7b = pbPymY2U[C5PL2iASY].gCTpnvO7b + 2000;
        }
        if (pbPymY2U[C5PL2iASY].BHhU13Ppkbd > (978 - 893) && pbPymY2U[C5PL2iASY].nMHo9536 == 'Y') {
            pbPymY2U[C5PL2iASY].gCTpnvO7b = pbPymY2U[C5PL2iASY].gCTpnvO7b + (1272 - 272);
        }
        if (pbPymY2U[C5PL2iASY].UFn76Wap > 80 && pbPymY2U[C5PL2iASY].WG0B8FC2Nf == 'Y') {
            pbPymY2U[C5PL2iASY].gCTpnvO7b = pbPymY2U[C5PL2iASY].gCTpnvO7b + 850;
        }
    }
    {
        C5PL2iASY = 0;
        for (; C5PL2iASY < DyKnCt0p8;) {
            if (pbPymY2U[C5PL2iASY].gCTpnvO7b > WcN0xvenLb) {
                WcN0xvenLb = pbPymY2U[C5PL2iASY].gCTpnvO7b;
            }
            joGruL = joGruL + pbPymY2U[C5PL2iASY].gCTpnvO7b;
            C5PL2iASY++;
        }
    }
    {
        C5PL2iASY = 0;
        for (; C5PL2iASY < DyKnCt0p8;) {
            if (pbPymY2U[C5PL2iASY].gCTpnvO7b == WcN0xvenLb) {
                printf ("%s\n%d\n", pbPymY2U[C5PL2iASY].JpLSuib6zv3m, WcN0xvenLb);
                break;
            }
            C5PL2iASY++;
        }
    }
    printf ("%d", joGruL);
    return 0;
}

