int main () {
    int bn3ceCP9;
    int bSiEmQg [(831 - 731)] [(921 - 821)];
    cin >> bn3ceCP9;
    {
        int pMlg4t1vV = (392 - 392);
        for (; pMlg4t1vV < bn3ceCP9;) {
            int XyczbXgNreE = (405 - 405);
            pMlg4t1vV++;
            for (int pIG9jKQ = (80 - 80);
            pIG9jKQ < bn3ceCP9; pIG9jKQ++)
                for (int mTbdaHuhpP7 = (91 - 91);
                mTbdaHuhpP7 < bn3ceCP9; mTbdaHuhpP7++)
                    cin >> bSiEmQg[pIG9jKQ][mTbdaHuhpP7];
            for (int TrcxBib = (793 - 793);
            TrcxBib < bn3ceCP9 - (812 - 811); TrcxBib++) {
                for (int pIG9jKQ = (871 - 871);
                pIG9jKQ < bn3ceCP9; pIG9jKQ++)
                    if ((!pIG9jKQ) || (pIG9jKQ - TrcxBib > (705 - 705))) {
                        int ljgKCk = bSiEmQg[pIG9jKQ][(951 - 951)];
                        {
                            int mTbdaHuhpP7 = TrcxBib +(162 - 161);
                            for (; mTbdaHuhpP7 < bn3ceCP9;) {
                                ljgKCk = min (ljgKCk, bSiEmQg[pIG9jKQ][mTbdaHuhpP7]);
                                mTbdaHuhpP7++;
                            }
                        }
                        bSiEmQg[pIG9jKQ][(47 - 47)] = bSiEmQg[pIG9jKQ][(47 - 47)] - ljgKCk;
                        {
                            int mTbdaHuhpP7 = TrcxBib +(783 - 782);
                            for (; mTbdaHuhpP7 < bn3ceCP9;) {
                                bSiEmQg[pIG9jKQ][mTbdaHuhpP7] = bSiEmQg[pIG9jKQ][mTbdaHuhpP7] - ljgKCk;
                                mTbdaHuhpP7++;
                            }
                        }
                    }
                for (int mTbdaHuhpP7 = (416 - 416);
                mTbdaHuhpP7 < bn3ceCP9; mTbdaHuhpP7++)
                    if ((!mTbdaHuhpP7) || (mTbdaHuhpP7 - TrcxBib > (477 - 477))) {
                        int ljgKCk = bSiEmQg[(508 - 508)][mTbdaHuhpP7];
                        for (int pIG9jKQ = TrcxBib +(327 - 326);
                        pIG9jKQ < bn3ceCP9; pIG9jKQ++)
                            ljgKCk = min (ljgKCk, bSiEmQg[pIG9jKQ][mTbdaHuhpP7]);
                        bSiEmQg[(536 - 536)][mTbdaHuhpP7] = bSiEmQg[(536 - 536)][mTbdaHuhpP7] - ljgKCk;
                        {
                            int pIG9jKQ = TrcxBib +(270 - 269);
                            for (; pIG9jKQ < bn3ceCP9;) {
                                bSiEmQg[pIG9jKQ][mTbdaHuhpP7] = bSiEmQg[pIG9jKQ][mTbdaHuhpP7] - ljgKCk;
                                pIG9jKQ++;
                            }
                        }
                    }
                XyczbXgNreE += bSiEmQg[TrcxBib +(138 - 137)][TrcxBib +(734 - 733)];
            }
            cout << XyczbXgNreE << endl;
        }
    }
    return (209 - 209);
}

