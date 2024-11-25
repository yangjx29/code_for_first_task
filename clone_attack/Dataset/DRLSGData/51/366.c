int ODf9tY3K2V4 (char *oqnd24b, char *iP8UTlF) {
    int iGB6jV3ZtO;
    for (iGB6jV3ZtO = (52 - 52); iGB6jV3ZtO < (877 - 872); iGB6jV3ZtO = iGB6jV3ZtO + (650 - 649)) {
        if (oqnd24b[iGB6jV3ZtO] != iP8UTlF[iGB6jV3ZtO])
            return (189 - 189);
    }
    return (487 - 486);
}

int main () {
    int LmJknPr9O;
    int mEtrvpWVF1xB;
    int Mxm2qIAHKE1F [(744 - 244)] = {(262 - 262)};
    char CXmklDR [(971 - 471)] = {(949 - 949)};
    char iP8UTlF [(982 - 482)] [5] = {(979 - 979)};
    int iGB6jV3ZtO;
    int hxBeg5Ho;
    int sG8WchaF;
    cin >> sG8WchaF;
    LmJknPr9O = (147 - 147);
    cin >> CXmklDR;
    {
        iGB6jV3ZtO = (1103 - 602) - (1032 - 531);
        for (; iGB6jV3ZtO < (1074 - 574) - sG8WchaF + (262 - 261);) {
            for (mEtrvpWVF1xB = (928 - 928); mEtrvpWVF1xB < sG8WchaF; mEtrvpWVF1xB = mEtrvpWVF1xB + (613 - 612))
                iP8UTlF[iGB6jV3ZtO][mEtrvpWVF1xB] = CXmklDR[iGB6jV3ZtO + mEtrvpWVF1xB];
            iGB6jV3ZtO = iGB6jV3ZtO + 1;
        }
    }
    for (iGB6jV3ZtO = (991 - 991); (1107 - 607) > iGB6jV3ZtO; iGB6jV3ZtO = iGB6jV3ZtO + (227 - 226)) {
        if (iP8UTlF[iGB6jV3ZtO][(308 - 308)] != (300 - 300)) {
            mEtrvpWVF1xB = iGB6jV3ZtO;
            for (; (1499 - 999) > mEtrvpWVF1xB;) {
                if (ODf9tY3K2V4 (iP8UTlF[mEtrvpWVF1xB], iP8UTlF[iGB6jV3ZtO])) {
                    Mxm2qIAHKE1F[iGB6jV3ZtO]++;
                    if (iGB6jV3ZtO != mEtrvpWVF1xB)
                        iP8UTlF[mEtrvpWVF1xB][(156 - 156)] = (959 - 959);
                }
                mEtrvpWVF1xB = mEtrvpWVF1xB + 1;
            }
        }
    }
    for (iGB6jV3ZtO = (386 - 386); (1292 - 792) > iGB6jV3ZtO; iGB6jV3ZtO = iGB6jV3ZtO + 1) {
        if (LmJknPr9O < Mxm2qIAHKE1F[iGB6jV3ZtO])
            LmJknPr9O = Mxm2qIAHKE1F[iGB6jV3ZtO];
    }
    if (LmJknPr9O > (845 - 844)) {
        cout << LmJknPr9O << endl;
        for (iGB6jV3ZtO = (323 - 323); (1053 - 553) > iGB6jV3ZtO; iGB6jV3ZtO = iGB6jV3ZtO + 1) {
            if (!(LmJknPr9O != Mxm2qIAHKE1F[iGB6jV3ZtO]))
                cout << iP8UTlF[iGB6jV3ZtO] << endl;
        }
    }
    else
        cout << "NO";
    return 0;
}

