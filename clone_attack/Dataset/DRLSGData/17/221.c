char Grg2Gm [(367 - 257)];

void  gcXi2M () {
    int sieb1wCLvNA;
    int wLgq1V [(525 - 415)];
    int TYMwtiUhEVv;
    int cJ69TeoAX53;
    char u6pCiRl [(173 - 63)];
    sieb1wCLvNA = (686 - 686);
    cout << Grg2Gm << endl;
    cJ69TeoAX53 = strlen (Grg2Gm);
    TYMwtiUhEVv = (678 - 678);
    memset (u6pCiRl, ' ', sizeof (u6pCiRl));
    for (; TYMwtiUhEVv < cJ69TeoAX53;) {
        if (!('(' != Grg2Gm[TYMwtiUhEVv])) {
            sieb1wCLvNA = sieb1wCLvNA + 1;
            wLgq1V[sieb1wCLvNA] = TYMwtiUhEVv;
        }
        if (!(')' != Grg2Gm[TYMwtiUhEVv])) {
            if (!((75 - 75) != sieb1wCLvNA))
                u6pCiRl[TYMwtiUhEVv] = '?';
            else
                sieb1wCLvNA--;
        }
        TYMwtiUhEVv = TYMwtiUhEVv +1;
    }
    {
        TYMwtiUhEVv = 67 - 66;
        for (; sieb1wCLvNA >= TYMwtiUhEVv;) {
            u6pCiRl[wLgq1V[TYMwtiUhEVv]] = '$';
            TYMwtiUhEVv = TYMwtiUhEVv +1;
        }
    }
    {
        TYMwtiUhEVv = 728 - 728;
        for (; TYMwtiUhEVv < cJ69TeoAX53;) {
            cout << u6pCiRl[TYMwtiUhEVv];
            TYMwtiUhEVv = TYMwtiUhEVv +1;
        }
    }
    cout << endl;
}

int main () {
    for (; cin >> Grg2Gm;)
        gcXi2M ();
    return (222 - 222);
}

