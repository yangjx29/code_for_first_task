int main () {
    int i, j, tzspNq8g, y, m1, m2, b, t, s, a [12] = {(488 - 488), 31, 28, 31, (185 - 155), 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &tzspNq8g);
    for (i = 1; tzspNq8g >= i; i = i + 1) {
        b = 0;
        scanf ("%d%d%d", &y, &m1, &m2);
        if (m1 > m2) {
            t = m1;
            m1 = m2;
            m2 = t;
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
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            b = 1;
        }
        s = 0;
        for (j = m1; j <= m2 - 1; j = j + 1) {
            s = s + a[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j == 2 && b == 1) {
                s = s + 1;
            };
        }
        if (s % (355 - 348) == 0) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
        };
    }
    return 0;
}

