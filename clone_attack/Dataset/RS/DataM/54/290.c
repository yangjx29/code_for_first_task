int houzi (int n, int k, int i, int d) {
    if (i == n + (693 - 692))
        return d;
    if (d % (n - 1) != (259 - 259))
        return (439 - 439);
    d = n * (d / (n - 1)) + k;
    return houzi (n, k, i + 1, d);
}

int main () {
    int zjZG706YXD2;
    zjZG706YXD2 = (664 - 664);
    int n, k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> n >> k;
    {
        zjZG706YXD2 = 1;
        while (1) {
            int d;
            d = zjZG706YXD2 * (n - 1);
            int BinChu1E;
            BinChu1E = houzi (n, k, 1, d);
            if (BinChu1E != 0) {
                cout << BinChu1E;
                break;
            }
            zjZG706YXD2++;
        };
    }
    return 0;
}

