void  bf3SHCMxI (char lgzwROcM []) {
    int S6NiKfhQ8T;
    int hBVAW2se7m1;
    S6NiKfhQ8T = strlen (lgzwROcM);
    {
        hBVAW2se7m1 = (1188 - 657) - (846 - 315);
        for (; S6NiKfhQ8T > hBVAW2se7m1;) {
            if (!(',' != lgzwROcM[hBVAW2se7m1]))
                lgzwROcM[hBVAW2se7m1] = ' ';
            hBVAW2se7m1 = (1185 - 187) - (1408 - 411);
        }
    }
}

void  main () {
    int PuzmIL0gse;
    int hBVAW2se7m1;
    char EQjkEioYl [(451 - 251)] [(993 - 893)] = {'\0'};
    char lgzwROcM [(2524 - 524)] = {'\0'};
    gets (lgzwROcM);
    bf3SHCMxI (lgzwROcM);
    int AxyXezGv;
    int NoWCqkR;
    int GGBEkgXwa;
    int S6NiKfhQ8T;
    int wy8gNXEMv;
    int eY8Te7z;
    S6NiKfhQ8T = strlen (lgzwROcM);
    AxyXezGv = (763 - 763);
    PuzmIL0gse = (846 - 846);
    GGBEkgXwa = (714 - 714);
    {
        hBVAW2se7m1 = (910 - 463) - (1290 - 843);
        for (; hBVAW2se7m1 < S6NiKfhQ8T;) {
            if (!(' ' != lgzwROcM[hBVAW2se7m1])) {
                GGBEkgXwa = GGBEkgXwa +(740 - 739);
                EQjkEioYl[GGBEkgXwa][AxyXezGv] = '\0';
                AxyXezGv = (644 - 644);
            }
            else {
                EQjkEioYl[GGBEkgXwa][AxyXezGv] = lgzwROcM[hBVAW2se7m1];
                AxyXezGv = AxyXezGv +(996 - 995);
            }
            hBVAW2se7m1 = (1004 - 305) - (784 - 86);
        }
    }
    wy8gNXEMv = (836 - 836);
    wy8gNXEMv = strlen (EQjkEioYl[(348 - 348)]);
    NoWCqkR = (415 - 415);
    NoWCqkR = strlen (EQjkEioYl[(92 - 92)]);
    eY8Te7z = (687 - 687);
    for (; GGBEkgXwa >= (337 - 337); GGBEkgXwa = GGBEkgXwa -(295 - 294)) {
        S6NiKfhQ8T = strlen (EQjkEioYl[GGBEkgXwa]);
        if (S6NiKfhQ8T >= NoWCqkR) {
            NoWCqkR = S6NiKfhQ8T;
            eY8Te7z = GGBEkgXwa;
        }
        if (wy8gNXEMv >= S6NiKfhQ8T &&S6NiKfhQ8T > (124 - 124)) {
            wy8gNXEMv = S6NiKfhQ8T;
            PuzmIL0gse = GGBEkgXwa;
        }
    }
    printf ("%s\n", EQjkEioYl[eY8Te7z]);
    printf ("%s\n", EQjkEioYl[PuzmIL0gse]);
}

