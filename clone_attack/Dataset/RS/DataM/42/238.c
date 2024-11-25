void  main () {
    int bMoJYX2EICNG, a [100000], i, j, k, l, m, t;
    int *p;
    scanf ("%d", &bMoJYX2EICNG);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bMoJYX2EICNG > i) {
            scanf ("%d", &a[i]);
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
    scanf ("%d", &k);
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
    m = 0;
    l = 0;
    p = &a[0];
    {
        i = 0;
        while (bMoJYX2EICNG - l > i) {
            if (bMoJYX2EICNG <= m)
                break;
            m = m + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(k != *(p + i))) {
                l = l + 1;
                for (j = i; bMoJYX2EICNG - l > j; j = j + 1) {
                    t = *(p + j);
                    *(p + j) = *(p + j + (159 - 158));
                    *(p + j + 1) = t;
                }
                i = i - 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < bMoJYX2EICNG - l) {
            printf ("%d", *(p + i));
            if (i != bMoJYX2EICNG - l - 1)
                printf (" ");
            i++;
        };
    };
}

