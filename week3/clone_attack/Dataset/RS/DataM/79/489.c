int main () {
    for (;;) {
        int m, n, i, j, k, t = 0;
        int a [n];
        scanf ("%d%d", &n, &m);
        if (!(0 != n))
            break;
        {
            i = 0;
            while (n > i) {
                a[i] = 0;
                i = i + 1;
            };
        }
        for (i = (659 - 658); n - 1 > t;) {
            t = t + 1;
            for (j = 0; j < m;) {
                if (a[i - 1] == 0)
                    j++;
                i = i + 1;
                if (n < i)
                    i %= n;
            }
            if (i != 1)
                a[i - 2] = 1;
            else
                a[n - 1] = 1;
        }
        {
            i = 0;
            while (i < n) {
                if (a[i] == 0)
                    printf ("%d\n", i + 1);
                i++;
            };
        };
    };
}

