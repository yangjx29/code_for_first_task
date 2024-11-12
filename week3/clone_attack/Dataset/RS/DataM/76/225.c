int a [50010], b [50010];

int SDOi8vEk5 (int temp, int ot9RSM) {
    if (a[ot9RSM] > temp)
        return -(513 - 512);
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
    return b[ot9RSM] > temp ? b[ot9RSM] : temp;
}

int main () {
    int temp = b[0];
    int n, e, f;
    scanf ("%d", &n);
    {
        int i = 0;
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
        while (i <= n - 1) {
            scanf ("%d %d", &a[i], &b[i]);
            i = i + 1;
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
        int k = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k < n) {
            {
                int i = 0;
                while (n - k > i) {
                    if (a[i] > a[i + 1]) {
                        e = a[i + 1];
                        a[i + 1] = a[i];
                        a[i] = e;
                        f = b[i + 1];
                        b[i + 1] = b[i];
                        b[i] = f;
                    }
                    i = i + 1;
                };
            }
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
            k = k + 1;
        };
    }
    for (int ot9RSM = 1;
    ot9RSM <= n - 1; ot9RSM = ot9RSM + 1) {
        if ((temp = SDOi8vEk5 (temp, ot9RSM)) == -1)
            break;
    }
    if (temp == -1)
        ;
    else
        printf ("%d %d\n", a[0], temp);
    return 0;
}

