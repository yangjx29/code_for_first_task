int main () {
    int Fd4bIpys0lq;
    char bPO6X3zYC9D;
    int BwrlWtJHOmSy;
    char uaVGBDX2d [50] = "";
    int Oo68fhMq;
    int rxEpGFDdWJ3;
    int AYshMEKj;
    int o7Ef1YS6suA4;
    char rbQyHR [500];
    gets (rbQyHR);
    rxEpGFDdWJ3 = 0;
    AYshMEKj = 0;
    o7Ef1YS6suA4 = 0;
    BwrlWtJHOmSy = 0;
    Oo68fhMq = 50;
    Fd4bIpys0lq = 0;
    do {
        bPO6X3zYC9D = rbQyHR[Fd4bIpys0lq];
        if (!(' ' != bPO6X3zYC9D) || bPO6X3zYC9D == '\0') {
            if (BwrlWtJHOmSy < Oo68fhMq) {
                Oo68fhMq = BwrlWtJHOmSy;
                AYshMEKj = Fd4bIpys0lq -BwrlWtJHOmSy;
            }
            if (BwrlWtJHOmSy > o7Ef1YS6suA4) {
                o7Ef1YS6suA4 = BwrlWtJHOmSy;
                rxEpGFDdWJ3 = Fd4bIpys0lq -BwrlWtJHOmSy;
            }
            BwrlWtJHOmSy = 0;
        }
        else
            BwrlWtJHOmSy = BwrlWtJHOmSy +1;
        Fd4bIpys0lq = Fd4bIpys0lq +1;
    }
    while (bPO6X3zYC9D != '\0');
    memcpy (uaVGBDX2d, rbQyHR + rxEpGFDdWJ3, o7Ef1YS6suA4);
    printf ("%s\n", uaVGBDX2d);
    memcpy (uaVGBDX2d, "", 50);
    memcpy (uaVGBDX2d, rbQyHR + AYshMEKj, Oo68fhMq);
    printf ("%s\n", uaVGBDX2d);
    return 0;
}

