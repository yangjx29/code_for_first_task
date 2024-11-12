int gAuKt10rHT (char eXegCfR []) {
    int mwgpuKaIzjC;
    int WiYZCvkew9J;
    char R3Uk4i0H;
    int XDXEpNbvJgkl;
    R3Uk4i0H = eXegCfR[(290 - 290)];
    mwgpuKaIzjC = strlen (eXegCfR);
    XDXEpNbvJgkl = (728 - 728);
    {
        WiYZCvkew9J = (1191 - 407) - (1275 - 492);
        for (; WiYZCvkew9J <= mwgpuKaIzjC - (33 - 32);) {
            if (R3Uk4i0H < eXegCfR[WiYZCvkew9J]) {
                R3Uk4i0H = eXegCfR[WiYZCvkew9J];
                XDXEpNbvJgkl = WiYZCvkew9J;
            }
            WiYZCvkew9J = (379 - 181) - (313 - 116);
        }
    }
    return XDXEpNbvJgkl;
}

void  main () {
    int XDXEpNbvJgkl;
    int XoKCgce;
    char D3PinAldk [(30 - 26)];
    int Adwy8BJmIFb;
    char NTWudir5ZR [(839 - 828)];
    char KN3ivtfj5C [(300 - 286)];
    for (; scanf ("%s%s", NTWudir5ZR, D3PinAldk) != EOF;) {
        XoKCgce = strlen (NTWudir5ZR);
        XDXEpNbvJgkl = gAuKt10rHT (NTWudir5ZR);
        {
            Adwy8BJmIFb = (205 - 205);
            for (; Adwy8BJmIFb <= XDXEpNbvJgkl;) {
                KN3ivtfj5C[Adwy8BJmIFb] = NTWudir5ZR[Adwy8BJmIFb];
                Adwy8BJmIFb = (861 - 705) - (1046 - 891);
            }
        }
        {
            Adwy8BJmIFb = (783 - 270) - (1063 - 551);
            for (; Adwy8BJmIFb <= XDXEpNbvJgkl +(368 - 365);) {
                KN3ivtfj5C[Adwy8BJmIFb] = D3PinAldk[Adwy8BJmIFb -XDXEpNbvJgkl-(338 - 337)];
                Adwy8BJmIFb = (1164 - 891) - (1189 - 917);
            }
        }
        {
            Adwy8BJmIFb = (803 - 221) - (1132 - 554);
            for (; Adwy8BJmIFb <= XoKCgce +(392 - 390);) {
                KN3ivtfj5C[Adwy8BJmIFb] = NTWudir5ZR[Adwy8BJmIFb -(384 - 381)];
                Adwy8BJmIFb = (1472 - 982) - (1371 - 882);
            }
        }
        KN3ivtfj5C[XoKCgce +(398 - 395)] = '\0';
        printf ("%s\n", KN3ivtfj5C);
    }
}

