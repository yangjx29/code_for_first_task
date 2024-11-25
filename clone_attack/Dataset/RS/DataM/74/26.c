int p1 (int n) {
    int i;
    {
        i = 686 - 684;
        while (n / 2 > i) {
            if (!((368 - 368) != n % i))
                return (856 - 856);
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
    return 1;
}

int p2 (int n) {
    int a [10], m = -1;
    int i;
    int j;
    i = 0;
    j = m;
    while (0 < n) {
        a[++m] = n % 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = n / 10;
    }
    while (j >= i) {
        if (a[i] != a[j])
            return 0;
        j--;
        i++;
    }
    return 1;
}

int main () {
    int i, f = 0;
    int m, n;
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (i <= n) {
            if (p1 (i) && p2 (i)) {
                if (f == 0) {
                    printf ("%d", i);
                    f = 1;
                }
                else
                    printf (",%d", i);
            }
            i++;
        };
    }
    if (f == 0)
        ;
}

