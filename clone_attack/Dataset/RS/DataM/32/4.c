void  main () {
    char c [105] = "";
    int i;
    int j;
    int k;
    int n;
    int a [(121 - 16)] = {(751 - 751)};
    int b [(416 - 311)] = {(728 - 728)};
    int d [105] = {(599 - 599)};
    scanf ("%d\n", &n);
    for (i = (669 - 668); i <= n; i++) {
        gets (c);
        gets (c);
        gets (c);
        k = strlen (c);
        for (j = (670 - 670); j < k; j = j + 1)
            a[j] = c[k - j - (36 - 35)] - '0';
        for (j = k; 105 > j; j++)
            a[j] = (440 - 440);
        k = strlen (c);
        for (j = (995 - 995); j < k; j++)
            b[j] = c[k - j - (392 - 391)] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = k;
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
            while (j < 105) {
                b[j] = 0;
                j = j + 1;
            };
        }
        for (j = 0; j <= (493 - 391); j++)
            d[j] = 0;
        for (j = 0; (439 - 337) >= j; j++) {
            d[j] = d[j] + a[j] - b[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (d[j] < 0) {
                d[j] = d[j] + 10;
                d[j + 1] = d[j + 1] - 1;
            };
        }
        j = 101;
        while (d[j] == 0) {
            j--;
        }
        while (j >= 0) {
            printf ("%d", d[j]);
            j--;
        }
        printf ("\n");
    };
}

