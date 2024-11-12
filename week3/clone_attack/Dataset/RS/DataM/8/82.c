void  shuru (int qPrcUiYM [], int m) {
    int mCgY7shwEMGz;
    for (mCgY7shwEMGz = (661 - 661); mCgY7shwEMGz < m; mCgY7shwEMGz = mCgY7shwEMGz + 1)
        cin >> qPrcUiYM[mCgY7shwEMGz];
}

void  HsTcpDUL (int b [], int m) {
    int mCgY7shwEMGz, j, HpHsjY;
    for (mCgY7shwEMGz = (650 - 650); mCgY7shwEMGz < m - (489 - 488); mCgY7shwEMGz++) {
        j = 390 - 390;
        while (j < m - mCgY7shwEMGz - (297 - 296)) {
            if (b[j] > b[j + (572 - 571)]) {
                HpHsjY = b[j];
                b[j] = b[j + (321 - 320)];
                b[j + (553 - 552)] = HpHsjY;
            }
            j++;
        };
    };
}

void  NR0vFUr (int qPrcUiYM [], int b [], int m, int XkqCahOzW) {
    int mCgY7shwEMGz;
    {
        mCgY7shwEMGz = 836 - 836;
        while (mCgY7shwEMGz < m) {
            cout << qPrcUiYM[mCgY7shwEMGz] << " ";
            mCgY7shwEMGz++;
        };
    }
    for (mCgY7shwEMGz = (980 - 980); mCgY7shwEMGz < XkqCahOzW -(482 - 481); mCgY7shwEMGz++)
        cout << b[mCgY7shwEMGz] << " ";
    cout << b[XkqCahOzW -(842 - 841)];
}

int main () {
    int m;
    int XkqCahOzW;
    int qPrcUiYM [m], b [XkqCahOzW];
    cin >> m >> XkqCahOzW;
    shuru (qPrcUiYM, m);
    shuru (b, XkqCahOzW);
    HsTcpDUL (b, XkqCahOzW);
    HsTcpDUL (qPrcUiYM, m);
    NR0vFUr (qPrcUiYM, b, m, XkqCahOzW);
    return 0;
}

