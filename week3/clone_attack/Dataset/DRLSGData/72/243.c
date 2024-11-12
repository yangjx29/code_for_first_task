int main () {
    int GAIQYCvzMhJ;
    int bXm3pwPD9;
    int pn3pLXJukRMP;
    int Bu2He9G [22] [22] = {0};
    int siLHWk5Yqhb [400] [2];
    int Gd3ALsJh6;
    int H3jIPdxh;
    Gd3ALsJh6 = 0;
    cin >> H3jIPdxh >> bXm3pwPD9;
    {
        pn3pLXJukRMP = 1;
        while (pn3pLXJukRMP <= H3jIPdxh) {
            {
                GAIQYCvzMhJ = 1;
                while (GAIQYCvzMhJ <= bXm3pwPD9) {
                    cin >> Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ];
                    GAIQYCvzMhJ++;
                }
            }
            pn3pLXJukRMP = pn3pLXJukRMP + 1;
        }
    }
    {
        pn3pLXJukRMP = 1;
        while (pn3pLXJukRMP <= H3jIPdxh) {
            {
                GAIQYCvzMhJ = 1;
                while (GAIQYCvzMhJ <= bXm3pwPD9) {
                    if ((Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ] >= Bu2He9G[pn3pLXJukRMP - 1][GAIQYCvzMhJ]) && (Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ] >= Bu2He9G[pn3pLXJukRMP + 1][GAIQYCvzMhJ]) && (Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ] >= Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ -1]) && (Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ] >= Bu2He9G[pn3pLXJukRMP][GAIQYCvzMhJ +1])) {
                        siLHWk5Yqhb[Gd3ALsJh6][0] = pn3pLXJukRMP - 1;
                        siLHWk5Yqhb[Gd3ALsJh6][1] = GAIQYCvzMhJ -1;
                        Gd3ALsJh6++;
                    }
                    GAIQYCvzMhJ++;
                }
            }
            pn3pLXJukRMP = pn3pLXJukRMP + 1;
        }
    }
    {
        pn3pLXJukRMP = 0;
        while (pn3pLXJukRMP < Gd3ALsJh6 -1) {
            {
                GAIQYCvzMhJ = 0;
                while (GAIQYCvzMhJ < Gd3ALsJh6 -pn3pLXJukRMP - 1) {
                    pn3pLXJukRMP = pn3pLXJukRMP + 1;
                    if (siLHWk5Yqhb[GAIQYCvzMhJ][1] > siLHWk5Yqhb[GAIQYCvzMhJ +1][1]) {
                        int Rc3aY5iN2;
                        int ShjSHC;
                        Rc3aY5iN2 = siLHWk5Yqhb[GAIQYCvzMhJ][0];
                        siLHWk5Yqhb[GAIQYCvzMhJ][0] = siLHWk5Yqhb[GAIQYCvzMhJ +1][0];
                        siLHWk5Yqhb[GAIQYCvzMhJ +1][0] = Rc3aY5iN2;
                        ShjSHC = siLHWk5Yqhb[GAIQYCvzMhJ][1];
                        siLHWk5Yqhb[GAIQYCvzMhJ][1] = siLHWk5Yqhb[GAIQYCvzMhJ +1][1];
                        siLHWk5Yqhb[GAIQYCvzMhJ +1][1] = ShjSHC;
                    }
                }
            }
            pn3pLXJukRMP++;
        }
    }
    {
        pn3pLXJukRMP = 0;
        while (pn3pLXJukRMP < Gd3ALsJh6 -1) {
            {
                GAIQYCvzMhJ = 0;
                while (GAIQYCvzMhJ < Gd3ALsJh6 -1 - pn3pLXJukRMP) {
                    if (siLHWk5Yqhb[GAIQYCvzMhJ][0] > siLHWk5Yqhb[GAIQYCvzMhJ +1][0]) {
                        int DWcBNH1O2;
                        int WQTUj0;
                        DWcBNH1O2 = siLHWk5Yqhb[GAIQYCvzMhJ][0];
                        siLHWk5Yqhb[GAIQYCvzMhJ][0] = siLHWk5Yqhb[GAIQYCvzMhJ +1][0];
                        siLHWk5Yqhb[GAIQYCvzMhJ +1][0] = DWcBNH1O2;
                        WQTUj0 = siLHWk5Yqhb[GAIQYCvzMhJ][1];
                        siLHWk5Yqhb[GAIQYCvzMhJ][1] = siLHWk5Yqhb[GAIQYCvzMhJ +1][1];
                        siLHWk5Yqhb[GAIQYCvzMhJ +1][1] = WQTUj0;
                    }
                    GAIQYCvzMhJ++;
                }
            }
            pn3pLXJukRMP++;
        }
    }
    {
        pn3pLXJukRMP = 0;
        while (pn3pLXJukRMP < Gd3ALsJh6) {
            cout << siLHWk5Yqhb[pn3pLXJukRMP][0] << " " << siLHWk5Yqhb[pn3pLXJukRMP][1] << endl;
            pn3pLXJukRMP++;
        }
    }
    return 0;
}

