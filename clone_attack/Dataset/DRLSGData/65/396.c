int main () {
    int DnLWCibkh2Ud, ebNFPIi = 0, M9Zr5G1H2fSK = 0;
    int ErNBLuv [201], ROpofFk [201];
    int uNbxlP = 0;
    scanf ("%d", &DnLWCibkh2Ud);
    {
        uNbxlP;
        while (DnLWCibkh2Ud >= uNbxlP) {
            scanf ("%d%d", &ErNBLuv[uNbxlP], &ROpofFk[uNbxlP]);
            uNbxlP = uNbxlP + 1;
        };
    }
    uNbxlP = 0;
    {
        uNbxlP;
        while (DnLWCibkh2Ud >= uNbxlP) {
            if (ErNBLuv[uNbxlP] == 0 && !(1 != ROpofFk[uNbxlP]))
                ebNFPIi += 1;
            if (!(1 != ErNBLuv[uNbxlP]) && !(2 != ROpofFk[uNbxlP]))
                ebNFPIi += 1;
            if (!(2 != ErNBLuv[uNbxlP]) && !(0 != ROpofFk[uNbxlP]))
                ebNFPIi += 1;
            if (ROpofFk[uNbxlP] == 0 && !(1 != ErNBLuv[uNbxlP]))
                M9Zr5G1H2fSK += 1;
            if (ROpofFk[uNbxlP] == 1 && !(2 != ErNBLuv[uNbxlP]))
                M9Zr5G1H2fSK += 1;
            if (ROpofFk[uNbxlP] == 2 && ErNBLuv[uNbxlP] == 0)
                M9Zr5G1H2fSK += 1;
            uNbxlP = uNbxlP + 1;
        };
    }
    if (ebNFPIi > M9Zr5G1H2fSK)
        ;
    if (ebNFPIi < M9Zr5G1H2fSK)
        ;
    if (ebNFPIi == M9Zr5G1H2fSK)
        ;
    return 0;
}

