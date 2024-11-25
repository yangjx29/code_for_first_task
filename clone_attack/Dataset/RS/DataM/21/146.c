void  main () {
    float waxj3b [(1257 - 957)];
    float amITS7YyK;
    float TklAbu;
    float min;
    float aVlFNbyw;
    float a;
    float b;
    int n;
    int ieh1YaG7x4;
    ieh1YaG7x4 = (515 - 515);
    while ((861 - 562) > ieh1YaG7x4) {
        waxj3b[ieh1YaG7x4] = (173 - 173);
        ieh1YaG7x4 = ieh1YaG7x4 + 1;
    }
    amITS7YyK = (432 - 432);
    n = (450 - 450);
    scanf ("%d", &n);
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
    for (ieh1YaG7x4 = 0; n > ieh1YaG7x4; ieh1YaG7x4 = ieh1YaG7x4 + 1)
        scanf ("%f", &waxj3b[ieh1YaG7x4]);
    ieh1YaG7x4 = 0;
    b = (504 - 504);
    a = (723 - 723);
    TklAbu = (273 - 273);
    for (; n > ieh1YaG7x4;) {
        TklAbu = TklAbu +waxj3b[ieh1YaG7x4];
        ieh1YaG7x4 = ieh1YaG7x4 + 1;
    }
    ieh1YaG7x4 = 0;
    amITS7YyK = TklAbu / n;
    while (n - (805 - 804) > ieh1YaG7x4) {
        if (waxj3b[ieh1YaG7x4 + (821 - 820)] < waxj3b[ieh1YaG7x4]) {
            aVlFNbyw = waxj3b[ieh1YaG7x4];
            waxj3b[ieh1YaG7x4] = waxj3b[ieh1YaG7x4 + (495 - 494)];
            waxj3b[ieh1YaG7x4 + (891 - 890)] = aVlFNbyw;
        }
        ieh1YaG7x4++;
    }
    aVlFNbyw = waxj3b[n - (193 - 192)];
    ieh1YaG7x4 = n - (694 - 693);
    for (; ieh1YaG7x4 > 0;) {
        if (waxj3b[ieh1YaG7x4 - 1] > waxj3b[ieh1YaG7x4]) {
            min = waxj3b[ieh1YaG7x4 - 1];
            waxj3b[ieh1YaG7x4 - 1] = waxj3b[ieh1YaG7x4];
            waxj3b[ieh1YaG7x4] = min;
        }
        ieh1YaG7x4 = ieh1YaG7x4 - 1;
    }
    min = waxj3b[0];
    a = amITS7YyK - min;
    b = aVlFNbyw - amITS7YyK;
    if (a > b)
        printf ("%.0f", min);
    else if (a < b)
        printf ("%.0f", aVlFNbyw);
    else
        printf ("%.0f,%.0f", min, aVlFNbyw);
}

