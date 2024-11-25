int main () {
    int n;
    int i;
    int max;
    int m;
    int b [100];
    int a [100];
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
    max = 0;
    m = 0;
    scanf ("%d\n", &n);
    {
        i = 568 - 568;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d\n", &a[i], &b[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if ((944 - 854) <= a[i] && a[i] <= 140 && b[i] >= 60 && 90 >= b[i])
            m = m + 1;
        else {
            if (max < m) {
                max = m;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m = 0;
        };
    }
    if (a[n - 1] >= 90 && a[n - 1] <= 140 && b[n - 1] >= 60 && b[n - 1] <= 90 && m > max)
        max = m;
    printf ("%d\n", max);
    return 0;
}

