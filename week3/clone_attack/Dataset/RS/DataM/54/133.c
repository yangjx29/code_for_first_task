void  main (void ) {
    int n, k, bXtoAMIk4, KoJGXtxL, i;
    scanf ("%d %d", &n, &k);
    bXtoAMIk4 = n - 1;
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
    do {
        KoJGXtxL = bXtoAMIk4;
        {
            i = 1;
            while (i <= n - 1) {
                KoJGXtxL = KoJGXtxL *n / (n - 1) + k;
                if (KoJGXtxL % (n - 1) != 0)
                    break;
                i++;
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
        bXtoAMIk4 = bXtoAMIk4 + n - 1;
    }
    while (KoJGXtxL % (n - 1) != 0);
    KoJGXtxL = KoJGXtxL *n / (n - 1) + k;
    printf ("%d", KoJGXtxL);
}

