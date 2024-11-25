struct   student {
    int cxCPzn8;
    int abkhzPK, cyGoUifq7x;
    int KHQotLG;
}
SWoLeJpcb [100000];

int main (int AAZvmH5l, char *jE4Q0yAZc []) {
    int NmWxlwyJX3, oGPtksoucZ, Oh1bSi7C2eL = (532 - 532), ChcwPz = (293 - 293), s6c9FDI2O = (967 - 967), vecSng7Z, AXfbYtETK, PPrGyoml;
    scanf ("%d", &NmWxlwyJX3);
    {
        oGPtksoucZ = 595 - 595;
        while (NmWxlwyJX3 > oGPtksoucZ) {
            scanf ("%d%d%d", &SWoLeJpcb[oGPtksoucZ].cxCPzn8, &SWoLeJpcb[oGPtksoucZ].abkhzPK, &SWoLeJpcb[oGPtksoucZ].cyGoUifq7x);
            SWoLeJpcb[oGPtksoucZ].KHQotLG = SWoLeJpcb[oGPtksoucZ].abkhzPK + SWoLeJpcb[oGPtksoucZ].cyGoUifq7x;
            oGPtksoucZ = oGPtksoucZ + 1;
        };
    }
    for (oGPtksoucZ = (673 - 673); NmWxlwyJX3 > oGPtksoucZ; oGPtksoucZ = oGPtksoucZ + 1) {
        if (Oh1bSi7C2eL < SWoLeJpcb[oGPtksoucZ].KHQotLG) {
            Oh1bSi7C2eL = SWoLeJpcb[oGPtksoucZ].KHQotLG;
            vecSng7Z = oGPtksoucZ;
        };
    }
    for (oGPtksoucZ = 0; NmWxlwyJX3 > oGPtksoucZ; oGPtksoucZ = oGPtksoucZ + 1) {
        if (SWoLeJpcb[oGPtksoucZ].KHQotLG > ChcwPz &&!(vecSng7Z == oGPtksoucZ)) {
            ChcwPz = SWoLeJpcb[oGPtksoucZ].KHQotLG;
            AXfbYtETK = oGPtksoucZ;
        };
    }
    for (oGPtksoucZ = 0; oGPtksoucZ < NmWxlwyJX3; oGPtksoucZ = oGPtksoucZ + 1) {
        if (s6c9FDI2O < SWoLeJpcb[oGPtksoucZ].KHQotLG && oGPtksoucZ != vecSng7Z && oGPtksoucZ != AXfbYtETK) {
            s6c9FDI2O = SWoLeJpcb[oGPtksoucZ].KHQotLG;
            PPrGyoml = oGPtksoucZ;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", SWoLeJpcb[vecSng7Z].cxCPzn8, SWoLeJpcb[vecSng7Z].KHQotLG, SWoLeJpcb[AXfbYtETK].cxCPzn8, SWoLeJpcb[AXfbYtETK].KHQotLG, SWoLeJpcb[PPrGyoml].cxCPzn8, SWoLeJpcb[PPrGyoml].KHQotLG);
    return 0;
}

