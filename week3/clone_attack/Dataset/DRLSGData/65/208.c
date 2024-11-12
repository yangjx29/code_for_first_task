int main () {
    int aSMivT [200] [2];
    int qug5Gm6;
    int Z9CAhtRDQvP;
    int L5BWy9;
    int f1sNtDFR;
    scanf ("%d", &qug5Gm6);
    Z9CAhtRDQvP = 0;
    L5BWy9 = 0;
    f1sNtDFR = 0;
    for (int nRX9vMSAC1i = 0;
    nRX9vMSAC1i < qug5Gm6; nRX9vMSAC1i = nRX9vMSAC1i + 1) {
        for (int qGhxFw = 0;
        qGhxFw < 2; qGhxFw = qGhxFw + 1) {
            scanf ("%d", &aSMivT[nRX9vMSAC1i][qGhxFw]);
        }
    }
    for (int QWkOX3td = 0;
    QWkOX3td < qug5Gm6; QWkOX3td = QWkOX3td +1) {
        if ((aSMivT[QWkOX3td][0] == 0 && aSMivT[QWkOX3td][1] == 1) || (aSMivT[QWkOX3td][0] == 1 && aSMivT[QWkOX3td][1] == 2) || (aSMivT[QWkOX3td][0] == 2 && aSMivT[QWkOX3td][1] == 0))
            L5BWy9 = L5BWy9 +1;
        if ((aSMivT[QWkOX3td][0] == 1 && aSMivT[QWkOX3td][1] == 0) || (aSMivT[QWkOX3td][0] == 2 && aSMivT[QWkOX3td][1] == 1) || (aSMivT[QWkOX3td][0] == 0 && aSMivT[QWkOX3td][1] == 2))
            f1sNtDFR = f1sNtDFR + 1;
    }
    if (L5BWy9 == f1sNtDFR)
        ;
    if (L5BWy9 > f1sNtDFR)
        ;
    if (L5BWy9 < f1sNtDFR)
        ;
    return 0;
}

