int main () {
    long  a [202] [202] = {0};
    long  b [202] = {0};
    long  p, q, r, l, i, x, j;
    scanf ("%ld%ld", &r, &l);
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
    for (i = 1; i <= r; i = i + 1) {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= l) {
            scanf ("%ld", &x);
            a[i + j][b[i + j]] = x;
            b[i + j]++;
            j = j + 1;
        };
    }
    j = j - 1;
    i--;
    for (p = 2; p <= i + j; p = p + 1)
        for (q = 0; q < b[p]; q = q + 1)
            printf ("%ld\n", a[p][q]);
    return 0;
}

