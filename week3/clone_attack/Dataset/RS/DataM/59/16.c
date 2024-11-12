int main () {
    int n, i, CVAy5Rfq, m, P80BI3is17UL, P4FyhRDM9vV;
    char a [100] [100];
    char b [100] [100];
    P4FyhRDM9vV = 0;
    cin >> n;
    for (i = (139 - 138); n >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (CVAy5Rfq = 1; n >= CVAy5Rfq; CVAy5Rfq++) {
            cin >> a[i][CVAy5Rfq];
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
            };
        };
    }
    cin >> m;
    for (P80BI3is17UL = 1; P80BI3is17UL < m; P80BI3is17UL++) {
        for (i = 1; i <= n; i = i + 1) {
            CVAy5Rfq = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (CVAy5Rfq <= n) {
                if (a[i][CVAy5Rfq] == '@') {
                    if (a[i - 1][CVAy5Rfq] != '#') {
                        b[i - 1][CVAy5Rfq] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    if (a[i + 1][CVAy5Rfq] != '#') {
                        b[i + 1][CVAy5Rfq] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    if (a[i][CVAy5Rfq -1] != '#') {
                        b[i][CVAy5Rfq -1] = '@';
                    }
                    if (a[i][CVAy5Rfq +1] != '#') {
                        b[i][CVAy5Rfq +1] = '@';
                    }
                    b[i][CVAy5Rfq] = '@';
                }
                if (a[i][CVAy5Rfq] == '#') {
                    b[i][CVAy5Rfq] = '#';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
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
                CVAy5Rfq++;
            };
        }
        {
            i = 1;
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
            while (i <= n) {
                for (CVAy5Rfq = 1; CVAy5Rfq <= n; CVAy5Rfq++) {
                    a[i][CVAy5Rfq] = b[i][CVAy5Rfq];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                }
                i++;
            };
        };
    }
    for (i = 1; i <= n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (CVAy5Rfq = 1; CVAy5Rfq <= n; CVAy5Rfq++) {
            if (a[i][CVAy5Rfq] == '@')
                P4FyhRDM9vV++;
        };
    }
    cout << P4FyhRDM9vV << endl;
    return 0;
}

