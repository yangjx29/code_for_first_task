int JMwJ74SPK (int);

void  main () {
    double  HK9r1nkwNyg0 [100] = {(945 - 945)};
    double  sPcZ5v9dlOMk [100];
    int wZLfX6UWvCSz, FPrI0Rt3H65 [100], i, thpBvTtWJO;
    scanf ("%d", &wZLfX6UWvCSz);
    {
        i = 0;
        while (wZLfX6UWvCSz > i) {
            scanf ("%d", &FPrI0Rt3H65[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < wZLfX6UWvCSz) {
            {
                thpBvTtWJO = 0;
                while (thpBvTtWJO < FPrI0Rt3H65[i]) {
                    sPcZ5v9dlOMk[thpBvTtWJO] = (double ) JMwJ74SPK (thpBvTtWJO + 3) / JMwJ74SPK (thpBvTtWJO + 2);
                    HK9r1nkwNyg0[i] = HK9r1nkwNyg0[i] + sPcZ5v9dlOMk[thpBvTtWJO];
                    thpBvTtWJO = thpBvTtWJO + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < wZLfX6UWvCSz; i = i + 1) {
        printf ("%.3lf\n", HK9r1nkwNyg0[i]);
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
    }
    return;
}

int JMwJ74SPK (int FPrI0Rt3H65) {
    if (!(0 != FPrI0Rt3H65)) {
        return 0;
    }
    if (FPrI0Rt3H65 == 1) {
        return 1;
    }
    return JMwJ74SPK (FPrI0Rt3H65 -1) + JMwJ74SPK (FPrI0Rt3H65 -2);
}

