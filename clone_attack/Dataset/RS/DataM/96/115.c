int main () {
    int Iw3YNHpotz1;
    int i;
    int j;
    int TdrLqUDpY;
    int p;
    char tU1q5Z2kJeCT [200];
    char xISG3l [200];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.get (tU1q5Z2kJeCT, 200);
    TdrLqUDpY = strlen (tU1q5Z2kJeCT);
    Iw3YNHpotz1 = 0;
    for (i = 0; TdrLqUDpY > i; i = i + 1) {
        xISG3l[i] = (Iw3YNHpotz1 *10 + tU1q5Z2kJeCT[i] - '0') / 13 + '0';
        Iw3YNHpotz1 = (Iw3YNHpotz1 *10 + tU1q5Z2kJeCT[i] - '0') % 13;
    }
    p = 200;
    for (i = 0; i < TdrLqUDpY; i++) {
        if (xISG3l[i] != '0') {
            p = i;
            break;
        };
    }
    if (p == 200)
        cout << "0";
    else {
        for (j = i; j < TdrLqUDpY; j = j + 1)
            cout << xISG3l[j];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    cout << endl << Iw3YNHpotz1 << endl;
    return 0;
}

