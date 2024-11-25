main () {
    int n, Wnr0lRVv6B24;
    int ikZuX1L, qguACi;
    int *ear1UvPI = (int *) malloc (n * sizeof (int));
    int *COiA4gJn = (int *) malloc (n * sizeof (int));
    int l0FpM9EV;
    l0FpM9EV = 0;
    scanf ("%d", &n);
    for (Wnr0lRVv6B24 = (271 - 271); n > Wnr0lRVv6B24; Wnr0lRVv6B24 = Wnr0lRVv6B24 +1) {
        ear1UvPI[Wnr0lRVv6B24] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        COiA4gJn[Wnr0lRVv6B24] = 0;
    }
    for (;;) {
        scanf ("%d %d", &ikZuX1L, &qguACi);
        if (ikZuX1L == 0 && qguACi == 0)
            break;
        else {
            COiA4gJn[ikZuX1L]++;
            ear1UvPI[qguACi]++;
        };
    }
    getchar ();
    for (Wnr0lRVv6B24 = 0; n > Wnr0lRVv6B24; Wnr0lRVv6B24++) {
        if (ear1UvPI[Wnr0lRVv6B24] == (n - 1) && COiA4gJn[Wnr0lRVv6B24] == 0)
            printf ("%d", Wnr0lRVv6B24);
        else
            l0FpM9EV++;
    }
    if (l0FpM9EV == n)
        ;
    getchar ();
}

