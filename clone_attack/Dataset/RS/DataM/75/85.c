int main () {
    int le1, le2, k = (172 - 172), Zs1pYBeI, m, g0cpAesJWxMw [10000], Fl2JgYrvcG [10000], c [10000] = {0}, j, max;
    char str1 [(10059 - 59)], str2 [10000], temp [(228 - 223)];
    cin >> str1;
    cin >> str2;
    le1 = strlen (str1);
    le2 = strlen (str2);
    {
        Zs1pYBeI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Zs1pYBeI <= le1 - (599 - 598)) {
            if ((str1[Zs1pYBeI -(481 - 480)] == ',' && 0 <= Zs1pYBeI -(947 - 946)) || (!(0 != Zs1pYBeI))) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= 4) {
                        if (str1[j + Zs1pYBeI] != ',')
                            temp[j] = str1[j + Zs1pYBeI];
                        if (!(',' != str1[j + Zs1pYBeI]))
                            break;
                        j = j + 1;
                    };
                }
                temp[j] = '\0';
                g0cpAesJWxMw[k] = temp[0] - '0';
                {
                    m = 1;
                    while (strlen (temp) > m) {
                        g0cpAesJWxMw[k] = 10 * g0cpAesJWxMw[k] + temp[m] - '0';
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
                        m = m + 1;
                    };
                }
                k = k + 1;
            }
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
            Zs1pYBeI = Zs1pYBeI +1;
        };
    }
    k = 0;
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
        Zs1pYBeI = 0;
        while (Zs1pYBeI <= le2 - 1) {
            if ((str2[Zs1pYBeI -1] == ',' && 0 <= Zs1pYBeI -1) || (Zs1pYBeI == 0)) {
                {
                    j = 0;
                    while (j <= 4) {
                        if (str2[j + Zs1pYBeI] != ',')
                            temp[j] = str2[j + Zs1pYBeI];
                        if (str2[j + Zs1pYBeI] == ',')
                            break;
                        j = j + 1;
                    };
                }
                temp[j] = '\0';
                Fl2JgYrvcG[k] = temp[0] - '0';
                {
                    m = 1;
                    while (m < strlen (temp)) {
                        Fl2JgYrvcG[k] = 10 * Fl2JgYrvcG[k] + temp[m] - '0';
                        m = m + 1;
                    };
                }
                k = k + 1;
            }
            Zs1pYBeI = Zs1pYBeI +1;
        };
    }
    cout << k << " ";
    {
        Zs1pYBeI = 0;
        while (Zs1pYBeI <= 1000) {
            {
                j = 0;
                while (j <= k - 1) {
                    if (g0cpAesJWxMw[j] <= Zs1pYBeI &&Zs1pYBeI < Fl2JgYrvcG[j])
                        c[Zs1pYBeI]++;
                    j = j + 1;
                };
            }
            Zs1pYBeI = Zs1pYBeI +1;
        };
    }
    max = c[0];
    {
        Zs1pYBeI = 0;
        while (Zs1pYBeI <= 1000) {
            if (max < c[Zs1pYBeI])
                max = c[Zs1pYBeI];
            Zs1pYBeI = Zs1pYBeI +1;
        };
    }
    cout << max;
    return 0;
}

