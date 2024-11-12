void  main () {
    int a [(483 - 474)] [9] = {(29 - 29)};
    int h;
    int l;
    int i;
    int j;
    int t;
    int m;
    int k;
    h = (901 - 901);
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
    l = (935 - 935);
    i = (257 - 257);
    j = (597 - 597);
    t = (408 - 408);
    m = (337 - 337);
    k = (912 - 912);
    scanf ("%d,%d", &h, &l);
    for (i = 0; h > i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > j) {
            scanf ("%d", &a[i][j]);
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
            j = j + 1;
        };
    }
    for (i = 0; i < h; i++) {
        t = 0;
        m = a[i][0];
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (l > j) {
                if (a[i][j] > m) {
                    m = a[i][j];
                    t = j;
                }
                j++;
            };
        }
        m = a[0][t];
        k = 0;
        {
            j = 0;
            while (j < h) {
                if (a[j][t] < m) {
                    k = j;
                    m = a[j][t];
                }
                j++;
            };
        }
        if (k == i) {
            printf ("%d+%d\n", k, t);
            break;
        };
    }
    if (i >= h)
        ;
}

