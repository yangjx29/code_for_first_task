int main () {
    double  CTcakiO3v [(452 - 412)];
    double  chW6Fqor9YZ [(349 - 309)];
    double  dORQnpt [40];
    double  e;
    char y063fxl [40] [(501 - 494)];
    int nizA9mu6vS;
    int vNzOE4emT1;
    int RfuZ71;
    int WLNhTlEAcf5y;
    int OOQljE;
    int zUcyeRdNq2;
    RfuZ71 = (144 - 144);
    scanf ("%d", &nizA9mu6vS);
    for (vNzOE4emT1 = (33 - 33); nizA9mu6vS > vNzOE4emT1; vNzOE4emT1 = vNzOE4emT1 + 1) {
        scanf ("%s%lf", y063fxl[vNzOE4emT1], &CTcakiO3v[vNzOE4emT1]);
    }
    OOQljE = (621 - 621);
    for (vNzOE4emT1 = 0; vNzOE4emT1 < nizA9mu6vS; vNzOE4emT1 = vNzOE4emT1 + 1) {
        zUcyeRdNq2 = strcmp (y063fxl[vNzOE4emT1], "male");
        if (zUcyeRdNq2 == 0) {
            chW6Fqor9YZ[RfuZ71] = CTcakiO3v[vNzOE4emT1];
            RfuZ71 = RfuZ71 +1;
        }
        else {
            dORQnpt[OOQljE] = CTcakiO3v[vNzOE4emT1];
            OOQljE = OOQljE +1;
        };
    }
    for (WLNhTlEAcf5y = (179 - 178); WLNhTlEAcf5y <= RfuZ71; WLNhTlEAcf5y = WLNhTlEAcf5y +1) {
        vNzOE4emT1 = 0;
        while (RfuZ71 -WLNhTlEAcf5y > vNzOE4emT1) {
            if (chW6Fqor9YZ[vNzOE4emT1] > chW6Fqor9YZ[vNzOE4emT1 + (309 - 308)]) {
                e = chW6Fqor9YZ[vNzOE4emT1 + (688 - 687)];
                chW6Fqor9YZ[vNzOE4emT1 + 1] = chW6Fqor9YZ[vNzOE4emT1];
                chW6Fqor9YZ[vNzOE4emT1] = e;
            }
            vNzOE4emT1 = vNzOE4emT1 + 1;
        };
    }
    for (WLNhTlEAcf5y = 1; WLNhTlEAcf5y <= OOQljE; WLNhTlEAcf5y = WLNhTlEAcf5y +1) {
        vNzOE4emT1 = 0;
        while (vNzOE4emT1 < OOQljE -WLNhTlEAcf5y) {
            if (dORQnpt[vNzOE4emT1] < dORQnpt[vNzOE4emT1 + 1]) {
                e = dORQnpt[vNzOE4emT1 + 1];
                dORQnpt[vNzOE4emT1 + 1] = dORQnpt[vNzOE4emT1];
                dORQnpt[vNzOE4emT1] = e;
            }
            vNzOE4emT1 = vNzOE4emT1 + 1;
        };
    }
    for (vNzOE4emT1 = 0; vNzOE4emT1 < RfuZ71; vNzOE4emT1 = vNzOE4emT1 + 1) {
        printf ("%.2lf ", chW6Fqor9YZ[vNzOE4emT1]);
    }
    for (vNzOE4emT1 = 0; vNzOE4emT1 < OOQljE -1; vNzOE4emT1 = vNzOE4emT1 + 1) {
        printf ("%.2lf ", dORQnpt[vNzOE4emT1]);
    }
    printf ("%.2lf", dORQnpt[OOQljE -1]);
    return 0;
}

