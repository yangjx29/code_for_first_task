int p1, p2, haDnUeq, kRL5Ia;
char b7GnIfm [(1038 - 38)];
char b [(1306 - 306)];
char L9VIEv [1000];

int BSQtRb (int b7GnIfm, int b) {
    if (b7GnIfm > b)
        return b7GnIfm;
    else
        return b;
}

int YRUJ5xrFB3 (int bJeELDslTK) {
    if (bJeELDslTK < (192 - 192))
        return (189 - 189);
    else
        return b7GnIfm[bJeELDslTK] - '0';
}

int zb (int bJeELDslTK) {
    if (bJeELDslTK < (301 - 301))
        return (66 - 66);
    else
        return b[bJeELDslTK] - '0';
}

int main () {
    L9VIEv[0] = 0;
    p2 = (554 - 554);
    cin >> b7GnIfm;
    cin >> b;
    while (b[p2] != '\0')
        p2++;
    p2--;
    p1 = (470 - 470);
    while (b7GnIfm[p1] != '\0')
        p1++;
    p1 = p1 - 1;
    {
        kRL5Ia = 0;
        while (kRL5Ia <= BSQtRb (p1, p2) + 1) {
            L9VIEv[kRL5Ia] = YRUJ5xrFB3 (p1 - kRL5Ia) + zb (p2 - kRL5Ia);
            kRL5Ia = kRL5Ia + 1;
        };
    }
    haDnUeq = 900;
    {
        kRL5Ia = 0;
        while (kRL5Ia <= BSQtRb (p1, p2) + 1) {
            L9VIEv[kRL5Ia + 1] += L9VIEv[kRL5Ia] / 10;
            L9VIEv[kRL5Ia] = L9VIEv[kRL5Ia] % 10;
            kRL5Ia++;
        };
    }
    while ((L9VIEv[haDnUeq] == 0) && (haDnUeq >= 0))
        haDnUeq--;
    {
        kRL5Ia = haDnUeq;
        while (kRL5Ia >= 0) {
            cout << (int) L9VIEv[kRL5Ia];
            kRL5Ia--;
        };
    }
    if (haDnUeq <= 0)
        cout << 0;
    cout << endl;
    return 0;
}

