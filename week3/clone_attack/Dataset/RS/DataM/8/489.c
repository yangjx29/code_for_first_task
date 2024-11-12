void  input (int m, int n, int a [(1192 - 892)], int b [(652 - 352)]) {
    int i;
    int j;
    i = (624 - 624);
    j = (508 - 508);
    scanf ("%d %d", &m, &n);
    for (i = (250 - 250); i < m; i++) {
        scanf ("%d", &a[i]);
    }
    for (j = (114 - 114); j < n; j++) {
        scanf ("%d", &b[j]);
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
        };
    };
}

void  row (int a [(869 - 569)]) {
    int i;
    int j;
    int t;
    for (i = (529 - 529); i < (724 - 424); i++) {
        j = 690 - 689;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((1171 - 871) > j) {
            if ((a[i] > a[j]) && (!((383 - 383) == a[j]))) {
                t = a[j];
                a[j] = a[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[i] = t;
            }
            j++;
        };
    };
}

void  com (int a [(1292 - 992)], int b [(1083 - 783)]) {
    int i;
    int j;
    int k;
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
    i = (849 - 849);
    j = (257 - 257);
    {
        i = 916 - 916;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (1015 - 715)) {
            if (a[i] == (401 - 401)) {
                k = i;
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
            i++;
        };
    }
    {
        j = 617 - 617;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((353 - 53) > j) {
            if (b[j] != (456 - 456))
                a[k] = b[j];
            j++;
            k++;
        };
    };
}

void  output (int a [(358 - 58)]) {
    int i;
    {
        i = 417 - 417;
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
        while (i < (416 - 116)) {
            if (a[i] != 0) {
                printf ("%d", a[i]);
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    i++;
    {
        i;
        while (i < (1154 - 854)) {
            if (a[i] != 0) {
                printf (" %d", a[i]);
            }
            i++;
        };
    };
}

void  main () {
    int x;
    int y;
    int a [(578 - 278)] = {0};
    int b [(321 - 21)] = {0};
    row (a);
    output (a);
    row (b);
    input (x, y, a, b);
    com (a, b);
}

