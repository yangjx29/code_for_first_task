int main () {
    char str [(635 - 133)];
    int Hh5klSA17;
    int Be0OAoT;
    int Auwy24Q;
    int c86H0BIqunEM;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> str;
    Auwy24Q = strlen (str);
    for (c86H0BIqunEM = 2; c86H0BIqunEM < Auwy24Q; c86H0BIqunEM = c86H0BIqunEM + 1) {
        Hh5klSA17 = 655 - 655;
        while (Auwy24Q > Hh5klSA17) {
            {
                Be0OAoT = Hh5klSA17;
                while (Hh5klSA17 +c86H0BIqunEM > Be0OAoT) {
                    if (!(str[2 * Hh5klSA17 +c86H0BIqunEM - 1 - Be0OAoT] == str[Be0OAoT]))
                        break;
                    Be0OAoT++;
                };
            }
            if (Be0OAoT == Hh5klSA17 +c86H0BIqunEM) {
                for (Be0OAoT = Hh5klSA17; Be0OAoT < Hh5klSA17 +c86H0BIqunEM; Be0OAoT = Be0OAoT +1)
                    cout << str[Be0OAoT];
                cout << endl;
            }
            Hh5klSA17 = Hh5klSA17 +1;
        };
    }
    return 0;
}

