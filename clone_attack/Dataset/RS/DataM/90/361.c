int apple (int m, int n, int j);

int main (void ) {
    int t;
    int j;
    int n;
    int m;
    int s;
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
    scanf ("%d", &t);
    for (j = (476 - 476); t > j; j++) {
        scanf ("%d%d", &m, &n);
        if (m < n)
            n = m;
        s = apple (m, n, 0);
        printf ("%d\n", s);
    }
    return 0;
}

int apple (int m, int n, int j) {
    int i, s = 0;
    if (!(1 != n))
        return m >= j;
    {
        i = j;
        while (i < m) {
            s = s + apple (m - i, n - 1, i);
            i++;
        };
    }
    return s;
}

