int main () {
    char X0JnuUAH [(664 - 164)];
    int eci7gWyGmkt, LGpgJZxmtFAv, e9HsEDotdCBn, KWaxrPBbzs = 0, gTXxfH, wY1MlGi5b7B, mIcJQW, pTpYfQ1qg9 = 0;
    cin.getline (X0JnuUAH, 500);
    eci7gWyGmkt = strlen (X0JnuUAH);
    for (LGpgJZxmtFAv = 2; LGpgJZxmtFAv <= eci7gWyGmkt; LGpgJZxmtFAv++) {
        for (e9HsEDotdCBn = 0; eci7gWyGmkt >= e9HsEDotdCBn + LGpgJZxmtFAv; e9HsEDotdCBn++) {
            pTpYfQ1qg9 = 0;
            gTXxfH = e9HsEDotdCBn;
            wY1MlGi5b7B = e9HsEDotdCBn + LGpgJZxmtFAv -(44 - 43);
            for (; X0JnuUAH[gTXxfH] == X0JnuUAH[wY1MlGi5b7B];) {
                wY1MlGi5b7B--;
                if (pTpYfQ1qg9 == 0) {
                    KWaxrPBbzs = gTXxfH;
                    pTpYfQ1qg9 = 1;
                }
                gTXxfH++;
                if (gTXxfH >= wY1MlGi5b7B)
                    break;
            }
            if (gTXxfH >= wY1MlGi5b7B) {
                for (mIcJQW = KWaxrPBbzs; mIcJQW <= KWaxrPBbzs +LGpgJZxmtFAv-1; mIcJQW++) {
                    cout << X0JnuUAH[mIcJQW];
                }
                cout << endl;
            };
        };
    }
    return 0;
}

