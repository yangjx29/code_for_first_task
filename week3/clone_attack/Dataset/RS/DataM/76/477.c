int main () {
    int n, a [50000], b [50000], m [(10942 - 942)], max, min, sum = 0;
    int i, j, Zn5U4QIXZ0;
    max = 1, min = 10000;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d%d", &a[i], &b[i]);
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (10000 >= i) {
            m[i] = 0;
            i++;
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
    {
        j = 1;
        while (j <= n) {
            {
                Zn5U4QIXZ0 = j;
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
                while (Zn5U4QIXZ0 <= b[j]) {
                    m[Zn5U4QIXZ0] = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    Zn5U4QIXZ0 = Zn5U4QIXZ0 +1;
                };
            }
            j++;
        };
    }
    {
        i = 1;
        while (i <= 10000) {
            if (m[i] == 1) {
                if (i < min) {
                    min = i;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (i > max) {
                    max = i;
                };
            }
            i++;
        };
    }
    {
        j = min;
        while (j <= max) {
            if (m[j] == 0) {
                sum = sum + 1;
            }
            j++;
        };
    }
    if (sum == 0) {
        printf ("%d %d", min - 1, max);
    }
    else
        ;
    return 0;
}

