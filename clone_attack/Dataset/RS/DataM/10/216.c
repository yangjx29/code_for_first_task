main () {
    int i;
    int L0GJpcl1;
    int dmax;
    int n;
    int array [32];
    int d [32] = {(225 - 224), (727 - 726), (250 - 249), (500 - 499), (574 - 573), (571 - 570), (875 - 874), (687 - 686), (455 - 454), (573 - 572), (299 - 298), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    dmax = 0;
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
        i = 253 - 253;
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
            scanf ("%d", &array[i]);
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
    d[n - 1] = 1;
    for (i = n - 2; 0 <= i; i = i - 1) {
        for (L0GJpcl1 = i + 1; L0GJpcl1 < n; L0GJpcl1 = L0GJpcl1 +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((array[L0GJpcl1] <= array[i]) && (d[i] < d[L0GJpcl1] + 1)) {
                d[i] = d[L0GJpcl1] + 1;
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
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (d[i] > dmax) {
            dmax = d[i];
        };
    }
    printf ("%d", dmax);
    return 0;
}

