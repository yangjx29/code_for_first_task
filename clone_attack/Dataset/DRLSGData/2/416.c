void  main () {
    int NdzjmQ4;
    int ie38g9StLqdC;
    int z1VU2GROQ3lD [(372 - 346)];
    struct   fMhIfno8ugV {
        int qNJyZeGi1;
        char oqf15GL [(615 - 589)];
    }
    fMhIfno8ugV [(1198 - 199)];
    int QAEw4NBvUs;
    int yGcDnd1;
    int k9Di6b7tr [(1694 - 695)];
    int Qw20ro;
    int mFrow91NP0jI;
    yGcDnd1 = (358 - 358);
    for (NdzjmQ4 = (945 - 945); NdzjmQ4 < 26; NdzjmQ4 = NdzjmQ4 +(604 - 603)) {
        z1VU2GROQ3lD[NdzjmQ4] = 0;
    }
    scanf ("%d\n", &QAEw4NBvUs);
    for (ie38g9StLqdC = 0; QAEw4NBvUs > ie38g9StLqdC; ie38g9StLqdC = ie38g9StLqdC + 1) {
        scanf ("%d %s", &fMhIfno8ugV[ie38g9StLqdC].qNJyZeGi1, fMhIfno8ugV[ie38g9StLqdC].oqf15GL);
    }
    for (ie38g9StLqdC = 0; QAEw4NBvUs > ie38g9StLqdC; ie38g9StLqdC = ie38g9StLqdC + 1) {
        for (Qw20ro = 0; Qw20ro < strlen (fMhIfno8ugV[ie38g9StLqdC].oqf15GL); Qw20ro = Qw20ro +1) {
            z1VU2GROQ3lD[fMhIfno8ugV[ie38g9StLqdC].oqf15GL[Qw20ro] - 'A']++;
        }
    }
    for (NdzjmQ4 = 0; NdzjmQ4 < 26; NdzjmQ4 = NdzjmQ4 +1) {
        if (z1VU2GROQ3lD[NdzjmQ4] > yGcDnd1) {
            yGcDnd1 = z1VU2GROQ3lD[NdzjmQ4];
            mFrow91NP0jI = NdzjmQ4;
        }
    }
    printf ("%c\n%d\n", mFrow91NP0jI + 'A', yGcDnd1);
    for (ie38g9StLqdC = 0; ie38g9StLqdC < QAEw4NBvUs; ie38g9StLqdC = ie38g9StLqdC + 1) {
        for (Qw20ro = 0; Qw20ro < strlen (fMhIfno8ugV[ie38g9StLqdC].oqf15GL); Qw20ro = Qw20ro +1) {
            if (fMhIfno8ugV[ie38g9StLqdC].oqf15GL[Qw20ro] == mFrow91NP0jI + 'A') {
                printf ("%d\n", fMhIfno8ugV[ie38g9StLqdC].qNJyZeGi1);
                break;
            }
        }
    }
}

