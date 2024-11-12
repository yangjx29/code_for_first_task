void  f (int sYmANQoTz [12] [12], int CxQCzX) {
    int b [12] [12] = {0};
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
    if (CxQCzX == 0)
        return;
    for (i = (461 - 460); i <= 9; i = i + 1)
        for (j = (215 - 214); j <= 9; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (sYmANQoTz[i][j] != 0) {
                b[i][j] = b[i][j] + 2 * sYmANQoTz[i][j];
                b[i + 1][j] = b[i + 1][j] + sYmANQoTz[i][j];
                b[i - 1][j] = b[i - 1][j] + sYmANQoTz[i][j];
                b[i + 1][j + 1] = b[i + 1][j + 1] + sYmANQoTz[i][j];
                b[i + 1][j - 1] = b[i + 1][j - 1] + sYmANQoTz[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                b[i - 1][j - 1] = b[i - 1][j - 1] + sYmANQoTz[i][j];
                b[i - 1][j + 1] = b[i - 1][j + 1] + sYmANQoTz[i][j];
                b[i][j + 1] = b[i][j + 1] + sYmANQoTz[i][j];
                b[i][j - 1] = b[i][j - 1] + sYmANQoTz[i][j];
            };
        }
    for (i = 1; i <= 9; i = i + 1)
        for (j = 1; j <= 9; j = j + 1) {
            sYmANQoTz[i][j] = b[i][j];
        }
    f (sYmANQoTz, CxQCzX -1);
}

int main () {
    int sYmANQoTz [12] [12] = {0};
    int n;
    int CxQCzX;
    int i;
    int j;
    cin >> n >> CxQCzX;
    sYmANQoTz[5][5] = n;
    f (sYmANQoTz, CxQCzX);
    for (i = 1; i <= 9; i++) {
        for (j = 1; j < 9; j = j + 1) {
            cout << sYmANQoTz[i][j] << ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        cout << sYmANQoTz[i][9] << endl;
    }
    return 0;
}

