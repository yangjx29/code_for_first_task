void  main () {
    int n;
    int m;
    int i, j, m1, cur, Io2HCaSM;
    int N57OSX61es [10000];
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
    int b;
    b = 0;
    while (1) {
        scanf ("%d %d", &n, &m);
        if (!(0 != n) && m == 0)
            break;
        {
            i = 1;
            while (n >= i) {
                N57OSX61es[i] = i + 1;
                i++;
            };
        }
        N57OSX61es[n] = 1;
        cur = 1;
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
            i = 1;
            while (i <= n - 1) {
                m1 = m % (n - i + 1);
                if (m1 == 0)
                    m1 = n - i + 1;
                else if (m1 == 1)
                    m1 = n - i + 1 + 1;
                i++;
                {
                    j = 0;
                    while (j < m1 - 2) {
                        j++;
                        cur = N57OSX61es[cur];
                    };
                }
                Io2HCaSM = N57OSX61es[N57OSX61es[cur]];
                N57OSX61es[N57OSX61es[cur]] = 0;
                N57OSX61es[cur] = Io2HCaSM;
                cur = N57OSX61es[cur];
            };
        }
        if (b)
            ;
        printf ("%d", cur);
        b = 1;
    };
}

