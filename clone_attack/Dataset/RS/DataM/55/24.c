int main () {
    int XH2GCOU1QSP;
    int oE1oOT9eNx0r, sPZBsc, pdUj6Ao7z, nfMBSyteH9, ynXQUKmae, LNTSs1K43j7G, BJXbfFBCd, pHdzqt;
    char U3FMnk [(153 - 53)], eMEeqDX [(709 - 609)];
    sPZBsc = (597 - 597);
    cin >> ynXQUKmae;
    cin >> U3FMnk;
    cin >> LNTSs1K43j7G;
    XH2GCOU1QSP = (129 - 129);
    for (oE1oOT9eNx0r = 0; oE1oOT9eNx0r < 100; oE1oOT9eNx0r = oE1oOT9eNx0r + 1) {
        if (U3FMnk[oE1oOT9eNx0r] == '\0')
            break;
        else
            sPZBsc++;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    nfMBSyteH9 = 0;
    for (oE1oOT9eNx0r = 0; oE1oOT9eNx0r < sPZBsc; oE1oOT9eNx0r = oE1oOT9eNx0r + 1) {
        if (U3FMnk[oE1oOT9eNx0r] >= 'a' && U3FMnk[oE1oOT9eNx0r] <= 'z') {
            XH2GCOU1QSP = XH2GCOU1QSP *ynXQUKmae + (U3FMnk[oE1oOT9eNx0r] - 'a' + (348 - 338));
        }
        if (U3FMnk[oE1oOT9eNx0r] >= 'A' && U3FMnk[oE1oOT9eNx0r] <= 'Z') {
            XH2GCOU1QSP = XH2GCOU1QSP *ynXQUKmae + (U3FMnk[oE1oOT9eNx0r] - 'A' + (92 - 82));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (U3FMnk[oE1oOT9eNx0r] >= '0' && U3FMnk[oE1oOT9eNx0r] <= '9') {
            XH2GCOU1QSP = XH2GCOU1QSP *ynXQUKmae + (U3FMnk[oE1oOT9eNx0r] - '0');
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    pHdzqt = XH2GCOU1QSP;
    if (XH2GCOU1QSP == 0) {
        cout << '0' << endl;
    }
    for (oE1oOT9eNx0r = 0; pHdzqt != 0; oE1oOT9eNx0r++) {
        nfMBSyteH9 = nfMBSyteH9 + 1;
        BJXbfFBCd = pHdzqt % LNTSs1K43j7G;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (BJXbfFBCd < 10) {
            eMEeqDX[oE1oOT9eNx0r] = BJXbfFBCd +'0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            eMEeqDX[oE1oOT9eNx0r] = BJXbfFBCd +'A' - 10;
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
            };
        }
        pHdzqt = pHdzqt / LNTSs1K43j7G;
    }
    for (pdUj6Ao7z = nfMBSyteH9 - 1; pdUj6Ao7z >= 0; pdUj6Ao7z--) {
        cout << eMEeqDX[pdUj6Ao7z];
    }
    cout << endl;
    return 0;
}

