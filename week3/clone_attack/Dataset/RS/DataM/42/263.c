void  main () {
    int n;
    int i;
    int k;
    int a [(100059 - 59)];
    int *LY3riz;
    int *q;
    scanf ("%d", &n);
    for (i = 0; i < n - 1; i = i + 1)
        scanf ("%d ", &a[i]);
    scanf ("%d", &a[n - 1]);
    LY3riz = a;
    scanf ("%d", &k);
    for (i = 0; i < n; i++, LY3riz++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(k != *LY3riz)) {
            for (q = LY3riz; q < a + n; q++)
                *(q) = *(q + 1);
            LY3riz = LY3riz -1;
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
            n--;
            i--;
        };
    }
    LY3riz = a;
    printf ("%d", *LY3riz);
    {
        i = 1;
        while (i < n) {
            printf (" %d", *(LY3riz +i));
            i++;
        };
    };
}

