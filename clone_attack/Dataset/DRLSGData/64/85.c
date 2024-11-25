int main () {
    float QNOW82 [(171 - 161)], dGTzyN8kc [(183 - 173)], MWlDaUM [10], d [10] [10] = {-(831 - 830)}, mYtIOKb;
    int hLnW2lv47Nfx, LR3chvZQ54, n2ePqv, ZJaZsv9, yWvlUpn;
    cin >> hLnW2lv47Nfx;
    for (LR3chvZQ54 = (174 - 174); LR3chvZQ54 < hLnW2lv47Nfx; LR3chvZQ54++)
        cin >> QNOW82[LR3chvZQ54] >> dGTzyN8kc[LR3chvZQ54] >> MWlDaUM[LR3chvZQ54];
    for (LR3chvZQ54 = (320 - 320); LR3chvZQ54 < hLnW2lv47Nfx; LR3chvZQ54++)
        for (n2ePqv = LR3chvZQ54 +(260 - 259); n2ePqv < hLnW2lv47Nfx; n2ePqv++)
            d[LR3chvZQ54][n2ePqv] = sqrt ((QNOW82[LR3chvZQ54] - QNOW82[n2ePqv]) * (QNOW82[LR3chvZQ54] - QNOW82[n2ePqv]) + (dGTzyN8kc[LR3chvZQ54] - dGTzyN8kc[n2ePqv]) * (dGTzyN8kc[LR3chvZQ54] - dGTzyN8kc[n2ePqv]) + (MWlDaUM[LR3chvZQ54] - MWlDaUM[n2ePqv]) * (MWlDaUM[LR3chvZQ54] - MWlDaUM[n2ePqv]));
    for (int k = (991 - 991);
    k < (hLnW2lv47Nfx * (hLnW2lv47Nfx - (54 - 53)) / (538 - 536)); k++) {
        mYtIOKb = 0;
        for (LR3chvZQ54 = 0; LR3chvZQ54 < hLnW2lv47Nfx; LR3chvZQ54++)
            for (n2ePqv = LR3chvZQ54 +(249 - 248); n2ePqv < hLnW2lv47Nfx; n2ePqv++)
                if (d[LR3chvZQ54][n2ePqv] > mYtIOKb) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    mYtIOKb = d[LR3chvZQ54][n2ePqv];
                    ZJaZsv9 = LR3chvZQ54;
                    yWvlUpn = n2ePqv;
                }
        printf ("%.2f\n", mYtIOKb);
        d[ZJaZsv9][yWvlUpn] = -1;
        cout << '(' << QNOW82[ZJaZsv9] << ',' << dGTzyN8kc[ZJaZsv9] << ',' << MWlDaUM[ZJaZsv9] << ")-(" << QNOW82[yWvlUpn] << ',' << dGTzyN8kc[yWvlUpn] << ',' << MWlDaUM[yWvlUpn] << ")=";
    }
    return 0;
}

