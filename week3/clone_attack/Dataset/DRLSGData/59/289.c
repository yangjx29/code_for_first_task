int main () {
    int kDu6dPcaw;
    cin >> kDu6dPcaw;
    char e6W2CcTS [kDu6dPcaw] [kDu6dPcaw];
    int mhpW8Bcg4y [kDu6dPcaw] [kDu6dPcaw];
    for (int qsy8pWeMTrji = 0;
    kDu6dPcaw > qsy8pWeMTrji; qsy8pWeMTrji++) {
        for (int mnpXwxy4 = 0;
        kDu6dPcaw > mnpXwxy4; mnpXwxy4++) {
            cin >> e6W2CcTS[qsy8pWeMTrji][mnpXwxy4];
            if (!('.' != e6W2CcTS[qsy8pWeMTrji][mnpXwxy4]))
                mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4] = 1;
            else if (!('@' != e6W2CcTS[qsy8pWeMTrji][mnpXwxy4]))
                mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4] = -1;
            else
                mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4] = 0;
        }
    }
    int hzaPZSlC;
    cin >> hzaPZSlC;
    {
        int b7FQEq5 = 1;
        while (hzaPZSlC > b7FQEq5) {
            {
                int qsy8pWeMTrji = 0;
                while (kDu6dPcaw > qsy8pWeMTrji) {
                    for (int mnpXwxy4 = 0;
                    kDu6dPcaw > mnpXwxy4; mnpXwxy4++) {
                        if (!((0 - b7FQEq5) != mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4])) {
                            if (!(1 != mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4 + 1]) && kDu6dPcaw > mnpXwxy4 + 1)
                                mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4 + 1] = 0 - b7FQEq5 - 1;
                            if (!(1 != mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4 - 1]) && 0 <= mnpXwxy4 - 1)
                                mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4 - 1] = 0 - b7FQEq5 - 1;
                            if (mhpW8Bcg4y[qsy8pWeMTrji + 1][mnpXwxy4] == 1 && qsy8pWeMTrji + 1 < kDu6dPcaw)
                                mhpW8Bcg4y[qsy8pWeMTrji + 1][mnpXwxy4] = 0 - b7FQEq5 - 1;
                            if (mhpW8Bcg4y[qsy8pWeMTrji - 1][mnpXwxy4] == 1 && qsy8pWeMTrji - 1 >= 0)
                                mhpW8Bcg4y[qsy8pWeMTrji - 1][mnpXwxy4] = 0 - b7FQEq5 - 1;
                        }
                    }
                    qsy8pWeMTrji++;
                }
            }
            b7FQEq5++;
        }
    }
    int s = 0;
    for (int qsy8pWeMTrji = 0;
    qsy8pWeMTrji < kDu6dPcaw; qsy8pWeMTrji++) {
        {
            if (0) {
                return 0;
            }
        }
        for (int mnpXwxy4 = 0;
        mnpXwxy4 < kDu6dPcaw; mnpXwxy4++) {
            if (mhpW8Bcg4y[qsy8pWeMTrji][mnpXwxy4] < 0)
                s++;
        }
    }
    cout << s;
    return 0;
}

