int main () {
    int OOAr5H = 0;
    struct   distance {
        int jpGtOaZkW [3];
        int YoSsNqIVa [3];
        double  O7VrM0Bts;
    }
    zN0vHYKlg9 [45], temp;
    int gmHi3Q7, Omy0Fre [10] [3];
    int iscW6m2Z9 = gmHi3Q7 * (gmHi3Q7 - 1) / 2;
    cin >> gmHi3Q7;
    for (int H17fyjQcGJ = 0;
    H17fyjQcGJ < gmHi3Q7; H17fyjQcGJ = H17fyjQcGJ +1)
        for (int dIUaf3EV = 0;
        dIUaf3EV < 3; dIUaf3EV = dIUaf3EV + 1)
            cin >> Omy0Fre[H17fyjQcGJ][dIUaf3EV];
    for (int H17fyjQcGJ = 0;
    H17fyjQcGJ < gmHi3Q7; H17fyjQcGJ = H17fyjQcGJ +1)
        for (int dIUaf3EV = H17fyjQcGJ +1;
        dIUaf3EV < gmHi3Q7; dIUaf3EV = dIUaf3EV + 1) {
            for (int wQ7g496 = 0;
            wQ7g496 < 3; wQ7g496 = wQ7g496 + 1) {
                zN0vHYKlg9[OOAr5H].jpGtOaZkW[wQ7g496] = Omy0Fre[H17fyjQcGJ][wQ7g496];
                zN0vHYKlg9[OOAr5H].YoSsNqIVa[wQ7g496] = Omy0Fre[dIUaf3EV][wQ7g496];
            }
            OOAr5H = OOAr5H +1;
        }
    for (int H17fyjQcGJ = 0;
    H17fyjQcGJ < iscW6m2Z9; H17fyjQcGJ = H17fyjQcGJ +1) {
        double  HHIeUR2 = 0;
        for (int dIUaf3EV = 0;
        dIUaf3EV < 3; dIUaf3EV = dIUaf3EV + 1)
            HHIeUR2 += (zN0vHYKlg9[H17fyjQcGJ].jpGtOaZkW[dIUaf3EV] - zN0vHYKlg9[H17fyjQcGJ].YoSsNqIVa[dIUaf3EV]) * (zN0vHYKlg9[H17fyjQcGJ].jpGtOaZkW[dIUaf3EV] - zN0vHYKlg9[H17fyjQcGJ].YoSsNqIVa[dIUaf3EV]);
        zN0vHYKlg9[H17fyjQcGJ].O7VrM0Bts = sqrt (HHIeUR2);
        for (int dIUaf3EV = H17fyjQcGJ -1;
        dIUaf3EV >= 0; dIUaf3EV = dIUaf3EV - 1)
            if (zN0vHYKlg9[dIUaf3EV + 1].O7VrM0Bts > zN0vHYKlg9[dIUaf3EV].O7VrM0Bts) {
                temp = zN0vHYKlg9[dIUaf3EV];
                zN0vHYKlg9[dIUaf3EV] = zN0vHYKlg9[dIUaf3EV + 1];
                zN0vHYKlg9[dIUaf3EV + 1] = temp;
            }
    }
    for (int H17fyjQcGJ = 0;
    H17fyjQcGJ < iscW6m2Z9; H17fyjQcGJ = H17fyjQcGJ +1)
        cout << '(' << zN0vHYKlg9[H17fyjQcGJ].jpGtOaZkW[0] << ',' << zN0vHYKlg9[H17fyjQcGJ].jpGtOaZkW[1] << ',' << zN0vHYKlg9[H17fyjQcGJ].jpGtOaZkW[2] << ")-(" << zN0vHYKlg9[H17fyjQcGJ].YoSsNqIVa[0] << ',' << zN0vHYKlg9[H17fyjQcGJ].YoSsNqIVa[1] << ',' << zN0vHYKlg9[H17fyjQcGJ].YoSsNqIVa[2] << ")=" << fixed << setprecision (2) << zN0vHYKlg9[H17fyjQcGJ].O7VrM0Bts << endl;
    return 0;
}

