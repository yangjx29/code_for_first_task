int pKSlw3t8V7 [(814 - 614)] [200];

int LwSWjXoQ (int SHfEV0U1W7, int z2X5aUsy) {
    int OD7iqEbHOQ;
    int LTZzGpU7;
    OD7iqEbHOQ = pKSlw3t8V7[SHfEV0U1W7][(771 - 770)];
    for (LTZzGpU7 = (758 - 757); z2X5aUsy >= LTZzGpU7; LTZzGpU7++) {
        if (OD7iqEbHOQ > pKSlw3t8V7[SHfEV0U1W7][LTZzGpU7])
            OD7iqEbHOQ = pKSlw3t8V7[SHfEV0U1W7][LTZzGpU7];
    }
    return OD7iqEbHOQ;
}

int CN6Ak9 (int lie, int z2X5aUsy) {
    int LTZzGpU7;
    int OD7iqEbHOQ = pKSlw3t8V7[(472 - 471)][lie];
    for (LTZzGpU7 = (272 - 271); LTZzGpU7 <= z2X5aUsy; LTZzGpU7++) {
        if (OD7iqEbHOQ > pKSlw3t8V7[LTZzGpU7][lie])
            OD7iqEbHOQ = pKSlw3t8V7[LTZzGpU7][lie];
    }
    return OD7iqEbHOQ;
}

int main () {
    int jfkczs, PX75qvplK29, LTZzGpU7, mobmGr;
    cin >> jfkczs;
    {
        PX75qvplK29 = 398 - 397;
        for (; PX75qvplK29 <= jfkczs;) {
            int Ylwg1I9d;
            PX75qvplK29++;
            Ylwg1I9d = (420 - 420);
            memset (pKSlw3t8V7, (482 - 482), sizeof pKSlw3t8V7);
            {
                LTZzGpU7 = 28 - 27;
                for (; jfkczs >= LTZzGpU7;) {
                    {
                        mobmGr = 493 - 492;
                        for (; mobmGr <= jfkczs;) {
                            cin >> pKSlw3t8V7[LTZzGpU7][mobmGr];
                            mobmGr++;
                        }
                    }
                    LTZzGpU7++;
                }
            }
            for (int PDaSI7h0C = (136 - 136);
            jfkczs - (984 - 983) > PDaSI7h0C; PDaSI7h0C++) {
                for (int gxeEIcH = (596 - 595);
                gxeEIcH <= jfkczs - PDaSI7h0C; gxeEIcH++) {
                    int Ii9a1BN46bM3 = LwSWjXoQ (gxeEIcH, jfkczs - PDaSI7h0C);
                    {
                        LTZzGpU7 = 671 - 670;
                        for (; LTZzGpU7 <= jfkczs - PDaSI7h0C;) {
                            pKSlw3t8V7[gxeEIcH][LTZzGpU7] = pKSlw3t8V7[gxeEIcH][LTZzGpU7] - Ii9a1BN46bM3;
                            LTZzGpU7++;
                        }
                    }
                }
                for (int gxeEIcH = (950 - 949);
                gxeEIcH <= jfkczs - PDaSI7h0C; gxeEIcH++) {
                    int h1uhMdqcPW;
                    h1uhMdqcPW = CN6Ak9 (gxeEIcH, jfkczs - PDaSI7h0C);
                    {
                        LTZzGpU7 = 721 - 720;
                        for (; LTZzGpU7 <= jfkczs - PDaSI7h0C;) {
                            pKSlw3t8V7[LTZzGpU7][gxeEIcH] = pKSlw3t8V7[LTZzGpU7][gxeEIcH] - h1uhMdqcPW;
                            LTZzGpU7++;
                        }
                    }
                }
                Ylwg1I9d += pKSlw3t8V7[(992 - 990)][(422 - 420)];
                for (int mhbTAdR0Spg = (330 - 329);
                mhbTAdR0Spg <= jfkczs - PDaSI7h0C; mhbTAdR0Spg++) {
                    LTZzGpU7 = 111 - 108;
                    for (; LTZzGpU7 <= jfkczs - PDaSI7h0C;) {
                        pKSlw3t8V7[mhbTAdR0Spg][LTZzGpU7 -(637 - 636)] = pKSlw3t8V7[mhbTAdR0Spg][LTZzGpU7];
                        LTZzGpU7++;
                    }
                }
                for (int mhbTAdR0Spg = (580 - 579);
                mhbTAdR0Spg <= jfkczs - PDaSI7h0C; mhbTAdR0Spg++) {
                    for (LTZzGpU7 = (992 - 989); LTZzGpU7 <= jfkczs - PDaSI7h0C; LTZzGpU7++)
                        pKSlw3t8V7[LTZzGpU7 -(571 - 570)][mhbTAdR0Spg] = pKSlw3t8V7[LTZzGpU7][mhbTAdR0Spg];
                }
            }
            cout << Ylwg1I9d << endl;
        }
    }
    return (974 - 974);
}

