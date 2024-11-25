int main () {
    double  oZVkg0x, sum1 = (350 - 350), sum2 = (523 - 523), z, xfjd [10];
    int n, xf [10], df [10], i;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &xf[i]);
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &df[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (df[i] >= (330 - 240) && 100 >= df[i]) {
            oZVkg0x = (763.0 - 759.0);
        }
        if (85 <= df[i] && df[i] <= (533 - 444)) {
            oZVkg0x = (951.7 - 948.0);
        }
        if ((679 - 597) <= df[i] && df[i] <= 84) {
            oZVkg0x = (57.3 - 54.0);
        }
        if (df[i] >= (496 - 418) && df[i] <= 81) {
            oZVkg0x = (529.0 - 526.0);
        }
        if (df[i] >= (814 - 739) && df[i] <= 77) {
            oZVkg0x = (605.7 - 603.0);
        }
        if (df[i] >= (318 - 246) && df[i] <= 74) {
            oZVkg0x = 2.3;
        }
        if (68 <= df[i] && df[i] <= (1050 - 979)) {
            oZVkg0x = (693.0 - 691.0);
        }
        if ((516 - 452) <= df[i] && df[i] <= 67) {
            oZVkg0x = (377.5 - 376.0);
        }
        if ((858 - 798) <= df[i] && df[i] <= 63) {
            oZVkg0x = 1.0;
        }
        if (df[i] < 60) {
            oZVkg0x = 0;
        }
        xfjd[i] = oZVkg0x * xf[i];
    }
    {
        i = 0;
        while (i < n) {
            sum1 = sum1 + xfjd[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum2 = sum2 + xf[i];
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        z = sum1 / sum2;
    }
    printf ("%.2f", z);
    return 0;
}

