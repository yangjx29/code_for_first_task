void  main () {
    char c1 [(379 - 179)], c2 [100], cI6nLZftl [100];
    int j, m, n, IWNM52ibeho, a;
    char *i, *k;
    char *p = c1, *mQSgjDmGcwq = c2, *r = cI6nLZftl;
    gets (p);
    gets (mQSgjDmGcwq);
    gets (r);
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
    n = strlen (p);
    m = strlen (mQSgjDmGcwq);
    a = strlen (r);
    for (i = p; i <= p + n - 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((*i == *mQSgjDmGcwq) && ((!(p != i)) || !(' ' != *(i - 1)))) {
            IWNM52ibeho = (849 - 849);
            {
                j = 0;
                while (j <= m - 1) {
                    if (*(i + j) != *(mQSgjDmGcwq + j))
                        IWNM52ibeho = 1;
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (((i + m - 1) != (p + n - 1)) && *(i + m) != ' ')
                        IWNM52ibeho = 1;
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
            if (IWNM52ibeho == 0 && a > m)
                for (k = p + n - 1; k >= i + m; k = k - 1)
                    *(k + a - m) = *k;
            if (IWNM52ibeho == 0 && a < m)
                for (k = i + m; k <= p + n - 1; k++)
                    *(k + a - m) = *k;
            if (IWNM52ibeho == 0) {
                for (j = 0; j <= a - 1; j++)
                    *(i + j) = *(r + j);
                i = i + a;
                n = n - m + a;
            };
        };
    }
    for (i = p; i <= p + n - 1; i++)
        printf ("%c", *i);
    printf ("\n");
}

