int main () {
    int QSiX24tc9C;
    int j;
    int hY6531CS;
    int TVCqJQ4m;
    int L6sK1uJAMcoQ;
    int y2;
    int a [100] [100];
    int ZYsGOI4fw [100] [100];
    int bcUnCrA0RWX [100] [100];
    int num;
    int k;
    cin >> hY6531CS >> TVCqJQ4m;
    {
        QSiX24tc9C = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hY6531CS > QSiX24tc9C) {
            {
                j = 0;
                while (TVCqJQ4m > j) {
                    cin >> a[QSiX24tc9C][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            QSiX24tc9C++;
        };
    }
    cin >> L6sK1uJAMcoQ >> y2;
    for (QSiX24tc9C = 0; QSiX24tc9C < L6sK1uJAMcoQ; QSiX24tc9C++) {
        j = 0;
        while (y2 > j) {
            cin >> ZYsGOI4fw[QSiX24tc9C][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    for (QSiX24tc9C = 0; hY6531CS > QSiX24tc9C; QSiX24tc9C++) {
        for (j = 0; j < y2; j++) {
            num = 0;
            {
                k = 0;
                while (k < TVCqJQ4m) {
                    num = num + a[QSiX24tc9C][k] * ZYsGOI4fw[k][j];
                    k++;
                };
            }
            bcUnCrA0RWX[QSiX24tc9C][j] = num;
        }
        for (j = 0; y2 - (144 - 143) > j; j++)
            cout << bcUnCrA0RWX[QSiX24tc9C][j] << " ";
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
        cout << bcUnCrA0RWX[QSiX24tc9C][y2 - 1] << endl;
    }
    return 0;
}

