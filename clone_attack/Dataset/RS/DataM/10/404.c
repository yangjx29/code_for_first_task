main () {
    int n, a [(1008 - 983)], b [25], AlM3RD5, j, max, YPXCZ6;
    scanf ("%d", &n);
    for (AlM3RD5 = 0; AlM3RD5 < n; AlM3RD5++) {
        scanf ("%d", &a[AlM3RD5]);
        b[AlM3RD5] = 0;
    }
    for (AlM3RD5 = n - 1; 0 <= AlM3RD5; AlM3RD5--) {
        max = 0;
        for (j = AlM3RD5; n > j; j++) {
            if (a[AlM3RD5] >= a[j]) {
                YPXCZ6 = b[j] + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (YPXCZ6 >= max)
                    max = YPXCZ6;
            };
        }
        b[AlM3RD5] = max;
    }
    max = 0;
    {
        AlM3RD5 = 0;
        while (AlM3RD5 < n) {
            if (b[AlM3RD5] >= max)
                max = b[AlM3RD5];
            AlM3RD5 = AlM3RD5 +1;
        };
    }
    printf ("%d", max);
}

