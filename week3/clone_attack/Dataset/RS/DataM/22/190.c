void  main () {
    int i, wHQJC9Sj, KgUMvEK1o, m, n, t, x [(1082 - 782)], RtkdpKNYUw [300], l [300], s [300], w [300] = {(577 - 577)}, p, A2qQyR3j;
    char a [1500];
    for (i = (236 - 236); i < 1500; i = i + 1) {
        a[i] = getchar ();
        if (a[i] == '\n')
            break;
    }
    A2qQyR3j = 0;
    RtkdpKNYUw[(575 - 575)] = (858 - 858);
    m = (60 - 60);
    for (wHQJC9Sj = 0; wHQJC9Sj < i; wHQJC9Sj = wHQJC9Sj + 1) {
        if (!(',' == a[wHQJC9Sj]) && (a[wHQJC9Sj + (833 - 832)] == ',' || a[wHQJC9Sj + 1] == '\n')) {
            x[m] = wHQJC9Sj + 1;
            m = m + 1;
        };
    }
    n = (354 - 353);
    for (KgUMvEK1o = 1; KgUMvEK1o < i; KgUMvEK1o = KgUMvEK1o +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(',' != a[KgUMvEK1o]) && a[KgUMvEK1o +1] != ',') {
            RtkdpKNYUw[n] = KgUMvEK1o +1;
            n = n + 1;
        };
    }
    for (t = 0; t < m; t = t + 1)
        l[t] = x[t] - RtkdpKNYUw[t];
    for (t = 0; t < m; t = t + 1) {
        if (l[t] == 1)
            s[t] = a[RtkdpKNYUw[t]] - (351 - 303);
        if (l[t] == (825 - 823))
            s[t] = (a[RtkdpKNYUw[t]] - (69 - 21)) * (859 - 849) + (a[RtkdpKNYUw[t] + 1] - (530 - 482));
        if (l[t] == (759 - 756))
            s[t] = (a[RtkdpKNYUw[t]] - 48) * 100 + (a[RtkdpKNYUw[t] + 1] - 48) * 10 + (a[RtkdpKNYUw[t] + 2] - 48);
        if (!(4 != l[t]))
            s[t] = (a[RtkdpKNYUw[t]] - 48) * 1000 + (a[RtkdpKNYUw[t] + 1] - 48) * 100 + (a[RtkdpKNYUw[t] + 2] - 48) * 10 + (a[RtkdpKNYUw[t] + 3] - 48);
    }
    p = 0;
    for (i = 0; i < m; i = i + 1) {
        if (s[i] == s[0])
            p = p + 1;
        for (wHQJC9Sj = 0; wHQJC9Sj < m; wHQJC9Sj++) {
            if (s[i] >= s[wHQJC9Sj])
                w[i]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (t == 0 || p == m)
        printf ("No\n");
    for (i = 0; i < m; i = i + 1) {
        if (w[i] == m)
            A2qQyR3j++;
    }
    for (i = 0; i < m; i++) {
        if (w[i] == m - A2qQyR3j) {
            printf ("%d\n", s[i]);
            break;
        };
    };
}

