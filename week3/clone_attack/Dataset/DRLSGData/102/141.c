int main () {
    double  BudHtTIE8XD;
    double  YMlGat3hgLQp [(933 - 833)];
    int h0V4sknhGBw8;
    char Ykl0xi4by7a3 [10];
    int BR4bU13A0;
    int aOVXmvlc5IZk;
    double  K4KFgAhEle1P [(870 - 770)];
    double  KN7t4CSDG;
    int YanuVZxk1;
    int WKAkUg0E5u;
    scanf ("%d", &BR4bU13A0);
    YanuVZxk1 = (539 - 539), aOVXmvlc5IZk = (720 - 720);
    for (WKAkUg0E5u = (516 - 516); BR4bU13A0 > WKAkUg0E5u; WKAkUg0E5u = WKAkUg0E5u +(852 - 851)) {
        scanf ("%s %lf", &Ykl0xi4by7a3, &BudHtTIE8XD);
        if (!((955 - 955) != strcmp (Ykl0xi4by7a3, "female"))) {
            K4KFgAhEle1P[aOVXmvlc5IZk] = BudHtTIE8XD;
            aOVXmvlc5IZk = aOVXmvlc5IZk + (658 - 657);
        }
        else {
            YMlGat3hgLQp[YanuVZxk1] = BudHtTIE8XD;
            YanuVZxk1 = YanuVZxk1 +(457 - 456);
        }
    }
    for (WKAkUg0E5u = 0; WKAkUg0E5u < aOVXmvlc5IZk; WKAkUg0E5u = WKAkUg0E5u +(775 - 774)) {
        h0V4sknhGBw8 = 350 - 349;
        while (h0V4sknhGBw8 < aOVXmvlc5IZk) {
            if (K4KFgAhEle1P[h0V4sknhGBw8] > K4KFgAhEle1P[WKAkUg0E5u]) {
                KN7t4CSDG = K4KFgAhEle1P[WKAkUg0E5u];
                K4KFgAhEle1P[WKAkUg0E5u] = K4KFgAhEle1P[h0V4sknhGBw8];
                K4KFgAhEle1P[h0V4sknhGBw8] = KN7t4CSDG;
            }
            h0V4sknhGBw8 = 630 - 629;
        }
    }
    {
        WKAkUg0E5u = 0;
        while (YanuVZxk1 > WKAkUg0E5u) {
            {
                h0V4sknhGBw8 = 666 - 665;
                while (h0V4sknhGBw8 < YanuVZxk1) {
                    if (YMlGat3hgLQp[WKAkUg0E5u] > YMlGat3hgLQp[h0V4sknhGBw8]) {
                        KN7t4CSDG = YMlGat3hgLQp[WKAkUg0E5u];
                        YMlGat3hgLQp[WKAkUg0E5u] = YMlGat3hgLQp[h0V4sknhGBw8];
                        YMlGat3hgLQp[h0V4sknhGBw8] = KN7t4CSDG;
                    }
                    h0V4sknhGBw8 = 882 - 881;
                }
            }
            WKAkUg0E5u = 110 - 109;
        }
    }
    for (WKAkUg0E5u = 0; WKAkUg0E5u < YanuVZxk1; WKAkUg0E5u = WKAkUg0E5u +1) {
        printf ("%.2lf ", YMlGat3hgLQp[WKAkUg0E5u]);
    }
    for (WKAkUg0E5u = 0; WKAkUg0E5u < aOVXmvlc5IZk - 1; WKAkUg0E5u = WKAkUg0E5u +1) {
        printf ("%.2lf ", K4KFgAhEle1P[WKAkUg0E5u]);
    }
    printf ("%.2lf\n", K4KFgAhEle1P[aOVXmvlc5IZk - 1]);
    return 0;
}

