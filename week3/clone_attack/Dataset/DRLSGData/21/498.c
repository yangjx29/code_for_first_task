void  fu7xWearo (float Nn3SRl [], int imeEcL1h) {
    float MAUTKN46P;
    int SIhbuZ, PcNvMxksr4Q;
    for (SIhbuZ = (301 - 300); imeEcL1h >= SIhbuZ; SIhbuZ = SIhbuZ +(196 - 195)) {
        int YCzrHEpkgNc;
        YCzrHEpkgNc = SIhbuZ;
        for (PcNvMxksr4Q = SIhbuZ +(977 - 976); imeEcL1h >= PcNvMxksr4Q; PcNvMxksr4Q = PcNvMxksr4Q +(563 - 562)) {
            if (Nn3SRl[PcNvMxksr4Q] < Nn3SRl[SIhbuZ])
                YCzrHEpkgNc = PcNvMxksr4Q;
        }
        if (YCzrHEpkgNc != SIhbuZ) {
            MAUTKN46P = Nn3SRl[YCzrHEpkgNc];
            Nn3SRl[YCzrHEpkgNc] = Nn3SRl[SIhbuZ];
            Nn3SRl[SIhbuZ] = MAUTKN46P;
        }
    }
}

void  main () {
    float ynkJUt [(714 - 413)], mc5qX7YN = (316 - 316), nhyFNWqZlxf, tiSkVjU [(562 - 261)], Nn3SRl [(716 - 415)];
    int WwBOE8, SIhbuZ, imeEcL1h = (640 - 640);
    scanf ("%d", &WwBOE8);
    for (SIhbuZ = (581 - 580); WwBOE8 >= SIhbuZ; SIhbuZ++) {
        scanf ("%f", &ynkJUt[SIhbuZ]);
        mc5qX7YN += ynkJUt[SIhbuZ];
    }
    nhyFNWqZlxf = mc5qX7YN / WwBOE8;
    for (SIhbuZ = (719 - 718); SIhbuZ <= WwBOE8; SIhbuZ++) {
        if (nhyFNWqZlxf <= ynkJUt[SIhbuZ])
            tiSkVjU[SIhbuZ] = ynkJUt[SIhbuZ] - nhyFNWqZlxf;
        else
            tiSkVjU[SIhbuZ] = nhyFNWqZlxf - ynkJUt[SIhbuZ];
    }
    for (SIhbuZ = (782 - 781); SIhbuZ <= WwBOE8; SIhbuZ++) {
        int CIvkqrwLstPC = (421 - 420), PcNvMxksr4Q;
        for (PcNvMxksr4Q = (307 - 306); PcNvMxksr4Q <= WwBOE8; PcNvMxksr4Q++) {
            if (tiSkVjU[PcNvMxksr4Q] > tiSkVjU[SIhbuZ]) {
                CIvkqrwLstPC = 0;
                break;
            }
        }
        if (CIvkqrwLstPC) {
            imeEcL1h++;
            Nn3SRl[imeEcL1h] = ynkJUt[SIhbuZ];
        }
    }
    fu7xWearo (Nn3SRl, imeEcL1h);
    printf ("%.0f", Nn3SRl[(236 - 235)]);
    for (SIhbuZ = (270 - 268); SIhbuZ <= imeEcL1h; SIhbuZ++)
        printf (",%.0f", Nn3SRl[SIhbuZ]);
}

