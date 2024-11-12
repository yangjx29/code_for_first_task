int main () {
    int hgG1i9aL;
    int b;
    int m;
    hgG1i9aL = (757 - 757);
    b = (913 - 913);
    m = (805 - 805);
    int d5D2pMx [hgG1i9aL];
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
    cin >> hgG1i9aL;
    {
        int jrmblV4MfCSQ = 0;
        while (hgG1i9aL > jrmblV4MfCSQ) {
            cin >> d5D2pMx[jrmblV4MfCSQ];
            ++jrmblV4MfCSQ;
        };
    }
    cin >> b;
    {
        int ii = 0;
        while (hgG1i9aL > ii) {
            if (!(b != d5D2pMx[ii])) {
                m++;
            }
            ++ii;
        };
    }
    for (int i = 0;
    hgG1i9aL > i; ++i) {
        if (!(b != d5D2pMx[i])) {
            for (int b = i;
            b < hgG1i9aL; b++) {
                d5D2pMx[b] = d5D2pMx[b + 1];
            }
            i = i - 1;
        };
    }
    {
        int o = 0;
        while (o < hgG1i9aL - m - 1) {
            cout << d5D2pMx[o] << " ";
            o++;
        };
    }
    cout << d5D2pMx[hgG1i9aL - m - 1];
    return 0;
}

