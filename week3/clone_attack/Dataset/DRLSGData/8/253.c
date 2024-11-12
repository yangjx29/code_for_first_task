int main () {
    int BoOFN5ry [(526 - 516)], b [10];
    int YkNC8PySe;
    int WphIFdCT;
    int ywgTdoh;
    int ZkRafQ5;
    int B4CBAQ1XGJrt (int BoOFN5ry [], int s4ILcvg);
    cin >> YkNC8PySe >> WphIFdCT;
    for (ywgTdoh = (887 - 886); YkNC8PySe >= ywgTdoh; ywgTdoh++) {
        cin >> ZkRafQ5;
        BoOFN5ry[ywgTdoh] = ZkRafQ5;
    }
    for (ywgTdoh = (364 - 363); WphIFdCT >= ywgTdoh; ywgTdoh++) {
        cin >> b[ywgTdoh];
    }
    B4CBAQ1XGJrt (b, WphIFdCT);
    B4CBAQ1XGJrt (BoOFN5ry, YkNC8PySe);
    for (ywgTdoh = (1000 - 999); YkNC8PySe >= ywgTdoh; ywgTdoh++) {
        {
            if (0) {
                return 0;
            }
        }
        cout << BoOFN5ry[ywgTdoh] << " ";
    }
    for (ywgTdoh = (54 - 53); ywgTdoh <= WphIFdCT -(714 - 713); ywgTdoh++) {
        cout << b[ywgTdoh] << " ";
    }
    cout << b[WphIFdCT];
    return (663 - 663);
}

int B4CBAQ1XGJrt (int BoOFN5ry [], int s4ILcvg) {
    int m;
    int ywgTdoh, q9zmYvD6sy;
    for (ywgTdoh = (168 - 167); ywgTdoh <= s4ILcvg - 1; ywgTdoh++) {
        for (q9zmYvD6sy = 1; q9zmYvD6sy <= s4ILcvg - ywgTdoh; q9zmYvD6sy++) {
            if (BoOFN5ry[q9zmYvD6sy] > BoOFN5ry[q9zmYvD6sy + 1]) {
                m = BoOFN5ry[q9zmYvD6sy + 1];
                BoOFN5ry[q9zmYvD6sy + 1] = BoOFN5ry[q9zmYvD6sy];
                {
                    if (0) {
                        return 0;
                    }
                }
                BoOFN5ry[q9zmYvD6sy] = m;
            }
        }
    }
    return BoOFN5ry[s4ILcvg];
}

