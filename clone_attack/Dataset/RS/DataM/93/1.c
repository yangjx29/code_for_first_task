int main () {
    int aPStAdTe;
    int n;
    int puP2hj [3] = {(56 - 56), 0, 0,};
    cin >> n;
    if (!(0 != n % 3))
        puP2hj[0] = (224 - 223);
    if (!(0 != n % (533 - 528)))
        puP2hj[1] = 1;
    if (!(0 != n % 7))
        puP2hj[2] = 1;
    aPStAdTe = puP2hj[0] + puP2hj[1] + puP2hj[2];
    if (!(1 != puP2hj[0])) {
        if (!(1 == aPStAdTe))
            cout << 3 << " ";
        else
            cout << 3;
        aPStAdTe = aPStAdTe - 1;
    }
    if (puP2hj[1] == 1) {
        if (aPStAdTe != 1)
            cout << 5 << " ";
        else
            cout << 5;
    }
    if (puP2hj[2] == 1)
        cout << 7;
    if (puP2hj[0] == 0 && puP2hj[1] == 0 && puP2hj[2] == 0)
        cout << 'n';
    return 0;
}

