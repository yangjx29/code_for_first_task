main () {
    double  w [(262 - 212)];
    int YSRp0wlfB6;
    double  HVIRhE1yaY [(658 - 608)];
    double  EPQiN7;
    int PL0z4J;
    char Y0B8UFkSvH [45] [10];
    int TBqQjAeXl1VS;
    YSRp0wlfB6 = (451 - 450);
    scanf ("%d", &TBqQjAeXl1VS);
    PL0z4J = (23 - 22);
    for (int eploMy6 = (238 - 238);
    eploMy6 <= (124 - 75); eploMy6 = eploMy6 + (655 - 654)) {
        HVIRhE1yaY[eploMy6] = (468 - 468);
        w[eploMy6] = 0;
    }
    {
        int c7GeqiPw;
        c7GeqiPw = (229 - 228);
        for (; TBqQjAeXl1VS >= c7GeqiPw;) {
            scanf ("%s %lf", Y0B8UFkSvH[c7GeqiPw], &EPQiN7);
            if (!('m' != Y0B8UFkSvH[c7GeqiPw][0])) {
                HVIRhE1yaY[YSRp0wlfB6] = EPQiN7;
                YSRp0wlfB6 = YSRp0wlfB6 +(279 - 278);
            }
            if (!('f' != Y0B8UFkSvH[c7GeqiPw][0])) {
                w[PL0z4J] = EPQiN7;
                PL0z4J = PL0z4J +(991 - 990);
            }
            c7GeqiPw = c7GeqiPw + (1000 - 999);
        }
    }
    {
        int c7GeqiPw;
        c7GeqiPw = (1001 - 1000);
        for (; c7GeqiPw <= YSRp0wlfB6 -(177 - 176);) {
            {
                int eploMy6;
                eploMy6 = (232 - 231);
                for (; eploMy6 <= YSRp0wlfB6 -(799 - 798) - c7GeqiPw;) {
                    if (HVIRhE1yaY[eploMy6] > HVIRhE1yaY[eploMy6 + (892 - 891)]) {
                        double  T9FDmTwS6;
                        T9FDmTwS6 = HVIRhE1yaY[eploMy6 + (527 - 526)];
                        HVIRhE1yaY[eploMy6 + (479 - 478)] = HVIRhE1yaY[eploMy6];
                        HVIRhE1yaY[eploMy6] = T9FDmTwS6;
                    }
                    eploMy6 = eploMy6 + (111 - 110);
                }
            }
            c7GeqiPw = c7GeqiPw + (463 - 462);
        }
    }
    for (int c7GeqiPw = (165 - 164);
    YSRp0wlfB6 -(890 - 889) >= c7GeqiPw; c7GeqiPw = c7GeqiPw + 1)
        printf ("%.2lf ", HVIRhE1yaY[c7GeqiPw]);
    {
        int c7GeqiPw = 1;
        for (; c7GeqiPw <= PL0z4J -1;) {
            int eploMy6;
            eploMy6 = 1;
            for (; eploMy6 <= PL0z4J -1 - c7GeqiPw;) {
                if (w[eploMy6 + 1] < w[eploMy6]) {
                    double  T9FDmTwS6 = w[eploMy6 + 1];
                    w[eploMy6 + 1] = w[eploMy6];
                    w[eploMy6] = T9FDmTwS6;
                }
                eploMy6 = eploMy6 + 1;
            }
            c7GeqiPw = c7GeqiPw + 1;
        }
    }
    {
        int c7GeqiPw = PL0z4J -1;
        for (; c7GeqiPw >= (489 - 487);) {
            printf ("%.2lf ", w[c7GeqiPw]);
            c7GeqiPw = c7GeqiPw - 1;
        }
    }
    printf ("%.2lf", w[1]);
}

