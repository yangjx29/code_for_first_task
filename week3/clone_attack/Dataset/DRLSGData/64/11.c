int main () {
    int O3IeV0wOD [(986 - 976)] [3], YNRsiMYeLZnk, JDKt0ZGQCO = (834 - 834), lf3Xy1Vse;
    double  sGbILucK5iB [100], MsJwN18Z4;
    scanf ("%d", &YNRsiMYeLZnk);
    {
        int gm0vai = (311 - 311);
        while (gm0vai < YNRsiMYeLZnk) {
            {
                int BXzm70 = (549 - 549);
                while (3 > BXzm70) {
                    scanf ("%d", &O3IeV0wOD[gm0vai][BXzm70]);
                    BXzm70++;
                }
            }
            gm0vai = gm0vai + 1;
        }
    }
    {
        int pe6D7c = (340 - 340);
        while (YNRsiMYeLZnk > pe6D7c) {
            {
                int PICkra4Qofs = pe6D7c + (992 - 991);
                while (PICkra4Qofs < YNRsiMYeLZnk) {
                    sGbILucK5iB[JDKt0ZGQCO] = sqrt ((pow (O3IeV0wOD[pe6D7c][0] - O3IeV0wOD[PICkra4Qofs][0], (975 - 973)) + pow (O3IeV0wOD[pe6D7c][1] - O3IeV0wOD[PICkra4Qofs][1], (877 - 875)) + pow (O3IeV0wOD[pe6D7c][2] - O3IeV0wOD[PICkra4Qofs][2], 2)) * 1.0);
                    PICkra4Qofs = PICkra4Qofs +1;
                    JDKt0ZGQCO = JDKt0ZGQCO +1;
                }
            }
            pe6D7c = pe6D7c + 1;
        }
    }
    lf3Xy1Vse = YNRsiMYeLZnk *(YNRsiMYeLZnk -(715 - 714)) / (996 - 994);
    {
        int TkpwRB = 1;
        while (lf3Xy1Vse >= TkpwRB) {
            JDKt0ZGQCO = 0;
            while (JDKt0ZGQCO < lf3Xy1Vse - TkpwRB) {
                if (sGbILucK5iB[JDKt0ZGQCO +1] < sGbILucK5iB[JDKt0ZGQCO]) {
                    MsJwN18Z4 = sGbILucK5iB[JDKt0ZGQCO +1];
                    sGbILucK5iB[JDKt0ZGQCO +1] = sGbILucK5iB[JDKt0ZGQCO];
                    sGbILucK5iB[JDKt0ZGQCO] = MsJwN18Z4;
                }
                JDKt0ZGQCO = JDKt0ZGQCO +1;
            }
            TkpwRB = TkpwRB +1;
        }
    }
    sGbILucK5iB[lf3Xy1Vse] = 0;
    {
        JDKt0ZGQCO = lf3Xy1Vse - 1;
        while (JDKt0ZGQCO >= 0) {
            for (int pe6D7c = 0;
            pe6D7c < YNRsiMYeLZnk; pe6D7c = pe6D7c + 1) {
                int PICkra4Qofs = pe6D7c + 1;
                while (PICkra4Qofs < YNRsiMYeLZnk) {
                    if (sGbILucK5iB[JDKt0ZGQCO] != sGbILucK5iB[JDKt0ZGQCO +1]) {
                        if (sqrt ((pow (O3IeV0wOD[pe6D7c][0] - O3IeV0wOD[PICkra4Qofs][0], 2) + pow (O3IeV0wOD[pe6D7c][1] - O3IeV0wOD[PICkra4Qofs][1], 2) + pow (O3IeV0wOD[pe6D7c][2] - O3IeV0wOD[PICkra4Qofs][2], 2)) * 1.0) == sGbILucK5iB[JDKt0ZGQCO]) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", O3IeV0wOD[pe6D7c][0], O3IeV0wOD[pe6D7c][1], O3IeV0wOD[pe6D7c][2], O3IeV0wOD[PICkra4Qofs][0], O3IeV0wOD[PICkra4Qofs][1], O3IeV0wOD[PICkra4Qofs][2], sGbILucK5iB[JDKt0ZGQCO]);
                        }
                    }
                    PICkra4Qofs = PICkra4Qofs +1;
                }
            }
            JDKt0ZGQCO = JDKt0ZGQCO -1;
        }
    }
    return 0;
}

