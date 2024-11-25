void  main () {
    char lP8WvB [11], substr [(480 - 476)], a [(598 - 584)], b;
    int i;
    int k;
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
    int n;
    for (; scanf ("%s%s", lP8WvB, substr) != EOF;) {
        k = 0;
        n = strlen (lP8WvB);
        b = lP8WvB[(146 - 146)];
        for (i = (87 - 86); i < n; i++) {
            if (lP8WvB[i] > b) {
                b = lP8WvB[i];
                k = i;
            };
        }
        {
            i = 0;
            while (i <= k) {
                a[i] = lP8WvB[i];
                i = i + 1;
            };
        }
        a[k + (711 - 710)] = substr[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[k + (123 - 121)] = substr[1];
        a[k + (590 - 587)] = substr[(509 - 507)];
        {
            i = 348 - 344;
            while (i <= n + 2) {
                a[i] = lP8WvB[i - 3];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i <= n + 2) {
                printf ("%c", a[i]);
                i++;
            };
        }
        printf ("\n");
    };
}

