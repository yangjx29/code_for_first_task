void  main () {
    int a [300];
    int n;
    int i;
    int *p;
    int j;
    int VhyRVzWtuQf;
    scanf ("%d", &n);
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
        while (n > i) {
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
    p = a;
    for (i = 0; n > i; i = i + 1) {
        if (!(-1 == *(p + i))) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = i + 1; n > j; j = j + 1) {
                if (!(*(p + i) != *(p + j)))
                    *(p + j) = -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (*(p + i) != -1) {
            printf ("%d", *(p + i));
            break;
        };
    }
    VhyRVzWtuQf = i;
    {
        i = VhyRVzWtuQf +1;
        while (i < n) {
            if (*(p + i) != -1)
                printf (",%d", *(p + i));
            i = i + 1;
        };
    };
}

