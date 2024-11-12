int n, m, s, a [101] [101];

void  guiling (int i, int jPCpLbNj, int FgW4Xej, int uXS9M3b) {
    if (i == m || jPCpLbNj == m)
        return;
    if (s > a[i][jPCpLbNj])
        s = a[i][jPCpLbNj];
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
    guiling (i + FgW4Xej, jPCpLbNj + uXS9M3b, FgW4Xej, uXS9M3b);
    a[i][jPCpLbNj] -= s;
}

void  xiaojian () {
    int i;
    int jPCpLbNj;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        i = 0;
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
        while (i < m) {
            {
                jPCpLbNj = 1;
                while (jPCpLbNj < m) {
                    a[i][jPCpLbNj] = a[i][jPCpLbNj + 1];
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
                    jPCpLbNj++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                jPCpLbNj = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (jPCpLbNj < m) {
                    a[jPCpLbNj][i] = a[jPCpLbNj + 1][i];
                    jPCpLbNj++;
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
            i++;
        };
    };
}

int main () {
    int i;
    int jPCpLbNj;
    int l;
    cin >> n;
    l = n;
    while (0 < l) {
        int vR0ySzkj8 = 0;
        {
            i = 0;
            while (i < n) {
                {
                    jPCpLbNj = 0;
                    while (jPCpLbNj < n) {
                        cin >> a[i][jPCpLbNj];
                        jPCpLbNj++;
                    };
                }
                i++;
            };
        }
        for (m = n; m > 0; m--) {
            {
                i = 0;
                while (i < 2 * m) {
                    if (i < m) {
                        s = 1000;
                        guiling (i, 0, 0, 1);
                    }
                    else {
                        s = 1000;
                        guiling (0, i - m, 1, 0);
                    }
                    i++;
                };
            }
            vR0ySzkj8 += a[1][1];
            xiaojian ();
        }
        cout << vR0ySzkj8 << endl;
        l--;
    }
    return 0;
}

