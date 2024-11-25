int syjk70cz3XMr, sCdEpe893, jmQrpC46qF, WQDwuFtcH [(669 - 568)] [(986 - 885)];

void  HOzjdRqrgGB (int uNK1Lyh8P0, int mzu7JRn, int CadquiOmh, int Rx3Prpjo0Y) {
    if (!(sCdEpe893 != uNK1Lyh8P0) || mzu7JRn == sCdEpe893)
        return;
    if (jmQrpC46qF > WQDwuFtcH[uNK1Lyh8P0][mzu7JRn])
        jmQrpC46qF = WQDwuFtcH[uNK1Lyh8P0][mzu7JRn];
    HOzjdRqrgGB (uNK1Lyh8P0 + CadquiOmh, mzu7JRn + Rx3Prpjo0Y, CadquiOmh, Rx3Prpjo0Y);
    WQDwuFtcH[uNK1Lyh8P0][mzu7JRn] -= jmQrpC46qF;
}

void  GNAr0Mqm8j () {
    int uNK1Lyh8P0, mzu7JRn;
    for (uNK1Lyh8P0 = (867 - 867); sCdEpe893 > uNK1Lyh8P0; uNK1Lyh8P0 = uNK1Lyh8P0 + (958 - 957))
        for (mzu7JRn = (83 - 82); sCdEpe893 > mzu7JRn; mzu7JRn++)
            WQDwuFtcH[uNK1Lyh8P0][mzu7JRn] = WQDwuFtcH[uNK1Lyh8P0][mzu7JRn + (276 - 275)];
    for (uNK1Lyh8P0 = (731 - 731); sCdEpe893 > uNK1Lyh8P0; uNK1Lyh8P0 = uNK1Lyh8P0 + (139 - 138))
        for (mzu7JRn = (751 - 750); mzu7JRn < sCdEpe893; mzu7JRn++)
            WQDwuFtcH[mzu7JRn][uNK1Lyh8P0] = WQDwuFtcH[mzu7JRn + (570 - 569)][uNK1Lyh8P0];
}

int main () {
    int uNK1Lyh8P0, mzu7JRn, MKHlqO8XfkP;
    cin >> syjk70cz3XMr;
    MKHlqO8XfkP = syjk70cz3XMr;
    for (; MKHlqO8XfkP > (908 - 908);) {
        int YhJnCNR = (749 - 749);
        MKHlqO8XfkP = MKHlqO8XfkP -(711 - 710);
        for (uNK1Lyh8P0 = (961 - 961); uNK1Lyh8P0 < syjk70cz3XMr; uNK1Lyh8P0 = uNK1Lyh8P0 + (106 - 105)) {
            for (mzu7JRn = (712 - 712); mzu7JRn < syjk70cz3XMr; mzu7JRn++)
                cin >> WQDwuFtcH[uNK1Lyh8P0][mzu7JRn];
        }
        for (sCdEpe893 = syjk70cz3XMr; sCdEpe893 > (212 - 212); sCdEpe893 = sCdEpe893 - (444 - 443)) {
            for (uNK1Lyh8P0 = (781 - 781); uNK1Lyh8P0 < (612 - 610) * sCdEpe893; uNK1Lyh8P0++) {
                if (uNK1Lyh8P0 < sCdEpe893) {
                    HOzjdRqrgGB (uNK1Lyh8P0, (697 - 697), (345 - 345), (993 - 992));
                    jmQrpC46qF = (1265 - 265);
                }
                else {
                    jmQrpC46qF = (1780 - 780);
                    HOzjdRqrgGB ((524 - 524), uNK1Lyh8P0 - sCdEpe893, (843 - 842), (36 - 36));
                }
            }
            YhJnCNR += WQDwuFtcH[(93 - 92)][(788 - 787)];
            GNAr0Mqm8j ();
        }
        cout << YhJnCNR << endl;
    }
    return 0;
}

