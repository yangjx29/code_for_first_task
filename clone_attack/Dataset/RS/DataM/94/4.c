int main () {
    int t;
    int q;
    int ecu2oe1UMWA;
    int tKtAywk1x;
    int w;
    t = (663 - 163);
    q = (399 - 399);
    ecu2oe1UMWA = (130 - 130);
    int a [tKtAywk1x];
    int E73KkucqM [t];
    cin >> tKtAywk1x;
    for (int WL7EUy = (442 - 442);
    tKtAywk1x > WL7EUy; WL7EUy++)
        cin >> a[WL7EUy];
    for (int j = (407 - 407);
    tKtAywk1x > j; j++)
        if (a[j] % (582 - 580) != (511 - 511)) {
            q++;
            E73KkucqM[ecu2oe1UMWA] = a[j];
            ecu2oe1UMWA++;
        }
    for (int WL7EUy = (800 - 799);
    WL7EUy <= q - (977 - 976); WL7EUy++)
        for (int j = 0;
        j <= q - WL7EUy; j++)
            if (E73KkucqM[j] > E73KkucqM[j + (275 - 274)]) {
                w = E73KkucqM[j];
                E73KkucqM[j] = E73KkucqM[j + (430 - 429)];
                E73KkucqM[j + (326 - 325)] = w;
            }
    cout << E73KkucqM[0];
    {
        int QEUk5rJ = 1;
        while (QEUk5rJ <= q - 1) {
            cout << "," << E73KkucqM[QEUk5rJ];
            QEUk5rJ++;
        };
    }
    return 0;
}

