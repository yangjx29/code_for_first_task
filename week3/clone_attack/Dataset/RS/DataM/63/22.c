int max (int x7FiBr2C, int b) {
    if (x7FiBr2C > b)
        return x7FiBr2C;
    else
        return b;
}

int dUXeyw2P (int x7FiBr2C, int b) {
    if (x7FiBr2C > b)
        return b;
    else
        return x7FiBr2C;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int UiXKPh, y1, x2, y2, x, y, m, KLT5wvBiUX, j, k, x7FiBr2C [(210 - 110)] [(1029 - 929)], b [100] [100], c [100] [100];
    {
        KLT5wvBiUX = 721 - 721;
        while (KLT5wvBiUX < 100) {
            {
                j = 628 - 628;
                while (j < 100) {
                    x7FiBr2C[KLT5wvBiUX][j] = (329 - 329);
                    b[KLT5wvBiUX][j] = (253 - 253);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    c[KLT5wvBiUX][j] = (301 - 301);
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            KLT5wvBiUX = KLT5wvBiUX +1;
        };
    }
    cin >> UiXKPh >> y1;
    for (KLT5wvBiUX = (296 - 296); KLT5wvBiUX < UiXKPh; KLT5wvBiUX = KLT5wvBiUX +1) {
        j = 0;
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
        while (j < y1) {
            cin >> x7FiBr2C[KLT5wvBiUX][j];
            j = j + 1;
        };
    }
    cin >> x2 >> y2;
    {
        KLT5wvBiUX = 0;
        while (x2 > KLT5wvBiUX) {
            {
                j = 0;
                while (j < y2) {
                    cin >> b[KLT5wvBiUX][j];
                    j = j + 1;
                };
            }
            KLT5wvBiUX = KLT5wvBiUX +1;
        };
    }
    x = max (UiXKPh, x2);
    y = max (y1, y2);
    m = dUXeyw2P (x, y);
    {
        KLT5wvBiUX = 0;
        while (KLT5wvBiUX < x) {
            {
                j = 0;
                while (j < y) {
                    {
                        k = 0;
                        while (k < m) {
                            c[KLT5wvBiUX][j] = c[KLT5wvBiUX][j] + x7FiBr2C[KLT5wvBiUX][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            KLT5wvBiUX = KLT5wvBiUX +1;
        };
    }
    {
        KLT5wvBiUX = 0;
        while (KLT5wvBiUX < UiXKPh) {
            {
                j = 0;
                while (j < y2 - (132 - 131)) {
                    cout << c[KLT5wvBiUX][j] << " ";
                    j++;
                };
            }
            cout << c[KLT5wvBiUX][y2 - 1] << endl;
            KLT5wvBiUX = KLT5wvBiUX +1;
        };
    }
    return 0;
}

