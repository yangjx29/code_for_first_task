int main () {
    int m, n, a [500] [500];
    cin >> m >> n;
    {
        int i = (532 - 531);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m) {
            a[i][0] = -1000;
            a[i][n + 1] = -1000;
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
        int j = 1;
        while (j <= n) {
            a[0][j] = -1000;
            a[m + 1][j] = -1000;
            j = j + 1;
        };
    }
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
    {
        int i = 1;
        while (i <= m) {
            for (int j = 1;
            j <= n; j = j + 1)
                cin >> a[i][j];
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= m) {
            {
                int j = 1;
                while (j <= n) {
                    if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]))
                        cout << i - 1 << ' ' << j - 1 << endl;
                    j++;
                };
            }
            i++;
        };
    }
    cin >> n;
}

