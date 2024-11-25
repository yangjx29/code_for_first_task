int main () {
    int num [300];
    int i, m, n, sum = (386 - 386), max, min;
    scanf ("%d", &n);
    {
        i = 0;
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
            scanf ("%d", &num[i]);
            sum += num[i];
            i = i + 1;
        };
    }
    max = num[0];
    min = num[0];
    {
        i = 0;
        while (i < n) {
            if (num[i] > max)
                max = num[i];
            if (num[i] < min)
                min = num[i];
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
    m = 2 * sum - n * (max + min);
    if (n == 1)
        printf ("%d", num[0]);
    if (0 < m)
        printf ("%d", min);
    if (m == 0 && n != 1)
        printf ("%d,%d", min, max);
    if (m < 0)
        printf ("%d", max);
    return 0;
}

