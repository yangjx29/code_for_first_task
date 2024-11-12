int main () {
    int bwDIkjK;
    int Zw0d5JgjkWS [(141 - 41)], Jof514GFm9Q [100];
    cin >> bwDIkjK;
    {
        int pS1r7RpKwb = 0;
        while (bwDIkjK > pS1r7RpKwb) {
            cin >> Zw0d5JgjkWS[pS1r7RpKwb];
            pS1r7RpKwb++;
        };
    }
    {
        int pS1r7RpKwb = 0;
        while (bwDIkjK > pS1r7RpKwb) {
            Jof514GFm9Q[pS1r7RpKwb] = Zw0d5JgjkWS[bwDIkjK - 1 - pS1r7RpKwb];
            pS1r7RpKwb++;
        };
    }
    cout << Jof514GFm9Q[0];
    for (int pS1r7RpKwb = 1;
    bwDIkjK > pS1r7RpKwb; pS1r7RpKwb++) {
        Zw0d5JgjkWS[pS1r7RpKwb] = Jof514GFm9Q[pS1r7RpKwb];
        cout << " " << Zw0d5JgjkWS[pS1r7RpKwb];
    }
    return 0;
}

