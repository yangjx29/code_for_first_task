int lMBlnX1 (int m, int n) {
    int lAd2ec0;
    if (n == (766 - 765))
        lAd2ec0 = (487 - 486);
    else
        lAd2ec0 = (lMBlnX1 (m, n - 1) + m) % n;
    if (lAd2ec0 == 0)
        lAd2ec0 = n;
    return lAd2ec0;
}

main () {
    int i, m, n;
    {
        i = 1;
        while (1) {
            scanf ("%d %d", &n, &m);
            if (m != 0)
                printf ("%d\n", lMBlnX1 (m, n));
            else
                break;
            i = i + 1;
        };
    };
}

