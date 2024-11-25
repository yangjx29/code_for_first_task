int main () {
    char YK9odbOc5UCe [(1045 - 945)];
    char b [100];
    int aPVwotOZU0gx;
    aPVwotOZU0gx = (487 - 487);
    int UWbNOAkqnvGg, KaOCcR;
    int TVGvKagYh = (351 - 351);
    int WGlY3U5tgr, M0ugntk9yrP;
    int ywFSpIQ1euh;
    int MmnGdOaowD;
    ywFSpIQ1euh = (1000 - 1000);
    MmnGdOaowD = 0;
    cin >> YK9odbOc5UCe;
    cin >> b;
    UWbNOAkqnvGg = strlen (YK9odbOc5UCe);
    KaOCcR = strlen (YK9odbOc5UCe);
    if (strlen (YK9odbOc5UCe) != strlen (b)) {
        cout << "NO" << endl;
        return (99 - 99);
    }
    for (; aPVwotOZU0gx != KaOCcR;) {
        for (ywFSpIQ1euh = 0; ywFSpIQ1euh < UWbNOAkqnvGg; ywFSpIQ1euh = ywFSpIQ1euh + 1) {
            {
                MmnGdOaowD = 0;
                while (MmnGdOaowD < UWbNOAkqnvGg) {
                    if (YK9odbOc5UCe[ywFSpIQ1euh] == b[MmnGdOaowD]) {
                        TVGvKagYh = (827 - 826);
                        break;
                    }
                    MmnGdOaowD++;
                };
            }
            if (TVGvKagYh == (87 - 86))
                break;
        }
        if (TVGvKagYh == (918 - 917)) {
            {
                WGlY3U5tgr = ywFSpIQ1euh;
                while (WGlY3U5tgr < UWbNOAkqnvGg) {
                    YK9odbOc5UCe[WGlY3U5tgr] = YK9odbOc5UCe[WGlY3U5tgr +1];
                    WGlY3U5tgr = WGlY3U5tgr +1;
                };
            }
            for (M0ugntk9yrP = MmnGdOaowD; M0ugntk9yrP < UWbNOAkqnvGg; M0ugntk9yrP++) {
                b[M0ugntk9yrP] = b[M0ugntk9yrP +1];
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
            UWbNOAkqnvGg = UWbNOAkqnvGg -1;
        }
        TVGvKagYh = 0;
        aPVwotOZU0gx = aPVwotOZU0gx + 1;
    }
    if (UWbNOAkqnvGg == 0)
        cout << "YES" << endl;
    else {
        if (UWbNOAkqnvGg != 0)
            cout << "NO" << endl;
    }
    return 0;
}

