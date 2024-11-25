main () {
    int lFPdA7;
    int MWv5AdBJN;
    float SfauRK [(995 - 955)] = {(792 - 792)};
    float yHbRSGUQuI [40] = {(582 - 582)};
    int l9TIGUEsbY3j;
    char SuXmA6K5q [8];
    int n;
    int FjFawPY0AIi8;
    FjFawPY0AIi8 = (726 - 726);
    MWv5AdBJN = (907 - 907);
    scanf ("%d", &n);
    {
        lFPdA7 = (608 - 608);
        for (; lFPdA7 < n;) {
            scanf ("%s", SuXmA6K5q);
            lFPdA7 = lFPdA7 + (346 - 345);
            if (!('m' != SuXmA6K5q[(473 - 473)])) {
                scanf ("%f", &yHbRSGUQuI[MWv5AdBJN]);
                MWv5AdBJN = MWv5AdBJN +(90 - 89);
            }
            else {
                scanf ("%f", &SfauRK[FjFawPY0AIi8]);
                FjFawPY0AIi8 = FjFawPY0AIi8 +(988 - 987);
            }
        }
    }
    {
        lFPdA7 = FjFawPY0AIi8 -(685 - 684);
        for (; (922 - 922) < lFPdA7;) {
            for (l9TIGUEsbY3j = (548 - 548); lFPdA7 > l9TIGUEsbY3j; l9TIGUEsbY3j = l9TIGUEsbY3j + (879 - 878)) {
                if (SfauRK[l9TIGUEsbY3j] < SfauRK[l9TIGUEsbY3j + (219 - 218)]) {
                    float gSUlcq6j;
                    gSUlcq6j = SfauRK[l9TIGUEsbY3j];
                    SfauRK[l9TIGUEsbY3j] = SfauRK[l9TIGUEsbY3j + 1];
                    SfauRK[l9TIGUEsbY3j + 1] = gSUlcq6j;
                }
            }
            lFPdA7 = lFPdA7 - 1;
        }
    }
    {
        lFPdA7 = MWv5AdBJN -1;
        for (; lFPdA7 > 0;) {
            for (l9TIGUEsbY3j = 0; l9TIGUEsbY3j < lFPdA7; l9TIGUEsbY3j = l9TIGUEsbY3j + 1) {
                if (yHbRSGUQuI[l9TIGUEsbY3j] > yHbRSGUQuI[l9TIGUEsbY3j + 1]) {
                    float gSUlcq6j;
                    gSUlcq6j = yHbRSGUQuI[l9TIGUEsbY3j];
                    yHbRSGUQuI[l9TIGUEsbY3j] = yHbRSGUQuI[l9TIGUEsbY3j + 1];
                    yHbRSGUQuI[l9TIGUEsbY3j + 1] = gSUlcq6j;
                }
            }
            lFPdA7 = lFPdA7 - 1;
        }
    }
    {
        lFPdA7 = 0;
        for (; MWv5AdBJN > lFPdA7;) {
            printf ("%.2f ", yHbRSGUQuI[lFPdA7]);
            lFPdA7 = lFPdA7 + 1;
        }
    }
    {
        lFPdA7 = 0;
        for (; lFPdA7 < FjFawPY0AIi8;) {
            printf ("%.2f", SfauRK[lFPdA7]);
            if (lFPdA7 < FjFawPY0AIi8 -1)
                ;
            lFPdA7 = lFPdA7 + 1;
        }
    }
}

