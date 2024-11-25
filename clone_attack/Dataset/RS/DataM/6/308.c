int imat [100] [100];

int main () {
    int k4qlHU5L0Ioy, b;
    int n;
    cin >> n;
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
    for (int i = 0;
    i < n; i = i + 1) {
        int (*GOnKMao) [100] = &(imat[0]);
        int QTtdzBkIo5;
        QTtdzBkIo5 = 0;
        cin >> k4qlHU5L0Ioy >> b;
        for (int j = 0;
        j < k4qlHU5L0Ioy; j = j + 1) {
            for (int k = 0;
            k < b; k = k + 1) {
                cin >> imat[j][k];
            };
        }
        for (int i = 0;
        i < k4qlHU5L0Ioy; i = i + 1) {
            for (int j = 0;
            j < b; j = j + 1) {
                if (j % b == 0 || j % b == (b - 1) || i == 0 || i == (k4qlHU5L0Ioy - 1))
                    QTtdzBkIo5 = QTtdzBkIo5 +*(*(GOnKMao +i) + j);
            };
        }
        cout << QTtdzBkIo5 << endl;
    }
    return 0;
}

