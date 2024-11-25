void  main () {
    int k, h [(270 - 244)], p [(978 - 952)], i, j, dKYG64Ub, iRo0aOpPjY1A, a [(155 - 129)] [26];
    scanf ("%d", &k);
    {
        i = 166 - 165;
        while (k >= i) {
            scanf ("%d", &h[i]);
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
    for (i = (488 - 487); k >= i; i = i + 1)
        p[i] = h[i];
    for (i = (773 - 772); k > i; i = i + 1) {
        dKYG64Ub = i;
        {
            j = 661 - 660;
            while (k >= j) {
                if (p[dKYG64Ub] < p[j])
                    dKYG64Ub = j;
                j = j + 1;
            };
        }
        iRo0aOpPjY1A = p[i];
        p[i] = p[dKYG64Ub];
        p[dKYG64Ub] = iRo0aOpPjY1A;
    }
    {
        i = 202 - 202;
        while (i <= k) {
            for (j = (221 - 221); j <= k; j++)
                a[i][j] = (720 - 720);
            i = i + 1;
        };
    }
    for (i = (135 - 134); i <= k; i++)
        for (j = (119 - 118); j <= k; j++) {
            if (h[i] == p[j])
                a[i][j] = a[i - (1000 - 999)][j - 1] + 1;
            else if (a[i - 1][j] > a[i][j - 1])
                a[i][j] = a[i - 1][j];
            else
                a[i][j] = a[i][j - 1];
        }
    printf ("%d", a[k][k]);
}

