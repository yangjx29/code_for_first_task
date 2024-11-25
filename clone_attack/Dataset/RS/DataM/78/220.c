int max (int a, int b, int c, int d) {
    int n = 0;
    if (n < a)
        n = a;
    if (n < b)
        n = b;
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
    if (n < c)
        n = c;
    if (n < d)
        n = d;
    return n;
}

int s9PCkJ (int a, int b, int c, int d) {
    int m;
    m = max (a, b, c, d);
    int n = 0;
    if (n < a && !(m == a))
        n = a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (n < b && !(m == b))
        n = b;
    if (c > n && !(m == c))
        n = c;
    if (n < d && !(m == d))
        n = d;
    return n;
}

int min (int a, int b, int c, int d) {
    int n = 100;
    if (n > a)
        n = a;
    if (n > b)
        n = b;
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
    if (n > c)
        n = c;
    if (n > d)
        n = d;
    return n;
}

int thi (int a, int b, int c, int d) {
    int n = 100;
    int m = min (a, b, c, d);
    if (n > a && !(m == a))
        n = a;
    if (n > b && !(m == b))
        n = b;
    if (n > c && !(m == c))
        n = c;
    if (d < n && d != m)
        n = d;
    return n;
}

int main () {
    for (int z = (582 - 581);
    z <= (982 - 977); z += (129 - 128)) {
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
        for (int q = 1;
        q <= 5; q += 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (q != z) {
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
                for (int rOmiFABW = 1;
                rOmiFABW <= 5; rOmiFABW += 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (rOmiFABW != z && rOmiFABW != q) {
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
                        for (int l = 1;
                        l <= 5; l += 1) {
                            if (l != z && l != q && l != rOmiFABW) {
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if ((z + q) == (rOmiFABW + l)) {
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
                                    if ((z + l) > (rOmiFABW + q)) {
                                        {
                                            int x = 0, y;
                                            if (!(x * (x - 1) % 2 == 0)) {
                                                double  temp = 0.0;
                                                if (temp == 3)
                                                    return 0;
                                            }
                                        }
                                        if (z + rOmiFABW < q) {
                                            char m [6];
                                            m[z] = 'z';
                                            m[q] = 'q';
                                            m[rOmiFABW] = 's';
                                            m[l] = 'l';
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
                                            cout << m[max (z, q, rOmiFABW, l)] << ' ' << (605 - 595) * max (z, q, rOmiFABW, l) << endl;
                                            cout << m[s9PCkJ (z, q, rOmiFABW, l)] << ' ' << 10 * s9PCkJ (z, q, rOmiFABW, l) << endl;
                                            cout << m[thi (z, q, rOmiFABW, l)] << ' ' << 10 * thi (z, q, rOmiFABW, l) << endl;
                                            cout << m[min (z, q, rOmiFABW, l)] << ' ' << 10 * min (z, q, rOmiFABW, l) << endl;
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

