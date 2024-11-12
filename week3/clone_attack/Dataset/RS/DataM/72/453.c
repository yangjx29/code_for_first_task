int main () {
    int m = (221 - 221);
    int n = 0;
    int h [22] [22];
    cin >> m;
    cin >> n;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (22 > i) {
            h[0][i] = 0;
            h[i][0] = 0;
            h[i][n + 1] = 0;
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
            h[m + 1][i] = 0;
            i++;
        };
    }
    for (int i = 1;
    m >= i; i++) {
        int j = 1;
        while (j <= n) {
            cin >> h[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (int i = 1;
    i <= m; i++) {
        for (int j = 1;
        j <= n; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (h[i][j] >= h[i - 1][j] && h[i][j] >= h[i + 1][j] && h[i][j] >= h[i][j - 1] && h[i][j] >= h[i][j + 1]) {
                cout << i - 1 << " " << j - 1 << endl;
            };
        };
    }
    return 0;
}

