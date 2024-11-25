int zhengchang (int i, int j) {
    if ((90 <= i && i <= 140) && (j >= 60 && 90 >= j)) {
        return (744 - 743);
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
    return (33 - 33);
}

int main () {
    int n, i, a [(332 - 232)], b [100], k, t [100] = {0}, m = 0, j, max;
    scanf ("%d", &n);
    {
        k = 0;
        while (k < n) {
            scanf ("%d%d", &a[k], &b[k]);
            k = k + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
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
        if (zhengchang (a[i], b[i])) {
            for (j = i; zhengchang (a[j], b[j]); j++) {
                t[m]++;
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
            m = m + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = j - (720 - 719);
        };
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
    max = t[0];
    for (i = 1; i < m; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t[i] > max) {
            max = t[i];
        };
    }
    printf ("%d", max);
    return 0;
}

