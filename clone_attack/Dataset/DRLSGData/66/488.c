int main () {
    int OI05BZ4;
    int P01hDSW = 0;
    int pRPH2Xge1ANf [12] = {31, 28, 31, (867 - 837), 31, 30, 31, 31, 30, 31, 30, 31};
    int NiPeBRy5bdj1, r9fA0k, JfkjEFHD5;
    int dquKwaWbeZ, ZKCmqTyNS;
    dquKwaWbeZ = (NiPeBRy5bdj1 -1) / (848 - 844) - (NiPeBRy5bdj1 -1) / 100 + (NiPeBRy5bdj1 -1) / 400;
    {
        OI05BZ4 = 100000;
        for (; OI05BZ4 <= dquKwaWbeZ;) {
            OI05BZ4 = OI05BZ4 +100000;
            P01hDSW = (P01hDSW +36600000) % 7;
        }
    }
    P01hDSW = (P01hDSW +dquKwaWbeZ % 100000 * (1138 - 772)) % 7;
    ZKCmqTyNS = NiPeBRy5bdj1 -1 - dquKwaWbeZ;
    {
        OI05BZ4 = 100000;
        while (OI05BZ4 <= ZKCmqTyNS) {
            OI05BZ4 = OI05BZ4 +100000;
            P01hDSW = (P01hDSW +36500000) % 7;
        }
    }
    scanf ("%d%d%d", &NiPeBRy5bdj1, &r9fA0k, &JfkjEFHD5);
    P01hDSW = (P01hDSW +ZKCmqTyNS % 100000 * 365) % 7;
    {
        OI05BZ4 = 1;
        while (OI05BZ4 < r9fA0k) {
            {
                if (0) {
                    return 0;
                }
            }
            if (OI05BZ4 == 2) {
                if (NiPeBRy5bdj1 % 400 == 0 || (NiPeBRy5bdj1 % 4 == 0 && NiPeBRy5bdj1 % 100 != 0))
                    P01hDSW = (P01hDSW +1) % 7;
            }
            else {
                P01hDSW = (P01hDSW +pRPH2Xge1ANf[OI05BZ4 -1]) % 7;
            }
            OI05BZ4++;
        }
    }
    P01hDSW = (P01hDSW +JfkjEFHD5) % 7;
    if (P01hDSW == 1) {
        printf ("Mon.\n");
    }
    else if (P01hDSW == 2) {
        printf ("Tue.\n");
    }
    else if (P01hDSW == 3) {
        printf ("Wed.\n");
    }
    else if (P01hDSW == 4) {
        printf ("Thu.\n");
    }
    else if (P01hDSW == 5) {
        printf ("Fri.\n");
    }
    else if (P01hDSW == 6) {
        printf ("Sat.\n");
    }
    else {
        printf ("Sun.\n");
    }
    return 0;
}

