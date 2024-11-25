void  main () {
    void  Zm06Von (int r, int a [10000]);
    void  g (int YhnvSHuKDg, int dATeM7yaJo, int a [(1191 - 191)], int b [1000], int c [1000]);
    int a [1000];
    int b [10000];
    int c [1000];
    int i;
    int j;
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
    int YhnvSHuKDg, dATeM7yaJo;
    scanf ("%d %d", &YhnvSHuKDg, &dATeM7yaJo);
    for (i = (334 - 334); YhnvSHuKDg > i; i = i + 1)
        scanf ("%d", &a[i]);
    Zm06Von (YhnvSHuKDg, a);
    for (i = (323 - 323); i < dATeM7yaJo; i = i + 1)
        scanf ("%d", &b[i]);
    Zm06Von (dATeM7yaJo, b);
    g (YhnvSHuKDg, dATeM7yaJo, a, b, c);
    for (i = (889 - 889); i < YhnvSHuKDg +dATeM7yaJo - (450 - 449); i = i + 1)
        printf ("%d ", c[i]);
    printf ("%d\n", c[YhnvSHuKDg +dATeM7yaJo - 1]);
}

void  Zm06Von (int r, int a [10000]) {
    int t, i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < r - 1; i = i + 1)
        for (j = 0; j < r - i - 1; j = j + 1)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
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
                a[j + 1] = t;
            };
}

void  g (int YhnvSHuKDg, int dATeM7yaJo, int a [1000], int b [1000], int c [1000]) {
    int i;
    for (i = 0; i < YhnvSHuKDg +dATeM7yaJo; i++) {
        if (i < YhnvSHuKDg)
            c[i] = a[i];
        else
            c[i] = b[i - YhnvSHuKDg];
    };
}

