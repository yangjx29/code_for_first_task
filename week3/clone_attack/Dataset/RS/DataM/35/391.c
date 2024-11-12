void  main () {
    int a [8] [8], G5x6azCJnU, WHdvjcKDw, i, pC7iOaR, max, mujdWJo0 = 1;
    scanf ("%d,%d", &G5x6azCJnU, &WHdvjcKDw);
    for (i = 0; G5x6azCJnU > i; i = i + 1)
        for (pC7iOaR = 0; WHdvjcKDw > pC7iOaR; pC7iOaR = pC7iOaR + 1)
            scanf ("%d", &a[i][pC7iOaR]);
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
        while (G5x6azCJnU > i) {
            max = 0;
            for (pC7iOaR = 1; pC7iOaR < WHdvjcKDw; pC7iOaR = pC7iOaR + 1)
                if (a[i][max] < a[i][pC7iOaR])
                    max = pC7iOaR;
            {
                pC7iOaR = 0;
                while (G5x6azCJnU > pC7iOaR) {
                    if (a[pC7iOaR][max] < a[i][max]) {
                        mujdWJo0 = 0;
                        break;
                    }
                    pC7iOaR++;
                };
            }
            if (mujdWJo0 == 1) {
                printf ("%d+%d\n", i, max);
                break;
            }
            i = i + 1;
        };
    }
    if (mujdWJo0 == 0)
        ;
}

