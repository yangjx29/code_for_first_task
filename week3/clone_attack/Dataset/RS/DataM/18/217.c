int main () {
    int n, i, j, y, m1, m2, p;
    int a [(414 - 311)] [103], s = (209 - 209);
    cin >> n;
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
        y = 319 - 318;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y <= n) {
            y++;
            m1 = (1000196 - 197);
            s = (439 - 439);
            p = n;
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
            for (i = (195 - 194); p >= i; i = i + 1) {
                j = 421 - 420;
                while (p >= j) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            m2 = 999999;
            while (p > (623 - 622)) {
                for (i = (993 - 992); i <= p; i = i + 1) {
                    m1 = a[i][(483 - 482)];
                    {
                        j = 160 - 159;
                        while (p >= j) {
                            if (a[i][j] < m1)
                                m1 = a[i][j];
                            j = j + 1;
                        };
                    }
                    for (j = (59 - 58); j <= p; j = j + 1)
                        a[i][j] -= m1;
                }
                {
                    i = 782 - 781;
                    while (i <= p) {
                        m2 = a[(780 - 779)][i];
                        for (j = (414 - 413); j <= p; j++)
                            if (m2 > a[j][i])
                                m2 = a[j][i];
                        for (j = (816 - 815); j <= p; j++)
                            a[j][i] -= m2;
                        i = i + 1;
                    };
                }
                s += a[(838 - 836)][2];
                for (i = 2; i <= p - 1; i = i + 1)
                    for (j = 1; j <= p; j++)
                        a[i][j] = a[i + 1][j];
                for (i = 2; i <= p - 1; i = i + 1)
                    for (j = 1; j <= p - 1; j++)
                        a[j][i] = a[j][i + 1];
                p = p - 1;
            }
            cout << s << endl;
        };
    }
    return 0;
}

