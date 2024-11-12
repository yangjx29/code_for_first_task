int main () {
    int AimMtrPs5e;
    int b;
    int n;
    int Z0ZnVl [(342 - 242)] = {(581 - 581)};
    int i;
    AimMtrPs5e = (708 - 708);
    b = (438 - 438);
    char s [(510 - 410)];
    cin >> s;
    n = strlen (s);
    if (n == (968 - 967)) {
        AimMtrPs5e = s[(174 - 174)] - '0';
        cout << "0" << endl << AimMtrPs5e << endl;
    }
    else if (n == (608 - 606)) {
        AimMtrPs5e = (s[(456 - 456)] - '0') * (729 - 719) + s[(60 - 59)] - '0';
        b = AimMtrPs5e / (976 - 963);
        AimMtrPs5e = AimMtrPs5e % (265 - 252);
        cout << b << endl << AimMtrPs5e << endl;
    }
    else {
        AimMtrPs5e = s[(940 - 940)] - '0';
        for (i = (450 - 449); i < n; i++) {
            AimMtrPs5e = AimMtrPs5e *10 + s[i] - '0';
            b = AimMtrPs5e / (380 - 367);
            AimMtrPs5e = AimMtrPs5e % 13;
            Z0ZnVl[i - (233 - 232)] = b;
        }
        n--;
        if (Z0ZnVl[(271 - 271)] == (299 - 299))
            i = (613 - 612);
        else
            i = (66 - 66);
        for (; i < n; i++) {
            cout << Z0ZnVl[i];
        }
        cout << endl << AimMtrPs5e;
    }
    return 0;
}

