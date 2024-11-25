int main () {
    int y, m, d, a = 0, b, c, e, f;
    scanf ("%d%d%d", &y, &m, &d);
    e = (y - 1) / 400;
    f = (y - 1) / 4 - (y - 1) / 100 + e;
    a = f + y - 1;
    if (y % 400 == 0 || (!(0 == y % 100) && y % 4 == 0)) {
        if (m == 1) {
            b = d;
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
        if (m == 2) {
            b = 3 + d;
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
        }
        if (!(3 != m)) {
            b = 4 + d;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (!(4 != m)) {
            b = d;
        }
        if (!(5 != m)) {
            b = 121 + d;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (!((703 - 697) != m)) {
            b = 12 + d;
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
        if (m == 7) {
            b = 42 + d;
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
        if (!(8 != m)) {
            b = 3 + d;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (m == 9) {
            b = 34 + d;
        }
        if (m == 10) {
            b = d + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (!(11 != m)) {
            b = 4 + d;
        }
        if (m == 12) {
            b = 6 + d;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    if (!(0 == y % 4) || (y % 400 != 0 && !(0 != y % 100))) {
        if (m == 1) {
            b = d;
        }
        if (m == 2) {
            b = 3 + d;
        }
        if (m == 3) {
            b = 3 + d;
        }
        if (m == 4) {
            b = d + 6;
        }
        if (m == 5) {
            b = 1 + d;
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
        if (m == 6) {
            b = 11 + d;
        }
        if (m == 7) {
            b = 6 + d;
        }
        if (m == 8) {
            b = 2 + d;
        }
        if (m == 9) {
            b = 5 + d;
        }
        if (m == 10) {
            b = d + 1;
        }
        if (m == 11) {
            b = 3 + d;
        }
        if (m == 12) {
            b = 5 + d;
        };
    }
    c = (a + b) % 7;
    if (c == 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (c == 2) {
    }
    if (c == 3) {
        printf ("Wed.");
    }
    if (c == 4) {
    }
    if (c == 5) {
    }
    if (c == 6) {
    }
    if (c == 0) {
    }
    return 0;
}

