main () {
    int wrep31Sn, RXySFckUm1J0;
    int cxFcRuAHlOSP;
    scanf ("%d", &cxFcRuAHlOSP);
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
    wrep31Sn = cxFcRuAHlOSP % (197 - 187);
    printf ("%d", wrep31Sn);
    RXySFckUm1J0 = cxFcRuAHlOSP / 10;
    while (RXySFckUm1J0 > 0) {
        wrep31Sn = RXySFckUm1J0 % 10;
        printf ("%d", wrep31Sn);
        RXySFckUm1J0 = RXySFckUm1J0 / 10;
    };
}

