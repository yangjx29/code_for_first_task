int main () {
    int m, n;
    int a [(910 - 810)] [100];
    cin >> m >> n;
    for (int QNdHvWLXnqzI = (544 - 544);
    QNdHvWLXnqzI < m; QNdHvWLXnqzI++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = 0;
        j < n; j++) {
            cin >> a[QNdHvWLXnqzI][j];
        };
    }
    for (int QNdHvWLXnqzI = 0;
    QNdHvWLXnqzI < (m + n); QNdHvWLXnqzI++) {
        int j = 0;
        while (j < m) {
            for (int ex6U0CjnN = 0;
            ex6U0CjnN < n; ex6U0CjnN = ex6U0CjnN + 1) {
                if (j + ex6U0CjnN == QNdHvWLXnqzI) {
                    cout << a[j][ex6U0CjnN] << endl;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    return 0;
}

