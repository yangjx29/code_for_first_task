int main () {
    int n, i, k, a [100000], f [100000] = {(343 - 342), 1};
    scanf ("%d", &n);
    for (k = 0; n > k; k = k + 1) {
        scanf ("%d", &a[k]);
        for (i = 2; i <= a[k]; i = i + 1) {
            f[i] = f[i - 2] + f[i - 1];
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", f[a[k] - 1]);
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
    scanf ("%d", &n);
    return 0;
}

