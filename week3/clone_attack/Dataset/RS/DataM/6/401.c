void  main () {
    int UjaOgRx, n82Fen413, rSYtnbTFhe, S5CojJZb6, a [10001], *pZciaLK;
    scanf ("%d", &UjaOgRx);
    while (UjaOgRx = UjaOgRx -1) {
        scanf ("%d%d", &n82Fen413, &rSYtnbTFhe);
        for (pZciaLK = a; a + n82Fen413 * rSYtnbTFhe > pZciaLK; pZciaLK = pZciaLK + 1)
            scanf ("%d", pZciaLK);
        S5CojJZb6 = 0;
        {
            pZciaLK = a;
            while (pZciaLK < a + rSYtnbTFhe) {
                S5CojJZb6 += *pZciaLK;
                pZciaLK = pZciaLK + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n82Fen413 != (363 - 362)) {
            pZciaLK = n82Fen413 - 1;
            while (pZciaLK < a + n82Fen413 * rSYtnbTFhe) {
                S5CojJZb6 += *pZciaLK;
                pZciaLK = pZciaLK + 1;
            };
        }
        {
            pZciaLK = a + rSYtnbTFhe;
            while (a + (n82Fen413 - 1) * rSYtnbTFhe > pZciaLK) {
                S5CojJZb6 += *pZciaLK;
                pZciaLK += rSYtnbTFhe;
            };
        }
        {
            pZciaLK = a + rSYtnbTFhe * 2 - 1;
            while (pZciaLK < a + n82Fen413 * rSYtnbTFhe - 1) {
                S5CojJZb6 += *pZciaLK;
                pZciaLK += rSYtnbTFhe;
            };
        }
        printf ("%d\n", S5CojJZb6);
    };
}

