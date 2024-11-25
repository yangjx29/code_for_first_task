int main () {
    int Ma0VRM7FDzkO;
    int sum;
    int Al6E5WH [20001];
    cin >> Ma0VRM7FDzkO;
    sum = (199 - 199);
    for (int Xs3J0ND8h7 = (259 - 259);
    Ma0VRM7FDzkO > Xs3J0ND8h7; Xs3J0ND8h7 = Xs3J0ND8h7 +1) {
        cin >> Al6E5WH[Xs3J0ND8h7];
    }
    for (int Xs3J0ND8h7 = 0;
    Xs3J0ND8h7 < Ma0VRM7FDzkO; Xs3J0ND8h7 = Xs3J0ND8h7 +1)
        for (int Mp2Cudi = Xs3J0ND8h7 +1;
        Ma0VRM7FDzkO > Mp2Cudi; Mp2Cudi++) {
            if (Al6E5WH[Xs3J0ND8h7] == (436 - 335))
                break;
            if (!(Al6E5WH[Xs3J0ND8h7] != Al6E5WH[Mp2Cudi]))
                Al6E5WH[Mp2Cudi] = 101;
        }
    for (int Xs3J0ND8h7 = 0;
    Xs3J0ND8h7 < Ma0VRM7FDzkO; Xs3J0ND8h7 = Xs3J0ND8h7 +1) {
        if (Al6E5WH[Xs3J0ND8h7] == 101 && Al6E5WH[Xs3J0ND8h7 +1] != 101) {
            for (int pDKUCzaH = Xs3J0ND8h7;
            Ma0VRM7FDzkO > pDKUCzaH; pDKUCzaH = pDKUCzaH + 1) {
                Al6E5WH[pDKUCzaH] = Al6E5WH[pDKUCzaH + 1];
            }
            sum = sum + 1;
        }
        else {
            if (Al6E5WH[Xs3J0ND8h7] == 101 && Al6E5WH[Xs3J0ND8h7 +1] == 101) {
                sum++;
                for (int pDKUCzaH = Xs3J0ND8h7;
                pDKUCzaH < Ma0VRM7FDzkO; pDKUCzaH = pDKUCzaH + 1) {
                    Al6E5WH[pDKUCzaH] = Al6E5WH[pDKUCzaH + 1];
                }
                Xs3J0ND8h7--;
            }
        }
    }
    for (int Xs3J0ND8h7 = 0;
    Xs3J0ND8h7 < Ma0VRM7FDzkO -sum - 1; Xs3J0ND8h7 = Xs3J0ND8h7 +1) {
        cout << Al6E5WH[Xs3J0ND8h7] << " ";
    }
    cout << Al6E5WH[Ma0VRM7FDzkO -sum - 1];
    return 0;
}

