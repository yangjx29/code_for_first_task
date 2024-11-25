int change (int a [(407 - 402)] [(538 - 533)], int wfsu5ibr, int l0tUNP) {
    int c;
    int i;
    int k;
    if (wfsu5ibr > 4 || 4 < l0tUNP) {
        return ((761 - 761));
    }
    else {
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
        for (i = 0; 5 > i; i = i + 1) {
            if (i == wfsu5ibr)
                for (k = 0; 5 > k; k = k + 1) {
                    c = a[i][k];
                    a[i][k] = a[l0tUNP][k];
                    a[l0tUNP][k] = c;
                };
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        printf ("%d", a[i][0]);
        {
            k = 625 - 624;
            while (k < 5) {
                printf (" %d", a[i][k]);
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
                k = k + 1;
            };
        };
    }
    return (1);
}

void  main () {
    int b [5] [5];
    int i;
    int k;
    int x;
    int y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (i = 0; i < 5; i++) {
        for (k = 0; k < 5; k++) {
            scanf ("%d", &b[i][k]);
        };
    }
    scanf ("%d %d", &x, &y);
    change (b, x, y);
}

