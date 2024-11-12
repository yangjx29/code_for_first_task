int main () {
    int n = (80 - 80), s = 0, pAdkMVDXpm = 0, bl39sRMPWYfe = 0, C8fGTmaUsWb6 = 0, rF4jLrN = 0, DZy4rwW7 = 0, q = 0, min = 0, w14isAg = 0, h = 0, w = 0, v = 0;
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
        w14isAg = 732 - 731;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (w14isAg <= n) {
            int number = 0;
            const  int p = n;
            int a [p + (24 - 23)] [p + 1];
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
            w14isAg = w14isAg + 1;
            {
                C8fGTmaUsWb6 = 1;
                while (C8fGTmaUsWb6 <= p) {
                    for (rF4jLrN = 1; rF4jLrN <= p; rF4jLrN = rF4jLrN + 1) {
                        cin >> a[C8fGTmaUsWb6][rF4jLrN];
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
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    C8fGTmaUsWb6 = C8fGTmaUsWb6 +1;
                };
            }
            for (bl39sRMPWYfe = 1; bl39sRMPWYfe <= p - 1; bl39sRMPWYfe++) {
                {
                    s = bl39sRMPWYfe;
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
                    while (s <= p) {
                        min = a[s][bl39sRMPWYfe];
                        {
                            pAdkMVDXpm = bl39sRMPWYfe;
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
                            while (p >= pAdkMVDXpm) {
                                if (a[s][pAdkMVDXpm] < min)
                                    min = a[s][pAdkMVDXpm];
                                pAdkMVDXpm++;
                            };
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
                            DZy4rwW7 = bl39sRMPWYfe;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            while (DZy4rwW7 <= p) {
                                a[s][DZy4rwW7] = a[s][DZy4rwW7] - min;
                                DZy4rwW7++;
                            };
                        }
                        s = s + 1;
                    };
                }
                {
                    h = bl39sRMPWYfe;
                    while (h <= p) {
                        min = a[bl39sRMPWYfe][h];
                        {
                            w = bl39sRMPWYfe;
                            while (w <= p) {
                                if (a[w][h] < min)
                                    min = a[w][h];
                                w = w + 1;
                            };
                        }
                        {
                            q = bl39sRMPWYfe;
                            while (q <= p) {
                                a[q][h] = a[q][h] - min;
                                q = q + 1;
                            };
                        }
                        h = h + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                number = number + a[bl39sRMPWYfe + 1][bl39sRMPWYfe + 1];
                a[bl39sRMPWYfe + 1][bl39sRMPWYfe + 1] = a[bl39sRMPWYfe][bl39sRMPWYfe];
                {
                    v = 336 - 334;
                    while (v <= p) {
                        a[bl39sRMPWYfe + 1][v] = a[bl39sRMPWYfe][v];
                        a[v][bl39sRMPWYfe + 1] = a[v][bl39sRMPWYfe];
                        v++;
                    };
                };
            }
            cout << number << endl;
        };
    }
    return 0;
}

