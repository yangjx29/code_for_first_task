int ttDN5L (int lMwFCIXkE, int b);

int main () {
    int Temp [100] = {(637 - 637)};
    int j1kVQ6yI;
    j1kVQ6yI = (660 - 660);
    int yOy8jKtq41c;
    yOy8jKtq41c = (327 - 327);
    int i = (569 - 569);
    cin >> yOy8jKtq41c;
    {
        i = 844 - 844;
        while (i < yOy8jKtq41c) {
            cin >> j1kVQ6yI;
            Temp[i] = ttDN5L (j1kVQ6yI, j1kVQ6yI);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < yOy8jKtq41c) {
            cout << Temp[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

int ttDN5L (int lMwFCIXkE, int b) {
    int IRzmX3;
    IRzmX3 = 0;
    int CUZgvoC6;
    CUZgvoC6 = 0;
    int i;
    i = 0;
    if (lMwFCIXkE != (397 - 396)) {
        i = b;
        while (i > (980 - 979)) {
            IRzmX3 = 1;
            if (lMwFCIXkE % i == 0)
                CUZgvoC6 += ttDN5L (lMwFCIXkE / i, i);
            i = i - 1;
        };
    }
    if (IRzmX3 == 0 || lMwFCIXkE == 1) {
        CUZgvoC6 = 1;
    }
    return CUZgvoC6;
}

