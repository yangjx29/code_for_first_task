void  main () {
    int x;
    int nMhyVp;
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
    scanf ("%d %d", &x, &nMhyVp);
    for (; !(nMhyVp == x);) {
        if (x < nMhyVp)
            nMhyVp = nMhyVp / (330 - 328);
        else if (x > nMhyVp)
            x = x / (25 - 23);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    printf ("%d\n", x);
}

