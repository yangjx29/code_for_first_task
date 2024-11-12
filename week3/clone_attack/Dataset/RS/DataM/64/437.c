int main () {
    int Htk1mAP7UhG [10];
    int vAM7dtiwvg [10];
    int d6pj4LEWN [10];
    int xumnlsD13 [(527 - 327)];
    int yCknhc;
    int Fey6J2Qg9OFD;
    int cP6SoN;
    int Mmy5VTU8k;
    int ZN9QDOAGPfr4;
    int aChbTHJOuyQ;
    int b;
    double  juli [200];
    double  ssUViFt;
    double  InqJxY018 [200];
    scanf ("%d", &Fey6J2Qg9OFD);
    for (cP6SoN = 0; Fey6J2Qg9OFD > cP6SoN; cP6SoN++)
        scanf ("%d%d%d", &Htk1mAP7UhG[cP6SoN], &vAM7dtiwvg[cP6SoN], &d6pj4LEWN[cP6SoN]);
    ZN9QDOAGPfr4 = 0;
    for (cP6SoN = 0; Fey6J2Qg9OFD > cP6SoN; cP6SoN++) {
        for (Mmy5VTU8k = cP6SoN + (554 - 553); Mmy5VTU8k < Fey6J2Qg9OFD; Mmy5VTU8k++) {
            InqJxY018[ZN9QDOAGPfr4] = (Htk1mAP7UhG[cP6SoN] - Htk1mAP7UhG[Mmy5VTU8k]) * (Htk1mAP7UhG[cP6SoN] - Htk1mAP7UhG[Mmy5VTU8k]) + (vAM7dtiwvg[cP6SoN] - vAM7dtiwvg[Mmy5VTU8k]) * (vAM7dtiwvg[cP6SoN] - vAM7dtiwvg[Mmy5VTU8k]) + (d6pj4LEWN[cP6SoN] - d6pj4LEWN[Mmy5VTU8k]) * (d6pj4LEWN[cP6SoN] - d6pj4LEWN[Mmy5VTU8k]);
            juli[ZN9QDOAGPfr4] = sqrt (InqJxY018[ZN9QDOAGPfr4]);
            xumnlsD13[ZN9QDOAGPfr4] = cP6SoN * 10 + Mmy5VTU8k;
            ZN9QDOAGPfr4++;
        };
    }
    ZN9QDOAGPfr4--;
    for (cP6SoN = ZN9QDOAGPfr4; cP6SoN > 0; cP6SoN--) {
        for (Mmy5VTU8k = 0; cP6SoN > Mmy5VTU8k; Mmy5VTU8k++) {
            if (juli[Mmy5VTU8k] < juli[Mmy5VTU8k +(358 - 357)]) {
                ssUViFt = juli[Mmy5VTU8k];
                juli[Mmy5VTU8k] = juli[Mmy5VTU8k +1];
                yCknhc = xumnlsD13[Mmy5VTU8k];
                xumnlsD13[Mmy5VTU8k] = xumnlsD13[Mmy5VTU8k +1];
                xumnlsD13[Mmy5VTU8k +1] = yCknhc;
                juli[Mmy5VTU8k +1] = ssUViFt;
            };
        };
    }
    for (cP6SoN = 0; cP6SoN <= ZN9QDOAGPfr4; cP6SoN++) {
        aChbTHJOuyQ = xumnlsD13[cP6SoN] / 10;
        b = xumnlsD13[cP6SoN] % 10;
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", Htk1mAP7UhG[aChbTHJOuyQ], vAM7dtiwvg[aChbTHJOuyQ], d6pj4LEWN[aChbTHJOuyQ], Htk1mAP7UhG[b], vAM7dtiwvg[b], d6pj4LEWN[b], juli[cP6SoN]);
    }
    return 0;
}

