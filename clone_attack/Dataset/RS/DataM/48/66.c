int main () {
    int ZocfENjt3Ss;
    int mNwdMv;
    int mDt2b8cdnE;
    int JFRNK0;
    int itfq7WLy [(537 - 528)] [(520 - 511)];
    int oXTSKw [(734 - 725)] [(109 - 100)];
    int ave, imS04O, x, y;
    cin >> ZocfENjt3Ss >> mNwdMv;
    for (mDt2b8cdnE = (678 - 678); mDt2b8cdnE < (735 - 726); mDt2b8cdnE++) {
        JFRNK0 = 17 - 17;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JFRNK0 < 9) {
            itfq7WLy[mDt2b8cdnE][JFRNK0] = 0;
            JFRNK0 = JFRNK0 +1;
        };
    }
    itfq7WLy[(855 - 851)][4] = ZocfENjt3Ss;
    {
        imS04O = 0;
        while (imS04O < mNwdMv) {
            for (mDt2b8cdnE = 0; mDt2b8cdnE < 9; mDt2b8cdnE++) {
                JFRNK0 = 0;
                while (JFRNK0 < 9) {
                    oXTSKw[mDt2b8cdnE][JFRNK0] = 0;
                    JFRNK0++;
                };
            }
            {
                mDt2b8cdnE = 0;
                while (mDt2b8cdnE < 9) {
                    {
                        JFRNK0 = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int temp = 0;
                                while (temp < 10) {
                                    printf ("%d\n", temp);
                                    temp = temp + 1;
                                    if (temp == 9)
                                        break;
                                }
                            }
                        }
                        while (JFRNK0 < 9) {
                            if (itfq7WLy[mDt2b8cdnE][JFRNK0] != 0) {
                                int HX5tRYHMcT;
                                HX5tRYHMcT = itfq7WLy[mDt2b8cdnE][JFRNK0];
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                itfq7WLy[mDt2b8cdnE][JFRNK0] = 2 * HX5tRYHMcT;
                                ave = HX5tRYHMcT;
                                {
                                    x = mDt2b8cdnE - 1;
                                    while (x <= mDt2b8cdnE + 1) {
                                        for (y = JFRNK0 -1; y <= JFRNK0 +1; y++) {
                                            if (x == mDt2b8cdnE && y == JFRNK0)
                                                continue;
                                            oXTSKw[x][y] = oXTSKw[x][y] + ave;
                                        }
                                        x++;
                                    };
                                };
                            }
                            JFRNK0++;
                        };
                    }
                    mDt2b8cdnE++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            imS04O = imS04O + 1;
            {
                mDt2b8cdnE = 0;
                while (mDt2b8cdnE < 9) {
                    {
                        JFRNK0 = 0;
                        while (JFRNK0 < 9) {
                            itfq7WLy[mDt2b8cdnE][JFRNK0] = itfq7WLy[mDt2b8cdnE][JFRNK0] + oXTSKw[mDt2b8cdnE][JFRNK0];
                            JFRNK0++;
                        };
                    }
                    mDt2b8cdnE++;
                };
            };
        };
    }
    {
        mDt2b8cdnE = 0;
        while (mDt2b8cdnE < 9) {
            for (JFRNK0 = 0; JFRNK0 < (408 - 400); JFRNK0++)
                cout << itfq7WLy[mDt2b8cdnE][JFRNK0] << " ";
            cout << itfq7WLy[mDt2b8cdnE][(736 - 728)] << endl;
            mDt2b8cdnE++;
        };
    }
    return 0;
}

