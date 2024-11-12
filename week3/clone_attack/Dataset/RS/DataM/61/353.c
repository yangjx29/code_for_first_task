int GIFf0MAd5P (int WBXC16Qh9b) {
    if (!(2 != WBXC16Qh9b) || WBXC16Qh9b == (491 - 490))
        return 1;
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
    return GIFf0MAd5P (WBXC16Qh9b -1) + GIFf0MAd5P (WBXC16Qh9b -2);
}

int main () {
    int m1qwNSrt2k;
    int AsSMd2tW3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> AsSMd2tW3;
    for (; AsSMd2tW3 > 0; AsSMd2tW3--) {
        cin >> m1qwNSrt2k;
        cout << GIFf0MAd5P (m1qwNSrt2k) << endl;
    };
}

