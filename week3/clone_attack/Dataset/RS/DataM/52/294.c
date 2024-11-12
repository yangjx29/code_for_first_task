int main () {
    int b [100];
    int a [100];
    int *p = a;
    int i;
    int m, n;
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
    {
        i = 969 - 969;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            cin >> a[i];
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
            i++;
        };
    }
    {
        i = 289 - 289;
        while (i < m) {
            *(b + i) = *(a + i);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i <= m - n - 1; i = i + 1) {
        *(p + i + n) = *(b + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = 0; i < n; i++) {
        *(p + i) = *(b + m - n + i);
    }
    for (i = 0; i < m; i++) {
        if (i != 0)
            cout << " ";
        cout << *(p + i);
    }
    return 0;
}

