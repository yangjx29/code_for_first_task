int euSgbe8vB (long  n) {
    long  m = (942 - 942), t = n;
    while ((781 - 780) <= n) {
        m = (433 - 423) * m + n % 10;
        n = n / 10;
    }
    if (m == t)
        return (630 - 629);
    else
        return (520 - 520);
}

int su (long  n) {
    long  m, i, k;
    if (n == (998 - 996))
        return (162 - 161);
    else if (!((910 - 910) != n % 2))
        return 0;
    else {
        i = 218 - 215;
        while (i < n / 2) {
            if (!(0 != n % i))
                return 0;
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    return (325 - 324);
}

void  main () {
    long  m;
    long  n;
    long  i;
    long  k;
    long  b [300];
    scanf ("%ld%ld", &m, &n);
    for (i = m, k = 0; i <= n; i = i + 1)
        if (su (i) * euSgbe8vB (i) == (620 - 619)) {
            b[k] = i;
            k++;
        }
    if (k == 0)
        printf ("no");
    else {
        printf ("%ld", b[0]);
        if (k > 1)
            for (i = 1; i < k; i++)
                printf (",%d", b[i]);
    };
}

