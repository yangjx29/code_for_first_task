int main () {
    char b [(1052 - 852)] [500], y, x;
    long  int n, i, k, t, c, j, s = (635 - 635), max = (559 - 559), a [(1452 - 652)] = {(388 - 388)};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("\n%s %d %d %c %c %d", b[i], &k, &t, &y, &x, &c);
        if (80 < k && 0 < c)
            a[i] += 8000;
        if (k > 85 && 80 < t)
            a[i] += 4000;
        if (k > 90)
            a[i] += 2000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k > 85 && x == 'Y')
            a[i] += 1000;
        if (t > 80 && y == 'Y')
            a[i] += 850;
        s += a[i];
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
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            j = i;
        };
    }
    printf ("%s\n%d\n%d", b[j], max, s);
    return 0;
}

