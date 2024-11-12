int main () {
    int Fj04iznMKIH;
    int a [20001];
    int sboAO3LVUQ [20001];
    int gsIwB2dUiOlu;
    int LgFWOlAikU;
    cin >> Fj04iznMKIH;
    LgFWOlAikU = Fj04iznMKIH;
    {
        gsIwB2dUiOlu = 1;
        while (gsIwB2dUiOlu <= Fj04iznMKIH) {
            sboAO3LVUQ[gsIwB2dUiOlu] = 0;
            gsIwB2dUiOlu = gsIwB2dUiOlu + 1;
        };
    }
    {
        gsIwB2dUiOlu = 1;
        while (gsIwB2dUiOlu <= Fj04iznMKIH) {
            cin >> a[gsIwB2dUiOlu];
            sboAO3LVUQ[a[gsIwB2dUiOlu]] = 1;
            gsIwB2dUiOlu++;
        };
    }
    gsIwB2dUiOlu = 2;
    cout << a[1];
    sboAO3LVUQ[a[1]] = 0;
    do {
        if (sboAO3LVUQ[a[gsIwB2dUiOlu]] == 1) {
            cout << ' ' << a[gsIwB2dUiOlu];
            sboAO3LVUQ[a[gsIwB2dUiOlu]] = 0;
        }
        LgFWOlAikU = LgFWOlAikU -1;
        gsIwB2dUiOlu = gsIwB2dUiOlu + 1;
    }
    while (LgFWOlAikU >= 0);
    return 0;
}

