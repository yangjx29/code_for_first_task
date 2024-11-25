void  main () {
    int FRwQ4bOFP;
    char LhflFEg96b [(457 - 357)];
    char rFL3Sbpk6zde [(585 - 485)];
    char mSfvDXi1Fg57 [(639 - 539)];
    char a6wMgymdSR;
    int j;
    int jIFOBj8aL;
    int p2AqO9nC31I;
    int m;
    int i;
    char NHYd1V7F [(173 - 73)];
    for (; scanf ("%s %s", mSfvDXi1Fg57, NHYd1V7F) != EOF;) {
        m = strlen (mSfvDXi1Fg57);
        a6wMgymdSR = mSfvDXi1Fg57[(249 - 249)];
        for (i = (799 - 799); i < m; i++)
            if (mSfvDXi1Fg57[i] > a6wMgymdSR) {
                a6wMgymdSR = mSfvDXi1Fg57[i];
                p2AqO9nC31I = i;
            }
        strcpy (LhflFEg96b, mSfvDXi1Fg57);
        LhflFEg96b[p2AqO9nC31I + (458 - 457)] = '\0';
        strcpy (rFL3Sbpk6zde, LhflFEg96b);
        strcat (rFL3Sbpk6zde, NHYd1V7F);
        FRwQ4bOFP = strlen (rFL3Sbpk6zde);
        for (i = (946 - 945); i < m - p2AqO9nC31I; i++)
            rFL3Sbpk6zde[FRwQ4bOFP +i - (43 - 42)] = mSfvDXi1Fg57[p2AqO9nC31I + i];
        rFL3Sbpk6zde[FRwQ4bOFP +i - (195 - 194)] = '\0';
        printf ("%s\n", rFL3Sbpk6zde);
    }
}

