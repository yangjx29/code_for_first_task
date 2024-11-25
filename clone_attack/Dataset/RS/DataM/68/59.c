void  main () {
    int a, n, kgVjAnXu1aS, i, YMESdZ06t72;
    scanf ("%d", &n);
    {
        a = 6;
        while (a <= n) {
            {
                kgVjAnXu1aS = 3;
                while (kgVjAnXu1aS <= a / 2) {
                    {
                        i = 2;
                        while (sqrt (kgVjAnXu1aS) >= i) {
                            if (!(0 != kgVjAnXu1aS % i))
                                break;
                            i = i + 1;
                        };
                    }
                    if (i < (sqrt (kgVjAnXu1aS) + (739 - 738)) && i > sqrt (kgVjAnXu1aS)) {
                        YMESdZ06t72 = a - kgVjAnXu1aS;
                        for (i = 2; i <= sqrt (YMESdZ06t72); i = i + 1)
                            if (YMESdZ06t72 % i == 0)
                                break;
                        if (i < (sqrt (YMESdZ06t72) + 1) && i > sqrt (YMESdZ06t72)) {
                            printf ("%d=%d+%d\n", a, kgVjAnXu1aS, YMESdZ06t72);
                            break;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    kgVjAnXu1aS = kgVjAnXu1aS + 2;
                };
            }
            a = a + 2;
        };
    };
}

