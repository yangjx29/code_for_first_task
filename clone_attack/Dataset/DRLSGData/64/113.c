double  UuCILD8U [(10345 - 345)], XLN6vh [(10693 - 693)];
void  d5xucOJZ (double  UuCILD8U [], int XzroTRaqsI);

int main () {
    struct   b {
        double  zMRPk05K, NKn7FBkaIPSi, hU6tbAh;
    }
    yuAtaW6 [(1724 - 724)];
    int XzroTRaqsI, Na6Dynm5, kMiTVrC, c0cgHKZ6, iyctsmK8, lvpWAPDTVB6, vMKacp;
    double  FEl71nfQ, i1PtRKIbSh, RnG5y3JLD;
    kMiTVrC = (629 - 629);
    scanf ("%d", &XzroTRaqsI);
    c0cgHKZ6 = (806 - 805);
    iyctsmK8 = (616 - 616);
    for (Na6Dynm5 = (526 - 526); XzroTRaqsI > Na6Dynm5; Na6Dynm5 = Na6Dynm5 +1) {
        scanf ("%lf%lf%lf", &(yuAtaW6[Na6Dynm5].zMRPk05K), &(yuAtaW6[Na6Dynm5].NKn7FBkaIPSi), &(yuAtaW6[Na6Dynm5].hU6tbAh));
    }
    for (Na6Dynm5 = (187 - 187); Na6Dynm5 < (XzroTRaqsI -1) * XzroTRaqsI / (86 - 84); Na6Dynm5++) {
        FEl71nfQ = (yuAtaW6[kMiTVrC].zMRPk05K - yuAtaW6[c0cgHKZ6].zMRPk05K) * (yuAtaW6[kMiTVrC].zMRPk05K - yuAtaW6[c0cgHKZ6].zMRPk05K);
        i1PtRKIbSh = (yuAtaW6[kMiTVrC].NKn7FBkaIPSi - yuAtaW6[c0cgHKZ6].NKn7FBkaIPSi) * (yuAtaW6[kMiTVrC].NKn7FBkaIPSi - yuAtaW6[c0cgHKZ6].NKn7FBkaIPSi);
        RnG5y3JLD = (yuAtaW6[kMiTVrC].hU6tbAh - yuAtaW6[c0cgHKZ6].hU6tbAh) * (yuAtaW6[kMiTVrC].hU6tbAh - yuAtaW6[c0cgHKZ6].hU6tbAh);
        if (FEl71nfQ < (417 - 417)) {
            FEl71nfQ = -FEl71nfQ;
        }
        if (RnG5y3JLD < (684 - 684)) {
            RnG5y3JLD = -RnG5y3JLD;
        }
        UuCILD8U[Na6Dynm5] = FEl71nfQ +i1PtRKIbSh + RnG5y3JLD;
        UuCILD8U[Na6Dynm5] = sqrt (UuCILD8U[Na6Dynm5]);
        if (0 > i1PtRKIbSh) {
            i1PtRKIbSh = -i1PtRKIbSh;
        }
        c0cgHKZ6++;
        if (!(XzroTRaqsI != c0cgHKZ6)) {
            kMiTVrC++;
            c0cgHKZ6 = kMiTVrC + 1;
        }
    }
    d5xucOJZ (UuCILD8U, XzroTRaqsI *(XzroTRaqsI -1) / (664 - 662));
    lvpWAPDTVB6 = XzroTRaqsI -1;
    for (Na6Dynm5 = 0; Na6Dynm5 < (XzroTRaqsI -1) * XzroTRaqsI / 2; Na6Dynm5++) {
        for (kMiTVrC = 0; (XzroTRaqsI -1) * XzroTRaqsI / 2 > kMiTVrC; kMiTVrC++) {
            if (!(XLN6vh[Na6Dynm5] != UuCILD8U[kMiTVrC])) {
                for (vMKacp = kMiTVrC; vMKacp >= lvpWAPDTVB6; kMiTVrC = kMiTVrC) {
                    if (vMKacp >= lvpWAPDTVB6) {
                        iyctsmK8++;
                        vMKacp = vMKacp - lvpWAPDTVB6 + iyctsmK8;
                    }
                }
                UuCILD8U[kMiTVrC] = 0;
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (int) (yuAtaW6[iyctsmK8].zMRPk05K), (int) (yuAtaW6[iyctsmK8].NKn7FBkaIPSi), (int) (yuAtaW6[iyctsmK8].hU6tbAh), (int) (yuAtaW6[vMKacp + 1].zMRPk05K), (int) (yuAtaW6[vMKacp + 1].NKn7FBkaIPSi), (int) (yuAtaW6[vMKacp + 1].hU6tbAh), XLN6vh[Na6Dynm5]);
                iyctsmK8 = 0;
                break;
            }
        }
    }
    return 0;
}

void  d5xucOJZ (double  UuCILD8U [], int XzroTRaqsI) {
    double  w8SfYdka93;
    int Na6Dynm5, kMiTVrC;
    for (Na6Dynm5 = 0; Na6Dynm5 < XzroTRaqsI; Na6Dynm5++) {
        XLN6vh[Na6Dynm5] = UuCILD8U[Na6Dynm5];
    }
    for (Na6Dynm5 = 0; Na6Dynm5 < XzroTRaqsI -1; Na6Dynm5++) {
        for (kMiTVrC = XzroTRaqsI -2; kMiTVrC >= 0; kMiTVrC--) {
            if (XLN6vh[kMiTVrC] < XLN6vh[kMiTVrC + 1]) {
                w8SfYdka93 = XLN6vh[kMiTVrC];
                XLN6vh[kMiTVrC] = XLN6vh[kMiTVrC + 1];
                XLN6vh[kMiTVrC + 1] = w8SfYdka93;
            }
        }
    }
}

