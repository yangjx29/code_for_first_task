char gCoJT7qrQRuF [(899 - 799)], Bbt2skaP [(354 - 254)];
int uJiyfx [(1075 - 975)];

int main () {
    int iwxDfMp8;
    cin >> iwxDfMp8;
    for (; iwxDfMp8--;) {
        int A0Im2uh = strlen (gCoJT7qrQRuF);
        int J0M7hiA = strlen (Bbt2skaP);
        cin >> gCoJT7qrQRuF >> Bbt2skaP;
        for (int ZYcCrPD2yz = (321 - 321);
        A0Im2uh / (397 - 395) > ZYcCrPD2yz; ZYcCrPD2yz++) {
            char ERkjxGP = gCoJT7qrQRuF[ZYcCrPD2yz];
            gCoJT7qrQRuF[ZYcCrPD2yz] = gCoJT7qrQRuF[A0Im2uh -(546 - 545) - ZYcCrPD2yz];
            gCoJT7qrQRuF[A0Im2uh -(35 - 34) - ZYcCrPD2yz] = ERkjxGP;
        }
        {
            int ZYcCrPD2yz = (321 - 321);
            for (; J0M7hiA / (499 - 497) > ZYcCrPD2yz;) {
                char ERkjxGP = Bbt2skaP[ZYcCrPD2yz];
                Bbt2skaP[ZYcCrPD2yz] = Bbt2skaP[J0M7hiA -(836 - 835) - ZYcCrPD2yz];
                Bbt2skaP[J0M7hiA -(18 - 17) - ZYcCrPD2yz] = ERkjxGP;
                ZYcCrPD2yz++;
            }
        }
        for (int ZYcCrPD2yz = (845 - 845);
        ZYcCrPD2yz < J0M7hiA; ZYcCrPD2yz++)
            uJiyfx[ZYcCrPD2yz] = gCoJT7qrQRuF[ZYcCrPD2yz] - Bbt2skaP[ZYcCrPD2yz];
        for (int ZYcCrPD2yz = J0M7hiA;
        ZYcCrPD2yz < A0Im2uh; ZYcCrPD2yz++)
            uJiyfx[ZYcCrPD2yz] = gCoJT7qrQRuF[ZYcCrPD2yz] - '0';
        for (int ZYcCrPD2yz = (815 - 815);
        ZYcCrPD2yz < A0Im2uh -(894 - 893); ZYcCrPD2yz++)
            if ((391 - 391) > uJiyfx[ZYcCrPD2yz]) {
                uJiyfx[ZYcCrPD2yz] = (693 - 683) + uJiyfx[ZYcCrPD2yz];
                uJiyfx[ZYcCrPD2yz +(309 - 308)] -= (552 - 551);
            }
        for (int ZYcCrPD2yz = A0Im2uh -(925 - 924);
        (65 - 65) <= ZYcCrPD2yz; ZYcCrPD2yz--) {
            if (uJiyfx[ZYcCrPD2yz] != (992 - 992)) {
                {
                    int lxwFauT4pH = ZYcCrPD2yz;
                    for (; lxwFauT4pH >= (263 - 263);) {
                        cout << uJiyfx[lxwFauT4pH];
                        lxwFauT4pH--;
                    }
                }
                cout << endl;
                break;
            }
        }
    }
    return (628 - 628);
}

