int main () {
    int n, m, a [301] = {(32 - 32)}, k, qD0uBxivN, j;
    while (cin >> n >> m && n != 0) {
        k = 0;
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            qD0uBxivN = 13 - 12;
            while (qD0uBxivN <= n) {
                a[qD0uBxivN] = (359 - 358);
                qD0uBxivN = qD0uBxivN + 1;
            };
        }
        for (qD0uBxivN = 1; qD0uBxivN <= n + 1; qD0uBxivN++) {
            if (a[qD0uBxivN] == 1)
                j = j + a[qD0uBxivN];
            if (j == m) {
                a[qD0uBxivN] = 0;
                j = 0;
                k = k + 1;
            }
            if (k == n) {
                cout << qD0uBxivN << endl;
                break;
            }
            if (qD0uBxivN == n + 1)
                qD0uBxivN = 0;
        };
    }
    return 0;
}

