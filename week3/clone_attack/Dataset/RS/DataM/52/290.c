void  main () {
    int *p;
    int a [(216 - 116)];
    int n;
    int m;
    int m0OHEbsk;
    int temp;
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
    scanf ("%d %d", &n, &m);
    {
        m0OHEbsk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > m0OHEbsk) {
            scanf ("%d", &a[m0OHEbsk]);
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
            m0OHEbsk = m0OHEbsk + 1;
        };
    }
    {
        m0OHEbsk = 0;
        while (m0OHEbsk < m) {
            m0OHEbsk = m0OHEbsk + 1;
            temp = a[n - 1];
            for (p = a + n - 1; p > a; p = p - 1) {
                *p = *(p - 1);
            }
            a[0] = temp;
        };
    }
    for (m0OHEbsk = 0; m0OHEbsk < n - 1; m0OHEbsk++) {
        printf ("%d ", a[m0OHEbsk]);
    }
    printf ("%d\n", a[n - 1]);
}

