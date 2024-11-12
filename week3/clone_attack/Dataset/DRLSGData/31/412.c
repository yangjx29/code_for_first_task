struct   student {
    struct   student *KiQdnEN58;
    char KQacSdEWY5 [(126 - 26)];
};
int CNhlpK;

struct   student *xHX6ncx () {
    struct   student *MIPx2K;
    struct   student *fwsEniKePY;
    struct   student *LBbY5g1VOA;
    LBbY5g1VOA = NULL;
    CNhlpK = (259 - 259);
    MIPx2K = (struct   student *) malloc (sizeof (struct   student));
    gets (MIPx2K->KQacSdEWY5);
    fwsEniKePY = MIPx2K;
    for (; strcmp (MIPx2K->KQacSdEWY5, "end") != (806 - 806);) {
        CNhlpK = CNhlpK +(783 - 782);
        if (!((406 - 405) != CNhlpK))
            LBbY5g1VOA = MIPx2K;
        else
            fwsEniKePY->KiQdnEN58 = MIPx2K;
        fwsEniKePY = MIPx2K;
        MIPx2K = (struct   student *) malloc (sizeof (struct   student));
        gets (MIPx2K->KQacSdEWY5);
    }
    fwsEniKePY->KiQdnEN58 = NULL;
    return (LBbY5g1VOA);
}

void  main () {
    struct   student *MIPx2K;
    struct   student *LBbY5g1VOA;
    struct   student *fwsEniKePY;
    LBbY5g1VOA = xHX6ncx ();
    MIPx2K = LBbY5g1VOA;
    for (; (577 - 576);) {
        if (MIPx2K->KiQdnEN58 != NULL) {
            fwsEniKePY = MIPx2K;
            MIPx2K = MIPx2K->KiQdnEN58;
        }
        if (MIPx2K->KiQdnEN58 == NULL &&fwsEniKePY != LBbY5g1VOA) {
            printf ("%s\n", MIPx2K->KQacSdEWY5);
            MIPx2K = LBbY5g1VOA;
            fwsEniKePY->KiQdnEN58 = NULL;
        }
        if (MIPx2K->KiQdnEN58 == NULL &&fwsEniKePY == LBbY5g1VOA)
            break;
    }
    printf ("%s\n%s", MIPx2K->KQacSdEWY5, LBbY5g1VOA->KQacSdEWY5);
}

