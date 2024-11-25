void  main () {
    char gKnVZF12lM [30000];
    unsigned  int a [30000], i, j, k, l = 0, m, temp;
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
        while (30000 > i) {
            scanf ("%d%c", &a[i], &gKnVZF12lM[i]);
            if (!(',' != gKnVZF12lM[i]))
                continue;
            else
                break;
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
    if (!(0 != i))
        ;
    else {
        for (j = (353 - 352); j <= i; j = j + 1) {
            if (!(a[j - 1] != a[j]))
                l = l + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (!(i != l))
            printf ("No");
        else {
            for (j = 1; j <= i; j = j + 1) {
                k = 0;
                while (k <= i - j) {
                    if (a[k] < a[k + 1]) {
                        temp = a[k];
                        a[k] = a[k + 1];
                        a[k + 1] = temp;
                    }
                    k = k + 1;
                };
            }
            for (m = 1; m <= i;) {
                if (a[m - 1] > a[m]) {
                    printf ("%d", a[m]);
                    break;
                }
                else
                    m = m + 1;
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
        };
    };
}

