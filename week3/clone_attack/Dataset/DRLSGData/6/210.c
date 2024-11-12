int main () {
    int mLQ8GZRWD;
    int bxhLTd5ot7j;
    int KFnT5o9;
    cin >> mLQ8GZRWD;
    int b5I1a7LXCfM;
    for (b5I1a7LXCfM = 1; mLQ8GZRWD >= b5I1a7LXCfM; b5I1a7LXCfM = b5I1a7LXCfM + 1) {
        int t8zHAtoq6v, R4cJjpiblqA;
        cin >> bxhLTd5ot7j >> KFnT5o9;
        int tAucXs9 [bxhLTd5ot7j] [KFnT5o9];
        for (t8zHAtoq6v = (179 - 179); bxhLTd5ot7j > t8zHAtoq6v; t8zHAtoq6v = t8zHAtoq6v + 1) {
            for (R4cJjpiblqA = 0; KFnT5o9 > R4cJjpiblqA; R4cJjpiblqA = R4cJjpiblqA +1)
                cin >> tAucXs9[t8zHAtoq6v][R4cJjpiblqA];
        }
        int PDPKj1;
        PDPKj1 = 0;
        for (t8zHAtoq6v = 0; t8zHAtoq6v < bxhLTd5ot7j; t8zHAtoq6v = t8zHAtoq6v + 1) {
            PDPKj1 = PDPKj1 +tAucXs9[t8zHAtoq6v][0] + tAucXs9[t8zHAtoq6v][KFnT5o9 -1];
        }
        for (R4cJjpiblqA = 0; R4cJjpiblqA < KFnT5o9; R4cJjpiblqA = R4cJjpiblqA +1) {
            PDPKj1 = PDPKj1 +tAucXs9[0][R4cJjpiblqA] + tAucXs9[bxhLTd5ot7j - 1][R4cJjpiblqA];
        }
        PDPKj1 = PDPKj1 -tAucXs9[0][0] - tAucXs9[0][KFnT5o9 -1] - tAucXs9[bxhLTd5ot7j - 1][0] - tAucXs9[bxhLTd5ot7j - 1][KFnT5o9 -1];
        cout << PDPKj1 << endl;
    }
    return 0;
}

