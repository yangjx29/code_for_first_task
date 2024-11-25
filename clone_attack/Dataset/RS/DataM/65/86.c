int main () {
    int n;
    int sDwmYiEXk1 = 0, Xw2oqiVNaEd = 0;
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        int a1, b1;
        cin >> a1 >> b1;
        if (a1 == 0) {
            if (b1 == 1)
                sDwmYiEXk1 = sDwmYiEXk1 + 1;
            if (!(2 != b1))
                Xw2oqiVNaEd++;
        }
        else {
            if (a1 == 1) {
                if (b1 == 2)
                    sDwmYiEXk1 = sDwmYiEXk1 + 1;
                if (b1 == 0)
                    Xw2oqiVNaEd++;
            }
            else {
                if (b1 == 0)
                    sDwmYiEXk1++;
                if (b1 == 1)
                    Xw2oqiVNaEd++;
            };
        };
    }
    if (sDwmYiEXk1 > Xw2oqiVNaEd)
        cout << "A";
    if (sDwmYiEXk1 < Xw2oqiVNaEd)
        cout << "B";
    if (sDwmYiEXk1 == Xw2oqiVNaEd)
        cout << "Tie";
    cout << endl;
    return 0;
}

