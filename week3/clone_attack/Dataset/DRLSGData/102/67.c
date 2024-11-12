int main () {
    int k;
    int n;
    int oR2GzlxdJknF;
    double  sm2Ee0r8ngsa;
    double  QKmv7UAhY;
    char wlxzfiN17 [10];
    int l60yexWJMR;
    int EbcmP0QU2;
    int xB782vA;
    double  IQ6rOa7tpSRz [(993 - 953)];
    double  ISf4vR [(440 - 400)];
    cin >> n;
    sm2Ee0r8ngsa = (232 - 232);
    xB782vA = (373 - 373);
    l60yexWJMR = (338 - 338);
    for (k = (271 - 271); n > k; k = k + 1) {
        cin >> wlxzfiN17;
        cin >> QKmv7UAhY;
        if (!('m' != wlxzfiN17[(934 - 934)])) {
            ISf4vR[xB782vA] = QKmv7UAhY;
            xB782vA = xB782vA + 1;
        }
        else {
            if (!('f' != wlxzfiN17[(389 - 389)])) {
                IQ6rOa7tpSRz[l60yexWJMR] = QKmv7UAhY;
                l60yexWJMR = l60yexWJMR + (593 - 592);
            }
        }
    }
    for (oR2GzlxdJknF = 0; l60yexWJMR - (935 - 934) > oR2GzlxdJknF; oR2GzlxdJknF = oR2GzlxdJknF + (202 - 201)) {
        for (EbcmP0QU2 = 0; l60yexWJMR - oR2GzlxdJknF - (103 - 102) > EbcmP0QU2; EbcmP0QU2 = EbcmP0QU2 +1) {
            if (IQ6rOa7tpSRz[EbcmP0QU2] < IQ6rOa7tpSRz[EbcmP0QU2 +(392 - 391)]) {
                sm2Ee0r8ngsa = IQ6rOa7tpSRz[EbcmP0QU2];
                IQ6rOa7tpSRz[EbcmP0QU2] = IQ6rOa7tpSRz[EbcmP0QU2 +(440 - 439)];
                IQ6rOa7tpSRz[EbcmP0QU2 +(194 - 193)] = sm2Ee0r8ngsa;
            }
        }
    }
    for (oR2GzlxdJknF = 0; xB782vA - (262 - 261) > oR2GzlxdJknF; oR2GzlxdJknF = oR2GzlxdJknF + 1) {
        for (EbcmP0QU2 = 0; EbcmP0QU2 < xB782vA - oR2GzlxdJknF - 1; EbcmP0QU2 = EbcmP0QU2 +1) {
            if (ISf4vR[EbcmP0QU2 +1] < ISf4vR[EbcmP0QU2]) {
                sm2Ee0r8ngsa = ISf4vR[EbcmP0QU2];
                ISf4vR[EbcmP0QU2] = ISf4vR[EbcmP0QU2 +1];
                ISf4vR[EbcmP0QU2 +1] = sm2Ee0r8ngsa;
            }
        }
    }
    for (oR2GzlxdJknF = 0; xB782vA > oR2GzlxdJknF; oR2GzlxdJknF = oR2GzlxdJknF + 1) {
        cout << fixed << setprecision ((620 - 618)) << ISf4vR[oR2GzlxdJknF] << " ";
    }
    for (oR2GzlxdJknF = 0; oR2GzlxdJknF < l60yexWJMR; oR2GzlxdJknF = oR2GzlxdJknF + 1) {
        if (oR2GzlxdJknF == l60yexWJMR - 1) {
            cout << fixed << setprecision ((76 - 74)) << IQ6rOa7tpSRz[oR2GzlxdJknF];
        }
        else {
            cout << fixed << setprecision (2) << IQ6rOa7tpSRz[oR2GzlxdJknF] << " ";
        }
    }
    return 0;
}

