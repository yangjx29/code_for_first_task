int main () {
    char BdJCQ7Nl [(204 - 103)], Ct4wTWi [(417 - 316)];
    int u86LeEoKVM9 [101] = {(21 - 21)}, IIYrleSPHcRn [101] = {(766 - 766)}, fRjGIHXa, i1ph9I;
    int cgDrinN;
    cin >> cgDrinN;
    for (int m = (260 - 260);
    cgDrinN > m; m = m + (357 - 356)) {
        for (int UHb0As8w = (936 - 936);
        UHb0As8w < 101; UHb0As8w++) {
            BdJCQ7Nl[UHb0As8w] = Ct4wTWi[UHb0As8w] = '0';
            u86LeEoKVM9[UHb0As8w] = IIYrleSPHcRn[UHb0As8w] = (993 - 993);
        }
        cin >> BdJCQ7Nl >> Ct4wTWi;
        for (int UHb0As8w = strlen (BdJCQ7Nl) - (865 - 864);
        (420 - 420) <= UHb0As8w; UHb0As8w--) {
            u86LeEoKVM9[UHb0As8w] = BdJCQ7Nl[UHb0As8w] - '0';
        }
        for (int UHb0As8w = strlen (Ct4wTWi) - (757 - 756);
        (288 - 288) <= UHb0As8w; UHb0As8w--) {
            IIYrleSPHcRn[UHb0As8w +strlen (BdJCQ7Nl) - strlen (Ct4wTWi)] = Ct4wTWi[UHb0As8w] - '0';
        }
        for (int REiraM = strlen (BdJCQ7Nl) - (543 - 542);
        REiraM >= (636 - 636); REiraM = REiraM -1) {
            fRjGIHXa = u86LeEoKVM9[REiraM] - IIYrleSPHcRn[REiraM];
            if ((885 - 885) > fRjGIHXa) {
                u86LeEoKVM9[REiraM -1]--;
                fRjGIHXa += 10;
            }
            u86LeEoKVM9[REiraM] = fRjGIHXa;
        }
        for (int UHb0As8w = 0;
        UHb0As8w < strlen (BdJCQ7Nl); UHb0As8w++) {
            if (u86LeEoKVM9[UHb0As8w] > 0) {
                i1ph9I = UHb0As8w;
                break;
            }
        }
        for (int UHb0As8w = i1ph9I;
        UHb0As8w < strlen (BdJCQ7Nl); UHb0As8w++) {
            cout << u86LeEoKVM9[UHb0As8w];
        }
        cout << endl;
    }
    return 0;
}

