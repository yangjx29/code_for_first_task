int main () {
    int j1;
    int i1;
    int k, c, n = 0, p = 0, m = 0;
    int i, j, a [5] [5];
    for (i = 0; i <= (580 - 576); i = i + 1) {
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
        while (j <= 4) {
            cin >> a[i][j];
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
            j = j + 1;
        };
    }
    for (i = 0; i <= 4; i = i + 1) {
        for (j = 0; j <= 4; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (m < a[i][j]) {
                m = a[i][j];
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
                j1 = j;
            };
        }
        for (k = 0; k <= 4; k = k + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[k][j1] < m) {
                p = (370 - 369);
                break;
            };
        }
        if (p == 0) {
            cout << i + 1 << " " << j1 + 1 << " " << m << endl;
            n = 1;
        }
        m = 0;
        p = 0;
    }
    if (n == 0)
        cout << "not found" << endl;
    return 0;
}

