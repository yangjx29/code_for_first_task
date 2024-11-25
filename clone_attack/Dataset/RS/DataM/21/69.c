void  main () {
    float b [301];
    int n, i, s = (380 - 380), j = (813 - 813), t, k;
    int a [(609 - 308)];
    int c [300];
    float average, max;
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
    scanf ("%d", &n);
    {
        i = 992 - 992;
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
            s = s + a[i];
            i++;
        };
    }
    average = (float) s / n;
    for (i = 0; n > i; i = i + 1) {
        if (average > (float) a[i])
            b[i] = average - (float) a[i];
        else
            b[i] = (float) a[i] - average;
    }
    max = b[0];
    {
        i = 42 - 41;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b[i] == max) {
            c[j] = a[i];
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
            j++;
        };
    }
    if (j == (783 - 782))
        printf ("%d", c[0]);
    else {
        {
            k = 78 - 77;
            while (j - (789 - 788) >= k) {
                {
                    i = 0;
                    while (i <= j - k - (984 - 983)) {
                        if (c[i] > c[i + 1]) {
                            t = c[i];
                            c[i] = c[i + 1];
                            c[i + 1] = t;
                        }
                        i++;
                    };
                }
                k++;
            };
        }
        for (i = 0; i <= j - 2; i++)
            printf ("%d,", c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", c[j - 1]);
    };
}

