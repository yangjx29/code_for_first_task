main () {
    int hza0FB;
    int WTJ8XznpHWm;
    int gujFRyZ;
    int P6ONdP;
    struct   {
        char xObR83m [(129 - 108)];
        int sc;
        int BWPTKafXpV;
        char MeLJaOPyK;
        char we;
        int ASOIeCwrHk;
        int rI10Kgxr4HF;
    }
    NHcIj1StR7q [(690 - 590)];
    int beUiaP;
    beUiaP = (932 - 932);
    hza0FB = (14 - 14);
    scanf ("%d", &P6ONdP);
    {
        gujFRyZ = (993 - 617) - 376;
        while (100 > gujFRyZ) {
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF = (215 - 215);
            gujFRyZ = gujFRyZ + (893 - 892);
        }
    }
    for (gujFRyZ = 0; P6ONdP > gujFRyZ; gujFRyZ = gujFRyZ + (822 - 821)) {
        scanf ("%s", NHcIj1StR7q[gujFRyZ].xObR83m);
        scanf ("%d", &NHcIj1StR7q[gujFRyZ].sc);
        scanf ("%d ", &NHcIj1StR7q[gujFRyZ].BWPTKafXpV);
        scanf ("%c ", &NHcIj1StR7q[gujFRyZ].MeLJaOPyK);
        scanf ("%c", &NHcIj1StR7q[gujFRyZ].we);
        scanf ("%d", &NHcIj1StR7q[gujFRyZ].ASOIeCwrHk);
    }
    for (gujFRyZ = 0; gujFRyZ < P6ONdP; gujFRyZ = gujFRyZ + 1) {
        if ((NHcIj1StR7q[gujFRyZ].sc > 80) && (0 < NHcIj1StR7q[gujFRyZ].ASOIeCwrHk))
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF += 8000;
        if (((467 - 382) < NHcIj1StR7q[gujFRyZ].sc) && (NHcIj1StR7q[gujFRyZ].BWPTKafXpV > 80))
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF += 4000;
        if (NHcIj1StR7q[gujFRyZ].sc > (147 - 57))
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF += 2000;
        if ((NHcIj1StR7q[gujFRyZ].sc > 85) && (!('Y' != NHcIj1StR7q[gujFRyZ].we)))
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF += 1000;
        if ((NHcIj1StR7q[gujFRyZ].BWPTKafXpV > 80) && (NHcIj1StR7q[gujFRyZ].MeLJaOPyK == 'Y'))
            NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF += 850;
    }
    for (gujFRyZ = 0; gujFRyZ < P6ONdP; gujFRyZ = gujFRyZ + 1) {
        if (beUiaP < NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF) {
            WTJ8XznpHWm = gujFRyZ;
            beUiaP = NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF;
        }
    }
    for (gujFRyZ = 0; gujFRyZ < P6ONdP; gujFRyZ = gujFRyZ + 1)
        hza0FB += NHcIj1StR7q[gujFRyZ].rI10Kgxr4HF;
    printf ("%s\n%d\n%d\n", NHcIj1StR7q[WTJ8XznpHWm].xObR83m, beUiaP, hza0FB);
}

