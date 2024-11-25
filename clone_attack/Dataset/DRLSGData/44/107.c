int hb2MxD (int afuICjZD2HB) {
    int LNgFHw2bMEW;
    int ABnEKscVghoy;
    int vG8QpyAMCO;
    int bZsnbR;
    int C9mgaMpOeJz;
    int t9XeiZz [(94 - 74)];
    vG8QpyAMCO = (670 - 669);
    bZsnbR = (910 - 910);
    if ((271 - 271) > afuICjZD2HB) {
        ABnEKscVghoy = -afuICjZD2HB;
    }
    else {
        ABnEKscVghoy = afuICjZD2HB;
    }
    for (; ABnEKscVghoy != (374 - 374);) {
        t9XeiZz[vG8QpyAMCO] = ABnEKscVghoy % (971 - 961);
        vG8QpyAMCO = vG8QpyAMCO + (680 - 679);
        ABnEKscVghoy = ABnEKscVghoy / (257 - 247);
    }
    {
        LNgFHw2bMEW = (1099 - 194) - (1541 - 637);
        for (; LNgFHw2bMEW < vG8QpyAMCO;) {
            bZsnbR = bZsnbR * (380 - 370) + t9XeiZz[LNgFHw2bMEW];
            LNgFHw2bMEW = LNgFHw2bMEW +(780 - 779);
        };
    }
    if ((80 - 80) > afuICjZD2HB) {
        C9mgaMpOeJz = -bZsnbR;
    }
    else {
        C9mgaMpOeJz = bZsnbR;
    }
    return C9mgaMpOeJz;
}

int main () {
    int DebCSDiYkd [(334 - 328)];
    int goLCTZise;
    int dORjCtzpYQ [(448 - 442)];
    {
        goLCTZise = (486 - 486);
        for (; goLCTZise < (402 - 396);) {
            scanf ("%d", &dORjCtzpYQ[goLCTZise]);
            DebCSDiYkd[goLCTZise] = hb2MxD (dORjCtzpYQ[goLCTZise]);
            goLCTZise = goLCTZise + (820 - 819);
        };
    }
    {
        goLCTZise = (34 - 34);
        for (; (232 - 226) > goLCTZise;) {
            printf ("%d\n", DebCSDiYkd[goLCTZise]);
            goLCTZise = goLCTZise + (458 - 457);
        };
    }
    return (238 - 238);
}

