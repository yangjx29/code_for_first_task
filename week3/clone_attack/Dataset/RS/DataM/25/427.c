int main () {
    int g9wqnc;
    int i;
    int gMgaVDR8;
    int DWPfcJzpS [(357 - 257)] = {(429 - 429)};
    int temp [(705 - 605)] = {(393 - 393)};
    DWPfcJzpS[99] = (295 - 294);
    cin >> g9wqnc;
    for (i = (610 - 609); g9wqnc >= i; i = i + 1) {
        for (gMgaVDR8 = 99; gMgaVDR8 >= 0; gMgaVDR8 = gMgaVDR8 - 1) {
            if (!(0 == gMgaVDR8))
                temp[gMgaVDR8 - (934 - 933)] = (DWPfcJzpS[gMgaVDR8] * 2 + temp[gMgaVDR8]) / 10;
            DWPfcJzpS[gMgaVDR8] = (DWPfcJzpS[gMgaVDR8] * 2 + temp[gMgaVDR8]) % 10;
        };
    }
    for (i = 0; i < 100; i = i + 1) {
        if (DWPfcJzpS[i] != 0)
            break;
    }
    {
        gMgaVDR8 = i;
        while (gMgaVDR8 < 100) {
            cout << DWPfcJzpS[gMgaVDR8];
            gMgaVDR8 = gMgaVDR8 + 1;
        };
    }
    return 0;
}

