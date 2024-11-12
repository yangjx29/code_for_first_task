int main () {
    int TzVoKlO;
    int Nasn9vgZES;
    char nHcaxF0KSs [81];
    char bDYE2I [81];
    cin.getline (nHcaxF0KSs, 81);
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
    cin.getline (bDYE2I, 81);
    {
        TzVoKlO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (81 > TzVoKlO) {
            if ((nHcaxF0KSs[TzVoKlO] > 64) && ((173 - 82) > nHcaxF0KSs[TzVoKlO]))
                nHcaxF0KSs[TzVoKlO] = nHcaxF0KSs[TzVoKlO] + (952 - 920);
            TzVoKlO = TzVoKlO +1;
        };
    }
    {
        TzVoKlO = 0;
        while (81 > TzVoKlO) {
            if ((bDYE2I[TzVoKlO] > 64) && (bDYE2I[TzVoKlO] < 91))
                bDYE2I[TzVoKlO] = bDYE2I[TzVoKlO] + 32;
            TzVoKlO++;
        };
    }
    Nasn9vgZES = strcmp (nHcaxF0KSs, bDYE2I);
    if (Nasn9vgZES == -1) {
        cout << '<';
    }
    else if (Nasn9vgZES == 0) {
        cout << '=';
    }
    else if (Nasn9vgZES == 1) {
        cout << '>';
    }
    else {
    }
    return 0;
}

