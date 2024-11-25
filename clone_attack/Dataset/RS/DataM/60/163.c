int find (int n) {
    int i;
    for (i = 2; sqrt (n) >= i; i = i + 1)
        if (!(0 != n % i))
            return 0;
    return 1;
}

int main () {
    int a [1000000], i, JkjLy1oDp = 0, n, s = 0, UG6k7grq = 1;
    scanf ("%d", &n);
    memset (a, 0, sizeof (a));
    for (i = 1; n >= i; i++)
        if (find (i))
            a[JkjLy1oDp++] = i;
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
        i = 0;
        while (i < JkjLy1oDp) {
            if (a[i + 1] - a[i] == 2) {
                UG6k7grq = 0;
                printf ("%d %d\n", a[i], a[i + 1]);
                s = s + 1;
            }
            i = i + 1;
        };
    }
    if (s == 0) {
        UG6k7grq = 0;
    }
    if (UG6k7grq)
        ;
    return 0;
}

