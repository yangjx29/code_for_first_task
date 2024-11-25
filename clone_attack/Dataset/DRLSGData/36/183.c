int P93j26EQw0 (char FI6Pjzfi [], char KIXQwGf0 []) {
    int ooRCxruXg2V = 1, P4hDIfmTX8Ls, B7Og08AUTmE, RidmA0NxSbE, YXG3QC5vfH9, d5mkco;
    P4hDIfmTX8Ls = strlen (FI6Pjzfi);
    for (B7Og08AUTmE = (973 - 973); P4hDIfmTX8Ls -1 >= B7Og08AUTmE; B7Og08AUTmE = B7Og08AUTmE +1) {
        YXG3QC5vfH9 = 0;
        RidmA0NxSbE = 0;
        for (d5mkco = 0; P4hDIfmTX8Ls -1 >= d5mkco; d5mkco++) {
            if (FI6Pjzfi[d5mkco] == FI6Pjzfi[B7Og08AUTmE])
                RidmA0NxSbE = RidmA0NxSbE +1;
            if (KIXQwGf0[d5mkco] == FI6Pjzfi[B7Og08AUTmE])
                YXG3QC5vfH9 = YXG3QC5vfH9 +1;
        }
        if (RidmA0NxSbE != YXG3QC5vfH9)
            ooRCxruXg2V = 0;
    }
    return ooRCxruXg2V;
}

void  main () {
    int ZVKC5hr;
    int ooRCxruXg2V;
    char KIXQwGf0 [100];
    char FI6Pjzfi [100];
    int ADbI3Azn2;
    scanf ("%s%s", FI6Pjzfi, KIXQwGf0);
    ooRCxruXg2V = strlen (FI6Pjzfi);
    ADbI3Azn2 = strlen (KIXQwGf0);
    if (ooRCxruXg2V != ADbI3Azn2)
        ;
    else {
        ZVKC5hr = P93j26EQw0 (FI6Pjzfi, KIXQwGf0);
        if (ZVKC5hr)
            ;
        else
            ;
    };
}

