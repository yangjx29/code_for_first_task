int main () {
    char rVThcW4r [(403 - 147)];
    char lFC9bW [(1216 - 960)];
    char c [(531 - 275)];
    int L;
    int l;
    int Zn6Cci7T;
    int y;
    cin >> rVThcW4r >> lFC9bW >> c;
    L = strlen (rVThcW4r);
    l = strlen (lFC9bW);
    for (Zn6Cci7T = (214 - 214); Zn6Cci7T <= L -l; Zn6Cci7T = Zn6Cci7T +(471 - 470)) {
        if (rVThcW4r[Zn6Cci7T] != lFC9bW[(498 - 498)])
            continue;
        else {
            for (y = (564 - 564); y < l; y = y + 1)
                if (rVThcW4r[Zn6Cci7T +y] != lFC9bW[y])
                    break;
            if (y != l)
                continue;
            else
                break;
        }
    }
    if (!(L -l + (503 - 502) != Zn6Cci7T))
        cout << rVThcW4r << endl;
    else {
        int GfTxud6Qa3ho = (399 - 399);
        for (; GfTxud6Qa3ho != Zn6Cci7T;) {
            cout << rVThcW4r[GfTxud6Qa3ho];
            GfTxud6Qa3ho = GfTxud6Qa3ho +1;
        }
        cout << c;
        cout << rVThcW4r + GfTxud6Qa3ho +l << endl;
    }
    return (494 - 494);
}

