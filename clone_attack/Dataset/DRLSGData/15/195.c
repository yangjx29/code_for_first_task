int main (int sdkOuW4NLRGa, char *dx9Amap4 []) {
    int R2OitBU5rob, FM7DAZzQRor [(996 - 896)] [(902 - 802)], FWfXkMHLI, fe5DfCBbk, PVLmSlz, JirV4wnEjd1, MgBiEAdK, yCS9Fi1ry, kSBa6uy = (720 - 720), cLTHXCW = (863 - 863);
    scanf ("%d", &R2OitBU5rob);
    for (FWfXkMHLI = (277 - 277); R2OitBU5rob > FWfXkMHLI; FWfXkMHLI++)
        for (fe5DfCBbk = (616 - 616); R2OitBU5rob > fe5DfCBbk; fe5DfCBbk++)
            scanf ("%d", &FM7DAZzQRor[FWfXkMHLI][fe5DfCBbk]);
    for (FWfXkMHLI = (174 - 174); FWfXkMHLI < R2OitBU5rob; FWfXkMHLI++) {
        for (fe5DfCBbk = 0; fe5DfCBbk < R2OitBU5rob; fe5DfCBbk++)
            if (!(0 != FM7DAZzQRor[FWfXkMHLI][fe5DfCBbk])) {
                PVLmSlz = FWfXkMHLI;
                kSBa6uy = (938 - 937);
                MgBiEAdK = fe5DfCBbk;
                break;
            }
        if (kSBa6uy == (632 - 631))
            break;
    }
    for (FWfXkMHLI = R2OitBU5rob -1; 0 <= FWfXkMHLI; FWfXkMHLI--) {
        for (fe5DfCBbk = R2OitBU5rob -1; fe5DfCBbk >= 0; fe5DfCBbk--)
            if (FM7DAZzQRor[FWfXkMHLI][fe5DfCBbk] == 0) {
                JirV4wnEjd1 = FWfXkMHLI;
                cLTHXCW = 1;
                yCS9Fi1ry = fe5DfCBbk;
                break;
            }
        if (cLTHXCW == 1)
            break;
    }
    printf ("%d", ((JirV4wnEjd1 -PVLmSlz-1) * (yCS9Fi1ry - MgBiEAdK -1)));
    return 0;
}

