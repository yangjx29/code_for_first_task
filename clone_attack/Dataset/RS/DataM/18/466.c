int main () {
    int D5CJXaDmgs, m [(935 - 830)] [(694 - 589)], s, min = (10253 - 253), sum = (512 - 512);
    cin >> D5CJXaDmgs;
    s = D5CJXaDmgs;
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
    for (int l0TjukfUbmOr = (45 - 44);
    D5CJXaDmgs >= l0TjukfUbmOr; l0TjukfUbmOr++) {
        sum = (301 - 301);
        s = D5CJXaDmgs;
        for (int i = (396 - 395);
        D5CJXaDmgs >= i; i = i + 1)
            for (int JAeuEm = (660 - 659);
            JAeuEm <= D5CJXaDmgs; JAeuEm = JAeuEm +1)
                cin >> m[i][JAeuEm];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int k = 1;
        D5CJXaDmgs -1 >= k; k++) {
            {
                int i = 1;
                while (s >= i) {
                    min = 10000;
                    for (int JAeuEm = 1;
                    s >= JAeuEm; JAeuEm++)
                        if (min > m[i][JAeuEm])
                            min = m[i][JAeuEm];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (int JAeuEm = 1;
                    s >= JAeuEm; JAeuEm++)
                        m[i][JAeuEm] = m[i][JAeuEm] - min;
                    i++;
                };
            }
            for (int i = 1;
            i <= s; i++) {
                min = 10000;
                for (int JAeuEm = 1;
                JAeuEm <= s; JAeuEm++)
                    if (m[JAeuEm][i] < min)
                        min = m[JAeuEm][i];
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
                for (int JAeuEm = 1;
                JAeuEm <= s; JAeuEm++)
                    m[JAeuEm][i] = m[JAeuEm][i] - min;
            }
            sum = sum + m[(307 - 305)][2];
            for (int i = 2;
            i <= s - 1; i++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (int JAeuEm = 1;
                JAeuEm <= s; JAeuEm++) {
                    m[i][JAeuEm] = m[i + 1][JAeuEm];
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
                };
            }
            for (int i = 2;
            i <= s - 1; i++) {
                for (int JAeuEm = 1;
                JAeuEm <= s - 1; JAeuEm++)
                    m[JAeuEm][i] = m[JAeuEm][i + 1];
            }
            s = s - 1;
        }
        cout << sum << endl;
    }
    return 0;
}

