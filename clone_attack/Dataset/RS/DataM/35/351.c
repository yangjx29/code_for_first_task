void  main () {
    int a [8] [8];
    int i;
    int j;
    int WzB29nJX0p;
    int t;
    int QknDl8;
    int n;
    t = 0;
    int max_i;
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
    int max_j;
    int mark_1;
    int mark_2;
    mark_1 = 0;
    mark_2 = 0;
    scanf ("%d,%d", &QknDl8, &n);
    for (i = 0; QknDl8 > i; i = i + 1) {
        for (j = 0; n > j; j = j + 1)
            scanf ("%d", &a[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < QknDl8; i = i + 1) {
        mark_2 = 0;
        for (j = 0; j < n; j++) {
            for (WzB29nJX0p = 0; n > WzB29nJX0p; WzB29nJX0p = WzB29nJX0p +1) {
                if (a[i][WzB29nJX0p] < a[i][j])
                    mark_1 = mark_1 + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (!(n - 1 != mark_1)) {
                max_i = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                max_j = j;
            }
            mark_1 = 0;
        }
        for (WzB29nJX0p = 0; QknDl8 > WzB29nJX0p; WzB29nJX0p = WzB29nJX0p +1) {
            if (a[WzB29nJX0p][max_j] > a[max_i][max_j])
                mark_2++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
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
        if (mark_2 == QknDl8 -1)
            t = t + 1;
        break;
    }
    if (t == 0)
        printf ("No\n");
    else
        printf ("%d+%d\n", max_i, max_j);
}

