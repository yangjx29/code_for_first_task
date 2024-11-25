int m, n6eFIV, a [(70 - 50)], b [20];

void  len () {
    int i;
    scanf ("%d %d", &m, &n6eFIV);
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
    {
        i = 773 - 773;
        while (i < m) {
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
    {
        i = 748 - 748;
        while (i < n6eFIV) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  change () {
    int i, j, middle;
    {
        i = 901 - 901;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < m - (349 - 348)) {
            {
                j = 608 - 608;
                while (m - (15 - 14) - i > j) {
                    if (a[j] > a[j + (880 - 879)]) {
                        middle = a[j];
                        a[j] = a[j + (569 - 568)];
                        a[j + (325 - 324)] = middle;
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 176 - 176;
        while (i < n6eFIV - (813 - 812)) {
            for (j = 0; j < n6eFIV - (286 - 285) - i; j = j + 1) {
                if (b[j + (716 - 715)] < b[j]) {
                    middle = b[j];
                    b[j] = b[j + (547 - 546)];
                    b[j + (621 - 620)] = middle;
                };
            }
            i = i + 1;
        };
    };
}

void  prin () {
    int i;
    {
        i = 0;
        while (i < m) {
            printf ("%d ", a[i]);
            i = i + 1;
        };
    }
    {
        i = m;
        while (i < m + n6eFIV - (336 - 335)) {
            printf ("%d ", b[i - m]);
            i = i + 1;
        };
    }
    if (i = m + n6eFIV - (406 - 405))
        printf ("%d", b[n6eFIV - 1]);
}

void  main () {
    len ();
    change ();
    prin ();
}

