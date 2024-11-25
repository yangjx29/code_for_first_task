main () {
    int mwQkBA, a, dloYkt, n, RNr0jxEs = 0, c [(10656 - 556)], d [10100];
    scanf ("%d", &n);
    while (scanf ("%d%d", &a, &dloYkt) == 2) {
        if (a == 0 && dloYkt == 0)
            break;
        d[a]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[dloYkt]++;
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    {
        mwQkBA = 0;
        while (mwQkBA <= n - 1) {
            if (c[mwQkBA] == n - 1 && d[mwQkBA] == 0) {
                RNr0jxEs = 1;
                printf ("%d", mwQkBA);
            }
            mwQkBA++;
        };
    }
    if (RNr0jxEs == 0)
        printf ("NOT FOUND\n");
    return 0;
}

