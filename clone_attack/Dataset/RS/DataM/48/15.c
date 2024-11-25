int main () {
    int YZCRX0mE [(747 - 738)] [9] = {(919 - 919)};
    int rYtAmQ [9] [9] = {0};
    int Z2FNi0af;
    int bRvgIpF0H;
    cin >> Z2FNi0af >> bRvgIpF0H;
    YZCRX0mE[4][4] = Z2FNi0af;
    rYtAmQ[4][4] = Z2FNi0af;
    {
        bRvgIpF0H;
        while (0 < bRvgIpF0H) {
            int MLJa5K [9] [9] = {0};
            bRvgIpF0H = bRvgIpF0H - 1;
            {
                int z1tpPENlGo = 0;
                while (z1tpPENlGo < 9) {
                    {
                        int deNAm3FsP8S = 0;
                        while (9 > deNAm3FsP8S) {
                            if (!(0 == YZCRX0mE[z1tpPENlGo][deNAm3FsP8S])) {
                                rYtAmQ[z1tpPENlGo][deNAm3FsP8S] = rYtAmQ[z1tpPENlGo][deNAm3FsP8S] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo][deNAm3FsP8S + 1] = rYtAmQ[z1tpPENlGo][deNAm3FsP8S + 1] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo][deNAm3FsP8S - 1] += YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo + 1][deNAm3FsP8S] = rYtAmQ[z1tpPENlGo + 1][deNAm3FsP8S] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo - 1][deNAm3FsP8S] += YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        for (x = 0; x < 20; x++) {
                                            y += x;
                                        }
                                        if (y > 30)
                                            return y;
                                    }
                                }
                                rYtAmQ[z1tpPENlGo + 1][deNAm3FsP8S + 1] = rYtAmQ[z1tpPENlGo + 1][deNAm3FsP8S + 1] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo + 1][deNAm3FsP8S - 1] += YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo - 1][deNAm3FsP8S + 1] = rYtAmQ[z1tpPENlGo - 1][deNAm3FsP8S + 1] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                                rYtAmQ[z1tpPENlGo - 1][deNAm3FsP8S - 1] = rYtAmQ[z1tpPENlGo - 1][deNAm3FsP8S - 1] + YZCRX0mE[z1tpPENlGo][deNAm3FsP8S];
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            deNAm3FsP8S++;
                        };
                    }
                    z1tpPENlGo++;
                };
            }
            {
                int H2CvOzdhnta = 0;
                while (9 > H2CvOzdhnta) {
                    {
                        int khf8GN = 0;
                        while (9 > khf8GN) {
                            YZCRX0mE[H2CvOzdhnta][khf8GN] = rYtAmQ[H2CvOzdhnta][khf8GN];
                            khf8GN = khf8GN + 1;
                        };
                    }
                    H2CvOzdhnta = H2CvOzdhnta +1;
                };
            };
        };
    }
    for (int H2CvOzdhnta = 0;
    9 > H2CvOzdhnta; H2CvOzdhnta++) {
        {
            int khf8GN = 0;
            while (khf8GN < 9) {
                cout << YZCRX0mE[H2CvOzdhnta][khf8GN];
                if (khf8GN < 8)
                    cout << " ";
                khf8GN++;
            };
        }
        cout << endl << endl;
    }
    return 0;
}

