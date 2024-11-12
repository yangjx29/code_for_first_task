int main () {
    int a [12] = {(288 - 257), (273 - 245), (568 - 537), (290 - 260), (270 - 239), (955 - 925), (1005 - 974), 31, (424 - 394), 31, 30, 31};
    int b [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    int n, i, M = (561 - 561), N = 0;
    cin >> n;
    while (0 < n) {
        int year, m1, m2, m;
        cin >> year >> m1 >> m2;
        M = 0;
        N = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m1 > m2) {
            m = m1;
            m1 = m2;
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
            m2 = m;
        }
        if (!(0 != year % 400) || (!(0 == year % (453 - 353)) && !(0 != year % 4))) {
            for (i = 0; i < m1 - 1; i = i + 1)
                M = M +b[i];
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i < m2 - 1) {
                    N = N +b[i];
                    i = i + 1;
                };
            }
            if ((N -M) % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            {
                i = 0;
                while (i < m1 - 1) {
                    M = M +a[i];
                    i++;
                };
            }
            if ((N -M) % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            for (i = 0; i < m2 - 1; i = i + 1)
                N = N +a[i];
        }
        n = n - 1;
    };
}

