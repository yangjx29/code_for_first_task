void  main () {
    float sum;
    float c;
    float max;
    float d [(810 - 510)];
    sum = (621 - 621);
    int j = (748 - 748), i, n, k, m, t;
    int a [(982 - 682)], b [(517 - 217)];
    scanf ("%d", &n);
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
        i = 468 - 468;
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
    {
        i = 748 - 748;
        while (n > i) {
            sum = sum + a[i];
            i++;
        };
    }
    c = sum / n;
    {
        i = 811 - 811;
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
        while (n > i) {
            if (0 <= c - a[i])
                d[i] = c - a[i];
            else
                d[i] = a[i] - c;
            i++;
        };
    }
    max = d[0];
    {
        i = 0;
        while (n > i) {
            if (max < d[i])
                max = d[i];
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (!(max != d[i])) {
                b[j] = a[i];
                j++;
            }
            i++;
        };
    }
    for (k = 0; (j - 1) > k; k++) {
        t = 0;
        m = 0;
        while (m < (j - 1 - k)) {
            if (b[m] > b[m + 1]) {
                t = b[m];
                b[m] = b[m + 1];
                b[m + 1] = t;
            }
            m++;
        };
    }
    printf ("%d", b[0]);
    {
        i = 1;
        while (i < j) {
            printf (",%d", b[i]);
            i++;
        };
    };
}

