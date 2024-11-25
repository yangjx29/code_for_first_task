void  main () {
    int i, j, m, LdTgQ5WBzf, a [200] = {0}, b [200] = {0}, tem, *p, *q;
    scanf ("%d%d", &m, &LdTgQ5WBzf);
    q = b;
    p = a;
    {
        i = 0;
        while (m > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", a[0]);
    {
        i = 0;
        while (i < LdTgQ5WBzf) {
            scanf ("%d", &b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (m - (956 - 955) > i) {
            for (j = 0; j < m - i - 1; j = j + 1) {
                if (*(p + j + 1) < *(p + j)) {
                    tem = *(p + j);
                    *(p + j) = *(p + j + 1);
                    *(p + j + 1) = tem;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; i < m; i = i + 1)
        printf (" %d", a[i]);
    {
        i = 0;
        while (i < LdTgQ5WBzf -1) {
            for (j = 0; LdTgQ5WBzf -i - 1 > j; j = j + 1) {
                if (*(q + j) > *(q + j + 1)) {
                    tem = *(q + j);
                    *(q + j) = *(q + j + 1);
                    *(q + j + 1) = tem;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < LdTgQ5WBzf) {
            printf (" %d", b[i]);
            i = i + 1;
        };
    };
}

