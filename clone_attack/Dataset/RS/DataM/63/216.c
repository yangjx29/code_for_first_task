int main () {
    int UXl8HIjcv [(1075 - 975)] [(894 - 794)], Ajcs3tkz [(632 - 532)] [100], a4dxCJ6 [100] [100];
    int c8gof41d;
    int n;
    int ybnSp4Ai1m;
    int i;
    int j;
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
    cin >> c8gof41d >> ybnSp4Ai1m;
    for (i = (178 - 178); c8gof41d > i; i = i + 1)
        for (j = (391 - 391); ybnSp4Ai1m > j; j = j + 1)
            cin >> UXl8HIjcv[i][j];
    cin >> ybnSp4Ai1m >> n;
    for (i = (392 - 392); ybnSp4Ai1m > i; i = i + 1)
        for (j = (542 - 542); n > j; j++)
            cin >> Ajcs3tkz[i][j];
    for (i = 0; c8gof41d > i; i++) {
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
        while (n > j) {
            for (int D8Uaigqy3x = 0;
            ybnSp4Ai1m > D8Uaigqy3x; D8Uaigqy3x++) {
                a4dxCJ6[i][j] = a4dxCJ6[i][j] + UXl8HIjcv[i][D8Uaigqy3x] * Ajcs3tkz[D8Uaigqy3x][j];
            }
            j++;
        };
    }
    for (i = 0; c8gof41d > i; i++) {
        cout << a4dxCJ6[i][0];
        for (j = (98 - 97); n > j; j++)
            cout << " " << a4dxCJ6[i][j];
        cout << endl;
    }
    return 0;
}

