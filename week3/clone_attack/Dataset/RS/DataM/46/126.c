void  SeCaDO (int wVQaL8ey [(810 - 710)] [100], int kWj6MGi, int xUknOYGtS, int erow, int F80hunHXsS) {
    int UKoDhO26TQz, USxb1wKpjga;
    {
        UKoDhO26TQz = xUknOYGtS;
        while (F80hunHXsS >= UKoDhO26TQz) {
            printf ("%d\n", wVQaL8ey[kWj6MGi][UKoDhO26TQz]);
            UKoDhO26TQz = UKoDhO26TQz +1;
        };
    }
    for (UKoDhO26TQz = kWj6MGi + (308 - 307); erow >= UKoDhO26TQz; UKoDhO26TQz = UKoDhO26TQz +1)
        printf ("%d\n", wVQaL8ey[UKoDhO26TQz][F80hunHXsS]);
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
    if (kWj6MGi < erow) {
        UKoDhO26TQz = 534 - 533;
        while (xUknOYGtS <= UKoDhO26TQz) {
            printf ("%d\n", wVQaL8ey[erow][UKoDhO26TQz]);
            UKoDhO26TQz--;
        };
    }
    if (xUknOYGtS < F80hunHXsS)
        for (UKoDhO26TQz = erow - (611 - 610); UKoDhO26TQz >= kWj6MGi + 1; UKoDhO26TQz = UKoDhO26TQz -1)
            printf ("%d\n", wVQaL8ey[UKoDhO26TQz][xUknOYGtS]);
    if (erow - kWj6MGi >= (885 - 883) && F80hunHXsS -xUknOYGtS >= 2)
        SeCaDO (wVQaL8ey, kWj6MGi + 1, xUknOYGtS + 1, erow - 1, F80hunHXsS -1);
}

main () {
    int wVQaL8ey [100] [100];
    int UKoDhO26TQz;
    int USxb1wKpjga;
    int T12uHh;
    int n;
    scanf ("%d %d", &T12uHh, &n);
    for (UKoDhO26TQz = (946 - 946); UKoDhO26TQz < T12uHh; UKoDhO26TQz++)
        for (USxb1wKpjga = (764 - 764); USxb1wKpjga < n; USxb1wKpjga++)
            scanf ("%d", &wVQaL8ey[UKoDhO26TQz][USxb1wKpjga]);
    SeCaDO (wVQaL8ey, (510 - 510), 0, T12uHh -1, n - 1);
}

