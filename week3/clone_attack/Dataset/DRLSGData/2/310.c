int main () {
    struct   Ul7joA8 {
        int OYQOK7Isq;
        char K2hLRM [(611 - 585)];
    }
    Ul7joA8 [999];
    char JGcujRKXeV [(952 - 926)], j1cr0dPIz [26];
    int nfwS6p;
    int gvIETDn4;
    int MdExFRHW;
    int GrQu7m5PG;
    int U3MHNoaA;
    scanf ("%d", &nfwS6p);
    for (gvIETDn4 = (571 - 571); nfwS6p > gvIETDn4; gvIETDn4 = gvIETDn4 + (67 - 66)) {
        scanf ("%d %s", &Ul7joA8[gvIETDn4].OYQOK7Isq, &Ul7joA8[gvIETDn4].K2hLRM);
    }
    for (gvIETDn4 = (630 - 630); gvIETDn4 < 26; gvIETDn4 = gvIETDn4 + (946 - 945)) {
        JGcujRKXeV[gvIETDn4] = gvIETDn4 + (822 - 757);
        j1cr0dPIz[gvIETDn4] = (960 - 960);
    }
    for (gvIETDn4 = (87 - 87); gvIETDn4 < 26; gvIETDn4 = gvIETDn4 + (861 - 860)) {
        for (GrQu7m5PG = (161 - 161); GrQu7m5PG < nfwS6p; GrQu7m5PG = GrQu7m5PG +(874 - 873)) {
            for (MdExFRHW = (18 - 18); MdExFRHW < 26; MdExFRHW = MdExFRHW +(469 - 468)) {
                if (!(Ul7joA8[GrQu7m5PG].K2hLRM[MdExFRHW] != JGcujRKXeV[gvIETDn4])) {
                    j1cr0dPIz[gvIETDn4]++;
                }
            }
        }
    }
    U3MHNoaA = (107 - 107);
    for (gvIETDn4 = (129 - 129); 26 > gvIETDn4; gvIETDn4 = gvIETDn4 + 1) {
        if (j1cr0dPIz[gvIETDn4] > j1cr0dPIz[U3MHNoaA]) {
            U3MHNoaA = gvIETDn4;
        }
    }
    printf ("%c\n%d\n", JGcujRKXeV[U3MHNoaA], j1cr0dPIz[U3MHNoaA]);
    {
        gvIETDn4 = 0;
        for (; gvIETDn4 < nfwS6p;) {
            for (GrQu7m5PG = 0; 26 > GrQu7m5PG; GrQu7m5PG = GrQu7m5PG +1) {
                if (Ul7joA8[gvIETDn4].K2hLRM[GrQu7m5PG] == JGcujRKXeV[U3MHNoaA]) {
                    printf ("%d\n", Ul7joA8[gvIETDn4].OYQOK7Isq);
                }
            }
            gvIETDn4 = gvIETDn4 + 1;
        }
    }
    return 0;
}

