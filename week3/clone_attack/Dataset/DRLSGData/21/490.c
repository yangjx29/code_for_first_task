int main () {
    double  sf4n32xoIUt;
    double  Xj2r3Lv;
    int IkSQMfTop;
    int Ob9w1Fhydp;
    int ztCpS4jPYBFZ [Ob9w1Fhydp];
    int vIOHW82kth [Ob9w1Fhydp];
    double  Fa1xZOHCtiV [Ob9w1Fhydp];
    int j;
    int lmPWs3uRFklc;
    cin >> Ob9w1Fhydp;
    Xj2r3Lv = (456 - 456);
    j = (771 - 771);
    lmPWs3uRFklc = (449 - 449);
    {
        IkSQMfTop = 359 - 359;
        while (Ob9w1Fhydp > IkSQMfTop) {
            cin >> ztCpS4jPYBFZ[IkSQMfTop];
            lmPWs3uRFklc = lmPWs3uRFklc + ztCpS4jPYBFZ[IkSQMfTop];
            IkSQMfTop++;
        }
    }
    Xj2r3Lv = (998.0 - 997.0) * lmPWs3uRFklc / Ob9w1Fhydp;
    {
        IkSQMfTop = 958 - 958;
        while (Ob9w1Fhydp > IkSQMfTop) {
            Fa1xZOHCtiV[IkSQMfTop] = fabs (ztCpS4jPYBFZ[IkSQMfTop] - Xj2r3Lv);
            IkSQMfTop++;
        }
    }
    sf4n32xoIUt = Fa1xZOHCtiV[(601 - 600)];
    {
        IkSQMfTop = (455 - 455);
        for (; Ob9w1Fhydp > IkSQMfTop;) {
            if (Fa1xZOHCtiV[IkSQMfTop] > sf4n32xoIUt) {
                sf4n32xoIUt = Fa1xZOHCtiV[IkSQMfTop];
            }
            IkSQMfTop++;
        }
    }
    {
        IkSQMfTop = 0;
        for (; Ob9w1Fhydp > IkSQMfTop;) {
            if (fabs (Fa1xZOHCtiV[IkSQMfTop] - sf4n32xoIUt) < (506.000001 - 506.0)) {
                vIOHW82kth[j] = ztCpS4jPYBFZ[IkSQMfTop];
                j++;
            }
            IkSQMfTop++;
        }
    }
    if (j == 1) {
        cout << vIOHW82kth[0] << endl;
    }
    else {
        {
            IkSQMfTop = 0;
            for (; IkSQMfTop < j - 1;) {
                cout << vIOHW82kth[IkSQMfTop] << ",";
                IkSQMfTop++;
            }
        }
        cout << vIOHW82kth[j - 1];
    }
    return 0;
}

