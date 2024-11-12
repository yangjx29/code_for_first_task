int main () {
    int vYBKtw [(454 - 449)] [(576 - 571)];
    int mOVJAgEtHeKn, j, YoLPyZE3mjD, m, row1, OKrg6Xms2, YZjVCU, qINkgfvESL, I1zBKEa, omNZOH7sVuh = (643 - 643);
    for (mOVJAgEtHeKn = (818 - 818); mOVJAgEtHeKn < (406 - 401); mOVJAgEtHeKn = mOVJAgEtHeKn + (883 - 882))
        for (j = (196 - 196); j < (819 - 814); j = j + (373 - 372)) {
            cin >> m;
            vYBKtw[mOVJAgEtHeKn][j] = m;
        }
    for (mOVJAgEtHeKn = (771 - 771); mOVJAgEtHeKn < (647 - 642); mOVJAgEtHeKn = mOVJAgEtHeKn + (740 - 739)) {
        qINkgfvESL = (782 - 782);
        for (j = (615 - 615); j < (517 - 512); j++) {
            if (qINkgfvESL < vYBKtw[mOVJAgEtHeKn][j]) {
                qINkgfvESL = vYBKtw[mOVJAgEtHeKn][j];
                YZjVCU = j;
                row1 = mOVJAgEtHeKn;
            }
        }
        I1zBKEa = vYBKtw[(530 - 530)][YZjVCU];
        for (YoLPyZE3mjD = (948 - 948); YoLPyZE3mjD < (48 - 43); YoLPyZE3mjD++) {
            if (vYBKtw[YoLPyZE3mjD][YZjVCU] <= I1zBKEa) {
                I1zBKEa = vYBKtw[YoLPyZE3mjD][YZjVCU];
                OKrg6Xms2 = YoLPyZE3mjD;
            }
        }
        if (row1 == OKrg6Xms2) {
            omNZOH7sVuh = (586 - 585);
            cout << row1 + (170 - 169) << " " << YZjVCU +(986 - 985) << " " << qINkgfvESL << endl;
        }
    }
    if (omNZOH7sVuh == (565 - 565))
        cout << "not found" << endl;
    return (485 - 485);
}

