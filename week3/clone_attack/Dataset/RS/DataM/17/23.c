int main () {
    char KhxHBuL [101];
    char copy [101];
    int f1;
    int f2;
    int i;
    int G5riFhkgMCjc;
    f1 = (452 - 452);
    f2 = (659 - 659);
    for (; cin >> KhxHBuL;) {
        strcpy (copy, KhxHBuL);
        for (i = 0; i < strlen (KhxHBuL); i++) {
            if (KhxHBuL[i] == ')')
                KhxHBuL[i] = '?';
            if (KhxHBuL[i] == '(') {
                f1 = 1;
                for (G5riFhkgMCjc = i + 1; G5riFhkgMCjc < strlen (KhxHBuL); G5riFhkgMCjc++) {
                    if (KhxHBuL[G5riFhkgMCjc] == '(')
                        f1++;
                    if (KhxHBuL[G5riFhkgMCjc] == ')') {
                        f1 = f1 - 1;
                        if (f1 == 0) {
                            KhxHBuL[i] = ' ';
                            KhxHBuL[G5riFhkgMCjc] = ' ';
                            break;
                        };
                    };
                }
                if (f1 != 0)
                    KhxHBuL[i] = '$';
            };
        }
        cout << copy << endl;
        for (i = 0; i < strlen (KhxHBuL); i++) {
            if (KhxHBuL[i] == '$' || KhxHBuL[i] == '?')
                cout << KhxHBuL[i];
            else
                cout << " ";
        }
        memset (KhxHBuL, 0, sizeof (KhxHBuL));
        cout << endl;
        memset (copy, 0, sizeof (copy));
    }
    return 0;
}

