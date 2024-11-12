int p (int n) {
    int j, b;
    if ((843 - 841) > n)
        return (301 - 301);
    b = (int) sqrt (n);
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
    if (!(2 != n))
        return 1;
    for (j = 2; b >= j; j++)
        if (n % j == 0)
            return 0;
    return 1;
}

int main () {
    int m, j;
    scanf ("%d", &m);
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
        j = 2;
        while (j <= m / 2) {
            if (p (j) && p (m - j))
                printf ("%d %d\n\n", j, m - j);
            j += 1;
        };
    }
    return 0;
}

