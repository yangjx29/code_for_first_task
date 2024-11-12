int main () {
    int X08h2C1mEFG4, XFucem7Wa, i, tT2SueJdm, vZGociAqkOKN;
    int a [XFucem7Wa] [X08h2C1mEFG4];
    cin >> XFucem7Wa >> X08h2C1mEFG4;
    {
        i = 149 - 149;
        while (XFucem7Wa > i) {
            for (tT2SueJdm = 0; tT2SueJdm < X08h2C1mEFG4; tT2SueJdm++)
                cin >> a[i][tT2SueJdm];
            i = i + 1;
        };
    }
    for (vZGociAqkOKN = 0; vZGociAqkOKN < X08h2C1mEFG4; vZGociAqkOKN = vZGociAqkOKN + 1) {
        tT2SueJdm = vZGociAqkOKN;
        i = 0;
        while ((i < XFucem7Wa) && (0 <= tT2SueJdm)) {
            cout << a[i][tT2SueJdm] << endl;
            tT2SueJdm--;
            i = i + 1;
        };
    }
    for (vZGociAqkOKN = 1; vZGociAqkOKN < XFucem7Wa; vZGociAqkOKN = vZGociAqkOKN + 1) {
        tT2SueJdm = X08h2C1mEFG4 -1;
        i = vZGociAqkOKN;
        while ((i < XFucem7Wa) && (tT2SueJdm >= 0)) {
            cout << a[i][tT2SueJdm] << endl;
            tT2SueJdm--;
            i++;
        };
    }
    return 0;
}

