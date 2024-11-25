int main () {
    int WNnHji4IZ;
    int n;
    int W8JIpShouB1;
    int Iqu7JP6Lv;
    int VUApVLnvg2T [(115 - 15)] [(205 - 105)];
    int AvMVigqfjF;
    int mOZbzYXGCS;
    int K31tkhu5A0;
    int (*SVvBH2Gm) [(515 - 415)];
    cin >> WNnHji4IZ;
    for (Iqu7JP6Lv = (427 - 427); Iqu7JP6Lv < WNnHji4IZ; Iqu7JP6Lv++) {
        K31tkhu5A0 = (886 - 886);
        cin >> n >> W8JIpShouB1;
        for (AvMVigqfjF = (999 - 999); n > AvMVigqfjF; AvMVigqfjF++) {
            for (mOZbzYXGCS = (399 - 399); W8JIpShouB1 > mOZbzYXGCS; mOZbzYXGCS++)
                cin >> VUApVLnvg2T[AvMVigqfjF][mOZbzYXGCS];
        }
        SVvBH2Gm = VUApVLnvg2T;
        if (!((882 - 881) != n) || !((979 - 978) != W8JIpShouB1) || !((829 - 827) != W8JIpShouB1) || !((280 - 278) != n)) {
            for (AvMVigqfjF = (827 - 827); n > AvMVigqfjF; AvMVigqfjF++) {
                for (mOZbzYXGCS = (801 - 801); W8JIpShouB1 > mOZbzYXGCS; mOZbzYXGCS++)
                    K31tkhu5A0 = K31tkhu5A0 +*(*(SVvBH2Gm +AvMVigqfjF) + mOZbzYXGCS);
            }
        }
        else {
            for (mOZbzYXGCS = (539 - 539); mOZbzYXGCS < W8JIpShouB1; mOZbzYXGCS++) {
                K31tkhu5A0 = K31tkhu5A0 +*(*(SVvBH2Gm)+mOZbzYXGCS) + *(*(SVvBH2Gm +n - (137 - 136)) + mOZbzYXGCS);
            }
            for (AvMVigqfjF = (13 - 12); n - (142 - 141) > AvMVigqfjF; AvMVigqfjF++) {
                K31tkhu5A0 = K31tkhu5A0 +*(*(SVvBH2Gm +AvMVigqfjF) + (654 - 654)) + *(*(SVvBH2Gm +AvMVigqfjF) + W8JIpShouB1 -(325 - 324));
            }
        }
        cout << K31tkhu5A0 << endl;
    }
    return (139 - 139);
}

