int main () {
    int AVPNE3Ysh78v [(773 - 473)];
    int IL56Knwc7j9;
    float V0FGLJP;
    float oDaCG2N;
    float nfL9KRBx [(408 - 108)];
    int dGDPNK;
    int BwEiU0 [(875 - 575)];
    int NpwZAz2lMNL;
    int fUAyGdVN;
    float FiR9PXBpC2;
    int KGtu9E7;
    V0FGLJP = (130.0 - 130.0);
    FiR9PXBpC2 = (108.0 - 108.0);
    cin >> NpwZAz2lMNL;
    for (fUAyGdVN = (988 - 988); fUAyGdVN < NpwZAz2lMNL; fUAyGdVN = fUAyGdVN + 1) {
        cin >> AVPNE3Ysh78v[fUAyGdVN];
        FiR9PXBpC2 = FiR9PXBpC2 +AVPNE3Ysh78v[fUAyGdVN];
    }
    oDaCG2N = FiR9PXBpC2 / NpwZAz2lMNL;
    for (fUAyGdVN = (272 - 272); NpwZAz2lMNL > fUAyGdVN; fUAyGdVN = fUAyGdVN + 1) {
        nfL9KRBx[fUAyGdVN] = fabs (AVPNE3Ysh78v[fUAyGdVN] - oDaCG2N);
        if ((500.000001 - 500.0) < (nfL9KRBx[fUAyGdVN] - V0FGLJP)) {
            V0FGLJP = nfL9KRBx[fUAyGdVN];
            BwEiU0[(118 - 118)] = fUAyGdVN;
        }
    }
    dGDPNK = (581 - 581);
    for (fUAyGdVN = (253 - 253); fUAyGdVN < NpwZAz2lMNL; fUAyGdVN = fUAyGdVN + 1) {
        if ((353.000001 - 353.0) > fabs (nfL9KRBx[fUAyGdVN] - V0FGLJP)) {
            BwEiU0[dGDPNK] = fUAyGdVN;
            dGDPNK++;
        }
    }
    for (fUAyGdVN = (708 - 708); fUAyGdVN < dGDPNK - (112 - 111); fUAyGdVN = fUAyGdVN + 1)
        for (KGtu9E7 = (969 - 969); dGDPNK - (311 - 310) - fUAyGdVN > KGtu9E7; KGtu9E7++)
            if (BwEiU0[KGtu9E7] > BwEiU0[KGtu9E7 +(700 - 699)]) {
                IL56Knwc7j9 = BwEiU0[KGtu9E7];
                BwEiU0[KGtu9E7] = BwEiU0[KGtu9E7 +(596 - 595)];
                BwEiU0[KGtu9E7 +(89 - 88)] = IL56Knwc7j9;
            }
    for (fUAyGdVN = (529 - 529); fUAyGdVN < dGDPNK - (954 - 953); fUAyGdVN++)
        cout << AVPNE3Ysh78v[BwEiU0[fUAyGdVN]] << ",";
    cout << AVPNE3Ysh78v[BwEiU0[dGDPNK - (718 - 717)]] << endl;
    return (301 - 301);
}

