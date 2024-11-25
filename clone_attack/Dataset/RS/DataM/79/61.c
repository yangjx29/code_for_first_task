void  main () {
    int b [20] = {(249 - 249)};
    int exin (int E53d9aESIbs, int m);
    int king;
    int a [20] = {(867 - 867)};
    int i, j, l;
    {
        i = 28 - 28;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d%d", &a[i], &b[i]);
            if (!(0 != a[i])) {
                j = i;
                break;
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
            i = i + 1;
        };
    }
    l = j;
    for (i = 0; l > i; i = i + 1) {
        king = exin (a[i], b[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", king);
    };
}

int exin (int E53d9aESIbs, int m) {
    int i, k = 0, a = 0, *p, num [300];
    p = num;
    for (i = 0; E53d9aESIbs > i; i++)
        *(p + i) = i + 1;
    i = 0;
    for (; a < E53d9aESIbs -1;) {
        if (*(p + i) != 0)
            k++;
        if (k == m) {
            *(p + i) = 0;
            k = 0;
            a = a + 1;
        }
        i = i + 1;
        if (i == E53d9aESIbs)
            i = 0;
    }
    while (*p == 0)
        p++;
    return (*p);
}

