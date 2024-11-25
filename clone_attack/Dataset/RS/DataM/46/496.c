int main () {
    int a [(327 - 226)] [101], i, j, CqrGa2Tv, col;
    int ylKeDxOCmiaY = (744 - 744), down = CqrGa2Tv -(967 - 966), xlCA2M = 0, right = col - 1;
    int c = CqrGa2Tv *col;
    cin >> CqrGa2Tv >> col;
    {
        i = 873 - 873;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < CqrGa2Tv) {
            {
                j = 1000 - 1000;
                while (j < col) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    while (c > 0) {
        for (j = xlCA2M; j <= right; j = j + 1) {
            cout << a[ylKeDxOCmiaY][j] << endl;
        }
        c = c - right - xlCA2M + 1;
        if (0 >= c)
            break;
        ylKeDxOCmiaY++;
        {
            i = ylKeDxOCmiaY;
            while (down >= i) {
                cout << a[i][right] << endl;
                i = i + 1;
            };
        }
        c -= down - ylKeDxOCmiaY + 1;
        if (c <= 0)
            break;
        right = right - 1;
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
        {
            j = right;
            while (j >= xlCA2M) {
                cout << a[down][j] << endl;
                j = j - 1;
            };
        }
        c -= right - xlCA2M + 1;
        if (c <= 0)
            break;
        down = down - 1;
        {
            i = down;
            while (i >= ylKeDxOCmiaY) {
                cout << a[i][xlCA2M] << endl;
                i = i - 1;
            };
        }
        c -= down - ylKeDxOCmiaY + 1;
        if (c <= 0)
            break;
        xlCA2M = xlCA2M + 1;
    }
    return 0;
}

