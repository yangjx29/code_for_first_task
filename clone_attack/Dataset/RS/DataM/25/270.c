int main () {
    int xDAJhQ6CWweS;
    int K0h47NjO;
    int k;
    int kxEVLvs;
    int num [101] = {0};
    int sNgzFKmTx [101] = {0};
    cin >> kxEVLvs;
    num[100] = 1;
    for (xDAJhQ6CWweS = 1; xDAJhQ6CWweS <= kxEVLvs; xDAJhQ6CWweS = xDAJhQ6CWweS + 1) {
        for (K0h47NjO = 100; K0h47NjO >= 1; K0h47NjO = K0h47NjO -1) {
            sNgzFKmTx[K0h47NjO] = (2 * num[K0h47NjO]) / 10;
            num[K0h47NjO] = (2 * num[K0h47NjO]) % 10;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 99; k >= 1; k--)
            num[k] = num[k] + sNgzFKmTx[k + 1];
    }
    for (xDAJhQ6CWweS = 1; xDAJhQ6CWweS <= 100; xDAJhQ6CWweS = xDAJhQ6CWweS + 1) {
        if (num[xDAJhQ6CWweS] != 0) {
            K0h47NjO = xDAJhQ6CWweS;
            break;
        };
    }
    for (K0h47NjO = xDAJhQ6CWweS; K0h47NjO <= 100; K0h47NjO = K0h47NjO +1)
        cout << num[K0h47NjO];
    cout << endl;
    return 0;
}

