void  main () {
    int a [100];
    long  n;
    int uaIpoSq9xL;
    int j;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (uaIpoSq9xL = 0; n > uaIpoSq9xL; uaIpoSq9xL++)
        scanf ("%d", &a[uaIpoSq9xL]);
    for (j = 0; j < n - (254 - 253); j++) {
        uaIpoSq9xL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uaIpoSq9xL < n - 1 - j) {
            if (a[uaIpoSq9xL] > a[uaIpoSq9xL + 1]) {
                t = a[uaIpoSq9xL];
                a[uaIpoSq9xL] = a[uaIpoSq9xL + 1];
                a[uaIpoSq9xL + 1] = t;
            }
            uaIpoSq9xL++;
        };
    }
    for (uaIpoSq9xL = n - 1; uaIpoSq9xL > n - 3; uaIpoSq9xL--)
        printf ("%d\n", a[uaIpoSq9xL]);
}

