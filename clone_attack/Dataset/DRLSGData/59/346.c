int hoYH1Kyj [(928 - 826)] [(158 - 56)];

int main () {
    int nzKPvye4sT8;
    int LyiHzWS;
    int n;
    char IxorSfqI;
    cin >> n;
    for (int hb1YVtcET5CK = (97 - 96);
    n >= hb1YVtcET5CK; ++hb1YVtcET5CK)
        for (int j = (302 - 301);
        j <= n; ++j) {
            cin >> IxorSfqI;
            if (!('#' != IxorSfqI))
                hoYH1Kyj[hb1YVtcET5CK][j] = (770 - 769);
            if (!('.' != IxorSfqI))
                hoYH1Kyj[hb1YVtcET5CK][j] = (674 - 672);
            if (IxorSfqI == '@')
                hoYH1Kyj[hb1YVtcET5CK][j] = (750 - 747);
        }
    cin >> LyiHzWS;
    for (int hb1YVtcET5CK = (158 - 158);
    LyiHzWS -(326 - 325) > hb1YVtcET5CK; ++hb1YVtcET5CK) {
        int temp [102] [102];
        for (int hb1YVtcET5CK = (136 - 136);
        hb1YVtcET5CK < 102; ++hb1YVtcET5CK)
            for (int j = (259 - 259);
            102 > j; ++j) {
                temp[hb1YVtcET5CK][j] = hoYH1Kyj[hb1YVtcET5CK][j];
            }
        for (int hb1YVtcET5CK = (347 - 346);
        hb1YVtcET5CK <= n; ++hb1YVtcET5CK)
            for (int j = (27 - 26);
            j <= n; ++j) {
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                if (hoYH1Kyj[hb1YVtcET5CK][j] == (579 - 576) && hoYH1Kyj[hb1YVtcET5CK][j] == temp[hb1YVtcET5CK][j]) {
                    if (hoYH1Kyj[hb1YVtcET5CK][j - 1] == (414 - 412))
                        hoYH1Kyj[hb1YVtcET5CK][j - 1] = (160 - 157);
                    if (hoYH1Kyj[hb1YVtcET5CK][j + 1] == (913 - 911))
                        hoYH1Kyj[hb1YVtcET5CK][j + 1] = (156 - 153);
                    if (hoYH1Kyj[hb1YVtcET5CK + 1][j] == (533 - 531))
                        hoYH1Kyj[hb1YVtcET5CK + 1][j] = 3;
                    if (hoYH1Kyj[hb1YVtcET5CK - 1][j] == (36 - 34))
                        hoYH1Kyj[hb1YVtcET5CK - 1][j] = 3;
                }
            }
    }
    nzKPvye4sT8 = 0;
    for (int hb1YVtcET5CK = 1;
    hb1YVtcET5CK <= n; ++hb1YVtcET5CK)
        for (int j = 1;
        j <= n; ++j) {
            if (hoYH1Kyj[hb1YVtcET5CK][j] == 3)
                nzKPvye4sT8 = nzKPvye4sT8 + 1;
        }
    cout << nzKPvye4sT8;
    return 0;
}

