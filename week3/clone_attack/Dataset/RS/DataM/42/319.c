void  main () {
    int kOj9hTpSW0;
    long  acnMTvwF, YwXL7qCzrFT, L2kRHfh6, fZQ8GBaR, *kY3pNWcSLE, *zJDPZply6i, *ylDsCm;
    scanf ("%ld", &fZQ8GBaR);
    kY3pNWcSLE = (long  *) malloc (100000 * sizeof (long  int));
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
    for (L2kRHfh6 = 0; L2kRHfh6 < fZQ8GBaR; L2kRHfh6 = L2kRHfh6 +1, kY3pNWcSLE++) {
        scanf ("%ld", kY3pNWcSLE);
    }
    kY3pNWcSLE = kY3pNWcSLE - fZQ8GBaR;
    scanf ("%ld", &kOj9hTpSW0);
    YwXL7qCzrFT = 0;
    {
        L2kRHfh6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (L2kRHfh6 < fZQ8GBaR) {
            if (*kY3pNWcSLE != kOj9hTpSW0 && YwXL7qCzrFT != (229 - 228)) {
                printf ("%ld", *kY3pNWcSLE);
                YwXL7qCzrFT = 1;
            }
            else if (*kY3pNWcSLE != kOj9hTpSW0) {
                printf (" %ld", *kY3pNWcSLE);
            }
            kY3pNWcSLE++;
            L2kRHfh6++;
        };
    };
}

