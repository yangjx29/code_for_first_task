int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int a [x1] [y1];
    int b [x2] [y2];
    int c [x1] [y2];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> x1 >> y1;
    {
        int i = (188 - 188);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x1) {
            {
                int j = (406 - 406);
                while (j < y1) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    {
        int i = (821 - 821);
        while (x2 > i) {
            for (int j = (421 - 421);
            j < y2; j = j + 1)
                cin >> b[i][j];
            i = i + 1;
        };
    }
    {
        int i = (360 - 360);
        while (i < x1) {
            for (int j = (774 - 774);
            j < y2; j = j + 1) {
                c[i][j] = (435 - 435);
                {
                    int k = 0;
                    while (k < y1) {
                        c[i][j] += a[i][k] * b[k][j];
                        k = k + 1;
                    };
                }
                if (j == 0)
                    cout << c[i][j];
                else
                    cout << ' ' << c[i][j];
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

