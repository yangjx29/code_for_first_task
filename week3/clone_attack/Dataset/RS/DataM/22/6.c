main () {
    char b [10000];
    gets (b);
    int a [1000] = {0};
    int i = 0, j = 0, Z98Ggae5m = 0, l, m, n, p = 0, q;
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
    for (; !('\0' == b[i]);) {
        if ('9' >= b[i] && b[i] >= '0') {
            if (!(0 != Z98Ggae5m)) {
                Z98Ggae5m = Z98Ggae5m +1;
                a[j] = b[i] - 48;
            }
            else
                a[j] = a[j] * 10 + b[i] - 48;
        }
        else
            j = j + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    q = j;
    for (i = 0; q >= i; i = i + 1) {
        m = 0;
        for (j = 0; q >= j; j = j + 1) {
            if (a[j] > a[i] && m == 0) {
                m = m + 1;
                n = a[j];
            }
            else if (a[j] > a[i] && a[j] != n)
                m = m + 1;
        }
        if (m == 1) {
            printf ("%d", a[i]);
            p = a[i];
            break;
        };
    }
    if (p == 0)
        ;
}

