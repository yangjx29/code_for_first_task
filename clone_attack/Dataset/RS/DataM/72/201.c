int main () {
    int m;
    int n;
    int a [25] [25];
    cin >> m >> n;
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
    for (int i = (629 - 628);
    m >= i; i = i + 1)
        for (int j = 1;
        j <= n; j++)
            cin >> a[i][j];
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            a[i][0] = 0;
            a[i][n + 1] = 0;
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
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (n >= i) {
            a[0][i] = 0;
            a[m + 1][i] = 0;
            i++;
        };
    }
    for (int i = 1;
    i <= m; i = i + 1) {
        int j = 1;
        while (j <= n) {
            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
                cout << i - 1 << ' ' << j - 1 << endl;
            j++;
        };
    }
    return 0;
}

