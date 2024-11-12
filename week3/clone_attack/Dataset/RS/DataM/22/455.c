void  main () {
    char f [1000], b [1000];
    int c [1000] = {0};
    int q, k, i, ff, j, t, max, max2;
    gets (f);
    q = 1;
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
    k = strlen (f);
    b[0] = -1;
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
        while (i < k) {
            if (f[i] == ',') {
                b[q] = i;
                q = q + 1;
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
            i = i + 1;
        };
    }
    b[q] = k;
    if (q == 1)
        printf ("No");
    else {
        {
            i = 0;
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
            while (q > i) {
                for (j = b[i] + 1; j < b[i + 1]; j = j + 1) {
                    t = f[j] - '0';
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
                    c[i] = c[i] * 10 + t;
                }
                i++;
            };
        }
        max = c[0];
        for (i = 0; i < q; i = i + 1) {
            if (c[i] > max)
                max = c[i];
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
        {
            i = 0;
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
            while (i < q) {
                if (c[i] != max) {
                    ff = 1;
                    break;
                }
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        max2 = -10000;
        {
            i = 0;
            while (i < q) {
                if (c[i] > max2 && c[i] != max)
                    max2 = c[i];
                i++;
            };
        }
        if (max2 == -10000) {
        }
        else
            printf ("%d", max2);
    };
}

