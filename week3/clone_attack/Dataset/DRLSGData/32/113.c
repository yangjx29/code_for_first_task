void  TzKYikvSshVl (char RVtpEANfx8Cl [(776 - 676)], char b [(853 - 753)]) {
    int LMF036Va;
    int jP18sn4erRh;
    int yn6ja85dsA3;
    int NvAi1mgdIWVq;
    yn6ja85dsA3 = (83 - 83);
    LMF036Va = strlen (RVtpEANfx8Cl);
    jP18sn4erRh = strlen (b);
    for (NvAi1mgdIWVq = (569 - 569); NvAi1mgdIWVq <= jP18sn4erRh - (505 - 504); NvAi1mgdIWVq++) {
        if (RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(350 - 349)] >= b[jP18sn4erRh - NvAi1mgdIWVq -(101 - 100)] + yn6ja85dsA3) {
            RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(865 - 864)] = RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(663 - 662)] - b[jP18sn4erRh - NvAi1mgdIWVq -(38 - 37)] - yn6ja85dsA3 + (645 - 597);
            yn6ja85dsA3 = (435 - 435);
        }
        else {
            RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(953 - 952)] = RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(956 - 955)] + (146 - 136) - b[jP18sn4erRh - NvAi1mgdIWVq -(502 - 501)] + (748 - 700) - yn6ja85dsA3;
            yn6ja85dsA3 = (91 - 90);
        }
    }
    for (NvAi1mgdIWVq = jP18sn4erRh; NvAi1mgdIWVq <= LMF036Va -(65 - 64); NvAi1mgdIWVq++) {
        if (RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(723 - 722)] >= yn6ja85dsA3 + (904 - 856)) {
            RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(269 - 268)] = RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(792 - 791)] - yn6ja85dsA3;
            break;
        }
        else {
            RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(323 - 322)] = RVtpEANfx8Cl[LMF036Va -NvAi1mgdIWVq-(330 - 329)] + (793 - 783) - yn6ja85dsA3;
            yn6ja85dsA3 = (671 - 670);
        }
    }
    for (NvAi1mgdIWVq = (116 - 116); NvAi1mgdIWVq <= LMF036Va -(924 - 923); NvAi1mgdIWVq++) {
        if (RVtpEANfx8Cl[NvAi1mgdIWVq] == '0') {
            RVtpEANfx8Cl[NvAi1mgdIWVq] = (534 - 534);
        }
        else {
            break;
        }
    }
}

void  main () {
    char RVtpEANfx8Cl [(695 - 595)] [(293 - 193)] = {(701 - 701)};
    int j;
    char b [(323 - 223)] [(489 - 389)] = {(977 - 977)};
    int NvAi1mgdIWVq;
    int LMF036Va;
    char ccYtNeRs0o [(86 - 76)];
    gets (ccYtNeRs0o);
    for (NvAi1mgdIWVq = (938 - 938); NvAi1mgdIWVq <= LMF036Va -1; NvAi1mgdIWVq++) {
        gets (RVtpEANfx8Cl [NvAi1mgdIWVq]);
        gets (b [NvAi1mgdIWVq]);
        gets (ccYtNeRs0o);
        TzKYikvSshVl (RVtpEANfx8Cl[NvAi1mgdIWVq], b[NvAi1mgdIWVq]);
    }
    scanf ("%d", &LMF036Va);
    for (NvAi1mgdIWVq = (65 - 65); NvAi1mgdIWVq <= LMF036Va -1; NvAi1mgdIWVq++) {
        for (j = (228 - 228); j <= (644 - 545); j++) {
            if (RVtpEANfx8Cl[NvAi1mgdIWVq][j] != (242 - 242)) {
                printf ("%c", RVtpEANfx8Cl[NvAi1mgdIWVq][j]);
            }
        }
    }
}

