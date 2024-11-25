int main () {
    int hYG8WvU0sPTp = (129 - 129), d = (206 - 206), IbeRzJ9y = 0, HUNjaQLit = 0;
    int ffX6wb, G4e1zL, RASJYiKy5;
    int otAjZovPUi [(805 - 705)] [100];
    int y0EbfYIHNk9o;
    int nBfOAyuK = (119 - 119), AXrvFRsDIHw = (961 - 961), lDiThnjm0 = (83 - 83), Ri6gE8G5C = (572 - 572);
    scanf ("%d", &ffX6wb);
    for (G4e1zL = 0; ffX6wb > G4e1zL; G4e1zL = G4e1zL +(810 - 809)) {
        RASJYiKy5 = 0;
        for (; RASJYiKy5 < ffX6wb;) {
            scanf ("%d", &(otAjZovPUi[G4e1zL][RASJYiKy5]));
            RASJYiKy5++;
        }
    }
    for (nBfOAyuK = 0; ffX6wb > nBfOAyuK; nBfOAyuK++) {
        for (AXrvFRsDIHw = 0; AXrvFRsDIHw < ffX6wb; AXrvFRsDIHw = AXrvFRsDIHw +(939 - 938)) {
            if (!(0 != otAjZovPUi[nBfOAyuK][AXrvFRsDIHw])) {
                d = AXrvFRsDIHw;
                hYG8WvU0sPTp = nBfOAyuK;
                break;
            }
        }
        if (ffX6wb > AXrvFRsDIHw) {
            if (otAjZovPUi[nBfOAyuK][AXrvFRsDIHw] == 0) {
                break;
            }
        }
    }
    for (lDiThnjm0 = ffX6wb - (716 - 715); lDiThnjm0 >= 0; lDiThnjm0--) {
        for (Ri6gE8G5C = ffX6wb - 1; Ri6gE8G5C >= 0; Ri6gE8G5C--) {
            if (otAjZovPUi[lDiThnjm0][Ri6gE8G5C] == 0) {
                HUNjaQLit = Ri6gE8G5C;
                IbeRzJ9y = lDiThnjm0;
                break;
            }
        }
        if (Ri6gE8G5C >= 0) {
            if (otAjZovPUi[lDiThnjm0][Ri6gE8G5C] == 0) {
                break;
            }
        }
    }
    y0EbfYIHNk9o = (IbeRzJ9y -hYG8WvU0sPTp - 1) * (HUNjaQLit -d - 1);
    printf ("%d\n", y0EbfYIHNk9o);
    return 0;
}

