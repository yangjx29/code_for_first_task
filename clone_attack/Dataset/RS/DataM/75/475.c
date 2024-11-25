int main () {
    int s = (100286 - 286), d = (-100000), i, a [(1196 - 196)] = {(954 - 954)}, x [100000], y [100000], k, j, m = (539 - 539);
    char c;
    for (i = 0;; i = i + 1) {
        scanf ("%d%c", &x[i], &c);
        if (x[i] < s)
            s = x[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != c))
            break;
    }
    k = (i + 1);
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
    for (i = 0; i < k; i = i + 1) {
        scanf ("%d%c", &y[i], &c);
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
        if (y[i] > d)
            d = y[i];
    }
    for (i = s; d > i; i++) {
        for (j = 0; k > j; j = j + 1) {
            if (i >= x[j] && i < y[j])
                a[i - s] = (a[i - s] + 1);
        }
        if (a[i - s] > m)
            m = a[i - s];
    }
    printf ("%d %d", k, m);
    return 0;
}

