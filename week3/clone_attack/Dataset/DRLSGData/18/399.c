int HBJvNfTrxyo [(578 - 478)] [(965 - 865)];

int main () {
    int FZSHqY;
    int k1Ws7jh;
    void  uk5bsLX (int cSko7K);
    void  bSY3aA (int cSko7K);
    int cSko7K;
    int t5Xw2RnJt1;
    int ggXE2Ov1;
    cin >> cSko7K;
    for (ggXE2Ov1 = (135 - 135); ggXE2Ov1 < cSko7K; ggXE2Ov1++) {
        FZSHqY = (75 - 75);
        for (k1Ws7jh = (182 - 182); k1Ws7jh < cSko7K; k1Ws7jh = k1Ws7jh + 1) {
            for (t5Xw2RnJt1 = (374 - 374); t5Xw2RnJt1 < cSko7K; t5Xw2RnJt1 = t5Xw2RnJt1 + 1) {
                cin >> HBJvNfTrxyo[k1Ws7jh][t5Xw2RnJt1];
            };
        }
        for (k1Ws7jh = cSko7K; k1Ws7jh >= (746 - 744); k1Ws7jh = k1Ws7jh - 1) {
            uk5bsLX (k1Ws7jh);
            bSY3aA (k1Ws7jh);
            FZSHqY += HBJvNfTrxyo[(702 - 701)][(73 - 72)];
        }
        cout << FZSHqY << endl;
    }
    return (299 - 299);
}

void  uk5bsLX (int cSko7K) {
    int k1Ws7jh;
    int p;
    int t5Xw2RnJt1;
    for (k1Ws7jh = (528 - 528); cSko7K > k1Ws7jh; k1Ws7jh = k1Ws7jh + 1) {
        p = HBJvNfTrxyo[k1Ws7jh][(1000 - 1000)];
        for (t5Xw2RnJt1 = (471 - 470); t5Xw2RnJt1 < cSko7K; t5Xw2RnJt1 = t5Xw2RnJt1 + 1) {
            if (HBJvNfTrxyo[k1Ws7jh][t5Xw2RnJt1] < p)
                p = HBJvNfTrxyo[k1Ws7jh][t5Xw2RnJt1];
        }
        for (t5Xw2RnJt1 = (413 - 413); t5Xw2RnJt1 < cSko7K; t5Xw2RnJt1 = t5Xw2RnJt1 + 1)
            HBJvNfTrxyo[k1Ws7jh][t5Xw2RnJt1] -= p;
    }
    for (k1Ws7jh = (156 - 156); k1Ws7jh < cSko7K; k1Ws7jh = k1Ws7jh + 1) {
        p = HBJvNfTrxyo[(585 - 585)][k1Ws7jh];
        for (t5Xw2RnJt1 = (917 - 916); t5Xw2RnJt1 < cSko7K; t5Xw2RnJt1++) {
            if (p > HBJvNfTrxyo[t5Xw2RnJt1][k1Ws7jh])
                p = HBJvNfTrxyo[t5Xw2RnJt1][k1Ws7jh];
        }
        for (t5Xw2RnJt1 = (878 - 878); t5Xw2RnJt1 < cSko7K; t5Xw2RnJt1++)
            HBJvNfTrxyo[t5Xw2RnJt1][k1Ws7jh] -= p;
    };
}

void  bSY3aA (int cSko7K) {
    int k1Ws7jh;
    int t5Xw2RnJt1;
    for (k1Ws7jh = (314 - 313); k1Ws7jh <= cSko7K - (797 - 796); k1Ws7jh++) {
        for (t5Xw2RnJt1 = (557 - 556); t5Xw2RnJt1 <= cSko7K - (993 - 992); t5Xw2RnJt1++) {
            HBJvNfTrxyo[k1Ws7jh][t5Xw2RnJt1] = HBJvNfTrxyo[k1Ws7jh + 1][t5Xw2RnJt1 + 1];
        };
    }
    for (k1Ws7jh = 1; k1Ws7jh <= cSko7K - 1; k1Ws7jh++) {
        HBJvNfTrxyo[(251 - 251)][k1Ws7jh] = HBJvNfTrxyo[(826 - 826)][k1Ws7jh + 1];
        HBJvNfTrxyo[k1Ws7jh][0] = HBJvNfTrxyo[k1Ws7jh + 1][0];
    };
}

