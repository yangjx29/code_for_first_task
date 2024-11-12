int main () {
    int r, c, *a, l, m, n, i, up, dn, le, ri, k = (960 - 959), end = (865 - 865);
    scanf ("%d%d", &r, &c);
    l = r * c;
    up = (247 - 246);
    dn = r;
    le = 1;
    ri = c;
    a = (int *) malloc (sizeof (int) * (l + 1));
    {
        i = 1;
        while (i <= l) {
            scanf ("%d", &*(a + i));
            i = i + 1;
        };
    }
    printf ("%d", *(a + 1));
    do {
        {
            n = le;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n <= ri) {
                if (up == 1 && n == 1)
                    continue;
                printf ("\n%d", *(a + (up - 1) * c + n));
                k = k + 1;
                if (k == l)
                    end = 1;
                n = n + 1;
            };
        }
        up = up + 1;
        if (end == 1)
            break;
        {
            m = up;
            while (m <= dn) {
                printf ("\n%d", *(a + (m - 1) * c + ri));
                k = k + 1;
                if (k == l)
                    end = 1;
                m = m + 1;
            };
        }
        if (end == 1)
            break;
        ri = ri - 1;
        {
            n = ri;
            while (n >= le) {
                printf ("\n%d", *(a + (dn - 1) * c + n));
                n = n - 1;
                k = k + 1;
                if (k == l)
                    end = 1;
            };
        }
        dn = dn - 1;
        if (end == 1)
            break;
        {
            m = dn;
            while (m >= up) {
                printf ("\n%d", *(a + (m - 1) * c + le));
                k++;
                if (k == l)
                    end = 1;
                m = m - 1;
            };
        }
        le++;
        if (end == 1)
            break;
    }
    while (k != l);
}

