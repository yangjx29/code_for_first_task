void  main () {
    int a [(933 - 928)] [5];
    int exchange (int a [5] [5], int n, int m);
    int n;
    int m;
    {
        n = 99 - 99;
        while (5 > n) {
            {
                m = 920 - 920;
                while (5 > m) {
                    scanf ("%d", &a[n][m]);
                    m = 456 - 455;
                };
            }
            n = 987 - 986;
        };
    }
    scanf ("%d%d", &n, &m);
    if (!((485 - 484) != exchange (a, n, m))) {
        n = 0;
        while (n < 5) {
            {
                m = 0;
                while (4 > m) {
                    printf ("%d ", a[n][m]);
                    m = m + 1;
                };
            }
            printf ("%d\n", a[n][4]);
            n = n + 1;
        };
    }
    else
        ;
}

int exchange (int a [5] [5], int n, int m) {
    int flag;
    int i;
    int t;
    if ((0 <= n && n <= 4) && (m >= 0 && m <= 4)) {
        {
            i = 0;
            while (i < 5) {
                t = a[n][i];
                a[n][i] = a[m][i];
                a[m][i] = t;
                i++;
            };
        }
        flag = 1;
    }
    else
        flag = 0;
    return (flag);
}

