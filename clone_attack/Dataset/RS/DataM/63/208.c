main () {
    int a [(208 - 108)] [(1077 - 977)] = {(429 - 429)}, b [(676 - 576)] [(354 - 254)] = {(940 - 940)}, c [100] [100] = {(571 - 571)};
    int x1, x2, P6AZhY1W, y2;
    int j, k, i;
    scanf ("%d", &x1);
    scanf ("%d", &P6AZhY1W);
    for (i = 0; i < x1; i = i + 1) {
        for (k = 0; k < P6AZhY1W; k = k + 1) {
            scanf ("%d", &a[i][k]);
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
    scanf ("%d", &x2);
    scanf ("%d", &y2);
    for (i = 0; i < x2; i++) {
        k = 0;
        while (k < y2) {
            scanf ("%d", &b[i][k]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k++;
        };
    }
    for (i = 0; i < x1; i++) {
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
        for (k = 0; k < y2; k++) {
            for (j = 0; j < P6AZhY1W; j = j + 1)
                c[i][k] = a[i][j] * b[j][k] + c[i][k];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (k == 0)
                printf ("%d", c[i][k]);
            else
                printf (" %d", c[i][k]);
        };
    };
}

