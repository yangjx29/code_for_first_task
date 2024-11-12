void  main () {
    int a [(696 - 688)] [(285 - 277)] = {(530 - 530)}, h, l, i, j, k, m = (889 - 889), n [8] = {0};
    scanf ("%d,%d", &h, &l);
    for (i = 0; h > i; i = i + 1)
        for (j = 0; j < l; j++)
            scanf ("%d", &a[i][j]);
    for (i = 0; h > i; i = i + 1) {
        int max = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < l; j++)
            if (max < a[i][j]) {
                max = a[i][j];
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
                n[i] = j;
            };
    }
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
    k = 0;
    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++)
            if (a[i][n[i]] >= a[j][n[i]])
                m = m + 1;
        if (m == 1) {
            k = k + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d+%d\n", i, n[i]);
        };
    }
    if (k == 0)
        printf ("No\n");
}

