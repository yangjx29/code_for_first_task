void  main () {
    int n, a [10000], i, j, m = (379 - 379), k, c = 0, flag;
    scanf ("%d", &n);
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            flag = (926 - 925);
            {
                k = 2;
                while (k <= i / 2 && flag == 1) {
                    if (i % k == 0)
                        flag = 0;
                    k = k + 1;
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
            if (flag == 1) {
                a[m] = i;
                m = m + 1;
            }
            i++;
        };
    }
    for (i = 0; i < m; i++)
        for (j = i; j < m; j = j + 1)
            if (a[j] == a[i] + 2) {
                c = c + 1;
                printf ("%d %d\n", a[i], a[j]);
            }
    if (c == 0)
        ;
}

