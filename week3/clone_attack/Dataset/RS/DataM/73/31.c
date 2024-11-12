int main () {
    int LkInwPe;
    int i;
    int y6M5fOv;
    int m;
    int a [5] [5] = {{0}, {0}};
    LkInwPe = 0;
    for (i = 0; 5 > i; i++) {
        for (y6M5fOv = 0; 5 > y6M5fOv; y6M5fOv = y6M5fOv + 1) {
            cin >> a[i][y6M5fOv];
        };
    }
    for (i = 0; 5 > i; i++) {
        y6M5fOv = 0;
        while (5 > y6M5fOv) {
            m = a[i][y6M5fOv];
            if (a[i][0] <= m && a[i][1] <= m && a[i][2] <= m && a[i][3] <= m && a[i][4] <= m && m <= a[0][y6M5fOv] && m <= a[1][y6M5fOv] && m <= a[2][y6M5fOv] && m <= a[3][y6M5fOv] && m <= a[4][y6M5fOv]) {
                LkInwPe++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                cout << i + 1 << " " << y6M5fOv + 1 << " " << m << endl;
            }
            y6M5fOv = y6M5fOv + 1;
        };
    }
    if (LkInwPe == 0)
        cout << "not found" << endl;
    return 0;
}

