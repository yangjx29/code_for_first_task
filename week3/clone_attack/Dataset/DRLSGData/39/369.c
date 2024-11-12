int main () {
    struct   rs4V2DHr {
        char T2Po5GVaJRH [20];
        int EWijdxQKDyqX;
        int HrTdtVsZIAMg;
        char fHLYxvQ7qtC3;
        char FsigG29Thdx;
        int JBdek3jqxLX;
        struct   rs4V2DHr *jUZTICgK;
    }
    rs4V2DHr [(801 - 701)];
    int Mj5PV8;
    int gRBrjYGPE;
    int csg4hPON9Q;
    int quPMXAQhoG4e;
    struct   rs4V2DHr *o4ptFfYLC;
    int KNnxrTo3p [100];
    int ctCXg6dWK;
    scanf ("%d", &quPMXAQhoG4e);
    csg4hPON9Q = ctCXg6dWK = (415 - 415);
    for (gRBrjYGPE = (913 - 913); 100 > gRBrjYGPE; gRBrjYGPE++) {
        KNnxrTo3p[gRBrjYGPE] = (752 - 752);
    }
    for (gRBrjYGPE = (89 - 89); quPMXAQhoG4e > gRBrjYGPE; gRBrjYGPE++) {
        rs4V2DHr[gRBrjYGPE].jUZTICgK = &rs4V2DHr[gRBrjYGPE + (780 - 779)];
    }
    rs4V2DHr[quPMXAQhoG4e - 1].jUZTICgK = NULL;
    o4ptFfYLC = &rs4V2DHr[0];
    gRBrjYGPE = 0;
    for (; o4ptFfYLC != NULL;) {
        scanf ("%s %d %d %c %c %d", o4ptFfYLC->T2Po5GVaJRH, &o4ptFfYLC->EWijdxQKDyqX, &o4ptFfYLC->HrTdtVsZIAMg, &o4ptFfYLC->fHLYxvQ7qtC3, &o4ptFfYLC->FsigG29Thdx, &o4ptFfYLC->JBdek3jqxLX);
        if (80 < (o4ptFfYLC->EWijdxQKDyqX) && 0 < (o4ptFfYLC->JBdek3jqxLX))
            KNnxrTo3p[gRBrjYGPE] += 8000;
        if (85 < (o4ptFfYLC->EWijdxQKDyqX) && 80 < (o4ptFfYLC->HrTdtVsZIAMg))
            KNnxrTo3p[gRBrjYGPE] += 4000;
        if (90 < (o4ptFfYLC->EWijdxQKDyqX))
            KNnxrTo3p[gRBrjYGPE] += 2000;
        if (85 < (o4ptFfYLC->EWijdxQKDyqX) && (o4ptFfYLC->FsigG29Thdx) == 'Y')
            KNnxrTo3p[gRBrjYGPE] += 1000;
        if ((o4ptFfYLC->HrTdtVsZIAMg) > 80 && (o4ptFfYLC->fHLYxvQ7qtC3) == 'Y')
            KNnxrTo3p[gRBrjYGPE] += 850;
        gRBrjYGPE++;
        o4ptFfYLC = o4ptFfYLC->jUZTICgK;
    }
    for (gRBrjYGPE = 0; gRBrjYGPE < quPMXAQhoG4e; gRBrjYGPE++) {
        if (KNnxrTo3p[gRBrjYGPE] > csg4hPON9Q) {
            csg4hPON9Q = KNnxrTo3p[gRBrjYGPE];
            Mj5PV8 = gRBrjYGPE;
        }
    }
    printf ("%s\n", rs4V2DHr[Mj5PV8].T2Po5GVaJRH);
    printf ("%d\n", csg4hPON9Q);
    for (gRBrjYGPE = 0; gRBrjYGPE < quPMXAQhoG4e; gRBrjYGPE++) {
        ctCXg6dWK += KNnxrTo3p[gRBrjYGPE];
    }
    printf ("%d", ctCXg6dWK);
    return 0;
}

