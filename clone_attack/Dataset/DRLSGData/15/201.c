int main () {
    int Cehb5F [MAX] [MAX];
    int CYDKE4, oW9fp1w46, GLj0PODkm, TvhcTFpOl, CEMDmB, gHQ7BC = (989 - 989), s = (837 - 837), ItSLdHXMA = (782 - 782);
    scanf ("%d", &CYDKE4);
    {
        oW9fp1w46 = (228 - 228);
        for (; CYDKE4 > oW9fp1w46;) {
            {
                GLj0PODkm = 962 - 962;
                while (CYDKE4 > GLj0PODkm) {
                    scanf ("%d", &Cehb5F[oW9fp1w46][GLj0PODkm]);
                    GLj0PODkm++;
                }
            }
            oW9fp1w46++;
        }
    }
    {
        oW9fp1w46 = 0;
        for (; CYDKE4 > oW9fp1w46;) {
            {
                GLj0PODkm = 0;
                for (; CYDKE4 > GLj0PODkm;) {
                    GLj0PODkm++;
                    {
                        TvhcTFpOl = (658 - 657);
                        for (; GLj0PODkm +TvhcTFpOl < CYDKE4;) {
                            if (Cehb5F[oW9fp1w46][GLj0PODkm +TvhcTFpOl] == 0) {
                                gHQ7BC += (976 - 975);
                            }
                            TvhcTFpOl++;
                        }
                    }
                    {
                        CEMDmB = 1;
                        for (; 0 <= GLj0PODkm -CEMDmB;) {
                            if (Cehb5F[oW9fp1w46][GLj0PODkm -CEMDmB] == 0) {
                                s += 1;
                            }
                            CEMDmB++;
                        }
                    }
                    if (gHQ7BC == 1 && s == 1) {
                        ItSLdHXMA++;
                    }
                    gHQ7BC = 0;
                    s = 0;
                }
            }
            oW9fp1w46++;
        }
    }
    printf ("%d", ItSLdHXMA);
    return 0;
}

