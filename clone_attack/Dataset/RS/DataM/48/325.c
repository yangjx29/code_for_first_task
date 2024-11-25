int main () {
    int m;
    int n;
    int a [10] [10] = {0};
    int t [8] [2] = {0, 1, 0, -1, 1, 1, 1, -1, 1, 0, -1, 1, -1, 0, -1, -1};
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
    cin >> m >> n;
    a[5][5] = m;
    while (n = n - 1) {
        int b [10] [10] = {0};
        {
            int i = 1;
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
            while (i <= 9) {
                {
                    int j = 1;
                    while (j <= 9) {
                        if (a[i][j] != 0) {
                            {
                                int k = 0;
                                while (8 > k) {
                                    b[i + t[k][0]][j + t[k][1]] = b[i + t[k][0]][j + t[k][1]] + a[i][j];
                                    k = k + 1;
                                };
                            }
                            b[i][j] = b[i][j] + a[i][j] * 2;
                        }
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
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 1;
        i <= 9; i = i + 1)
            for (int j = 1;
            j <= 9; j = j + 1)
                a[i][j] = b[i][j];
    }
    for (int i = 1;
    i <= 9; i++) {
        cout << a[i][1];
        {
            int j = 2;
            while (j <= 9) {
                cout << " " << a[i][j];
                j++;
            };
        }
        cout << endl;
    }
    return 0;
}

