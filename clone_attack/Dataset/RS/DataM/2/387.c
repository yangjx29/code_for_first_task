int main () {
    char lS76XU8J3 [1000] [28];
    int fRVTiBPlo;
    int acx5mDy;
    int dZbn08W1 [(688 - 662)] [(1980 - 980)];
    int ybUeGKLf49N;
    int L8lQENuFS;
    int uGNrCXWy;
    int tIBLMs7ou;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    fRVTiBPlo = (774 - 774);
    for (L8lQENuFS = (768 - 768); L8lQENuFS < 26; L8lQENuFS = L8lQENuFS +1)
        dZbn08W1[L8lQENuFS][(40 - 40)] = 0;
    cin >> ybUeGKLf49N;
    for (L8lQENuFS = 0; L8lQENuFS < ybUeGKLf49N; L8lQENuFS = L8lQENuFS +1) {
        cin >> acx5mDy;
        cin >> lS76XU8J3[acx5mDy];
        for (uGNrCXWy = 0; lS76XU8J3[acx5mDy][uGNrCXWy] != '\0'; uGNrCXWy = uGNrCXWy + 1) {
            dZbn08W1[lS76XU8J3[acx5mDy][uGNrCXWy] - 'A'][0]++;
            dZbn08W1[lS76XU8J3[acx5mDy][uGNrCXWy] - 'A'][dZbn08W1[lS76XU8J3[acx5mDy][uGNrCXWy] - 'A'][0]] = acx5mDy;
        };
    }
    {
        L8lQENuFS = 0;
        while (L8lQENuFS < 26) {
            if (dZbn08W1[L8lQENuFS][0] > fRVTiBPlo) {
                fRVTiBPlo = dZbn08W1[L8lQENuFS][0];
                tIBLMs7ou = L8lQENuFS;
            }
            L8lQENuFS = L8lQENuFS +1;
        };
    }
    cout << (char) (tIBLMs7ou + 'A') << endl << fRVTiBPlo << endl;
    {
        uGNrCXWy = 1;
        while (uGNrCXWy <= fRVTiBPlo) {
            cout << dZbn08W1[tIBLMs7ou][uGNrCXWy] << endl;
            uGNrCXWy = uGNrCXWy + 1;
        };
    }
    return 0;
}

