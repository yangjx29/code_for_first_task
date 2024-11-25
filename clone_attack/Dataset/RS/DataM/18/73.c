int n, i, j, mme9rlf78QMz;

void  XJ (int a [] [100], int n) {
    int b [100] [100] = {0};
    b[0][0] = a[0][0];
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
    for (i = 1; n - 1 > i; i++) {
        b[0][i] = a[0][i + 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i][0] = a[i + 1][0];
    }
    {
        i = 1;
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
        while (n - 1 > i) {
            {
                j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n - 1 > j) {
                    b[i][j] = a[i + 1][j + 1];
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
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            a[i][j] = b[i][j];
        };
    };
}

int MIN (int a [] [100], int n, int sum) {
    if (n == 1)
        return sum;
    else {
        for (i = 0; n > i; i++) {
            int mme9rlf78QMz = a[i][0];
            for (j = 0; n > j; j++) {
                if (mme9rlf78QMz > a[i][j])
                    mme9rlf78QMz = a[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            {
                j = 0;
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
                while (n > j) {
                    a[i][j] = a[i][j] - mme9rlf78QMz;
                    j++;
                };
            };
        }
        {
            i = 0;
            while (i < n) {
                int mme9rlf78QMz = a[0][i];
                for (j = 0; j < n; j++) {
                    if (a[j][i] < mme9rlf78QMz)
                        mme9rlf78QMz = a[j][i];
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
                {
                    j = 0;
                    while (j < n) {
                        a[j][i] = a[j][i] - mme9rlf78QMz;
                        j++;
                    };
                }
                i++;
            };
        }
        sum = sum + a[1][1];
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
        XJ (a, n);
        return MIN (a, n - 1, sum);
    };
}

int main () {
    int a [100] [100] = {0}, k;
    int T9VI5r8mQYH;
    int jj;
    cin >> n;
    for (T9VI5r8mQYH = 0; T9VI5r8mQYH < n; T9VI5r8mQYH++) {
        {
            jj = 0;
            while (n > jj) {
                for (k = 0; k < n; k++) {
                    cin >> a[jj][k];
                }
                jj++;
            };
        }
        cout << MIN (a, n, 0) << endl;
    }
    return 0;
}

