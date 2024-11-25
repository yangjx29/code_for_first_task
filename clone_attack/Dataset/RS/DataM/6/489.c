int main () {
    int k, wrvloeB, n, pHYo1j [(928 - 827)] [101], O821cre, rNTeVgYXn, t, sum = 0;
    cin >> k;
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
        t = 436 - 435;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k >= t) {
            int pHYo1j [101] [101] = {0};
            t = t + 1;
            cin >> wrvloeB >> n;
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
            if (!((111 - 110) != wrvloeB) && !(1 != n)) {
                cin >> pHYo1j[1][1];
                cout << pHYo1j[1][1] << endl;
            }
            else {
                for (O821cre = 1; O821cre <= wrvloeB; O821cre = O821cre +1) {
                    rNTeVgYXn = 1;
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
                    while (rNTeVgYXn <= n) {
                        cin >> pHYo1j[O821cre][rNTeVgYXn];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        rNTeVgYXn = rNTeVgYXn + 1;
                    };
                }
                for (rNTeVgYXn = 1; rNTeVgYXn <= n; rNTeVgYXn = rNTeVgYXn + 1) {
                    sum = sum + pHYo1j[1][rNTeVgYXn] + pHYo1j[wrvloeB][rNTeVgYXn];
                }
                for (O821cre = 1; O821cre <= wrvloeB; O821cre = O821cre +1) {
                    sum = sum + pHYo1j[O821cre][1] + pHYo1j[O821cre][n];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sum = sum - pHYo1j[1][1] - pHYo1j[1][n] - pHYo1j[wrvloeB][1] - pHYo1j[wrvloeB][n];
                cout << sum << endl;
            }
            sum = 0;
        };
    }
    return 0;
}

