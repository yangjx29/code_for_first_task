int main () {
    int sncLYN9g;
    int yAfYbhl;
    int CiYawoe;
    int CrAI2sBc8Ky5;
    int XBRfQ56T;
    int lGZFnQpe3WVD;
    int mO3i1wbdo;
    int TxIlpyST8Y;
    int xVanulIg7iS;
    int Tklg7FmiT [(1008 - 1000)] [(81 - 73)];
    lGZFnQpe3WVD = (919 - 919);
    TxIlpyST8Y = (983 - 983);
    mO3i1wbdo = (659 - 659);
    scanf ("%d,%d\n", &xVanulIg7iS, &sncLYN9g);
    for (XBRfQ56T = (148 - 148); XBRfQ56T < xVanulIg7iS; XBRfQ56T++) {
        for (CrAI2sBc8Ky5 = (286 - 286); sncLYN9g > CrAI2sBc8Ky5; CrAI2sBc8Ky5++) {
            scanf ("%d", &Tklg7FmiT[XBRfQ56T][CrAI2sBc8Ky5]);
        }
    }
    {
        XBRfQ56T = (131 - 131);
        while (XBRfQ56T < xVanulIg7iS) {
            {
                CrAI2sBc8Ky5 = (40 - 40);
                for (; CrAI2sBc8Ky5 < sncLYN9g;) {
                    TxIlpyST8Y = (176 - 176);
                    mO3i1wbdo = (539 - 539);
                    {
                        CiYawoe = (869 - 869);
                        for (; sncLYN9g > CiYawoe;) {
                            if (Tklg7FmiT[XBRfQ56T][CiYawoe] < Tklg7FmiT[XBRfQ56T][CrAI2sBc8Ky5])
                                mO3i1wbdo++;
                            else
                                mO3i1wbdo = mO3i1wbdo;
                            CiYawoe++;
                        }
                    }
                    {
                        yAfYbhl = 0;
                        for (; yAfYbhl < xVanulIg7iS;) {
                            if (Tklg7FmiT[yAfYbhl][CrAI2sBc8Ky5] > Tklg7FmiT[XBRfQ56T][CrAI2sBc8Ky5])
                                TxIlpyST8Y++;
                            else
                                TxIlpyST8Y = TxIlpyST8Y;
                            yAfYbhl++;
                        }
                    }
                    if (!((xVanulIg7iS - (492 - 491)) != TxIlpyST8Y) && mO3i1wbdo == (sncLYN9g - (106 - 105)))
                        printf ("%d+%d", XBRfQ56T, CrAI2sBc8Ky5);
                    else
                        lGZFnQpe3WVD++;
                    CrAI2sBc8Ky5++;
                }
            }
            XBRfQ56T++;
        }
    }
    if (lGZFnQpe3WVD == xVanulIg7iS * sncLYN9g)
        printf ("No\n");
    return 0;
}

