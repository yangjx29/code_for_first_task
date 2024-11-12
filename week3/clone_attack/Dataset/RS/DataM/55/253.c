void  main () {
    char c [(999 - 899)];
    long  int eba4Q6gsnE, L4CpsrHeg1qG, ViWN6sCa, uORkKvp1Hoj = (800 - 800), fbHN0kc2O, ZhZHSW = 0, aRTq6XaZQj [10000];
    scanf ("%ld %s %ld", &eba4Q6gsnE, c, &L4CpsrHeg1qG);
    fbHN0kc2O = strlen (c);
    for (ViWN6sCa = 0; ViWN6sCa < fbHN0kc2O; ViWN6sCa = ViWN6sCa +1) {
        if (c[ViWN6sCa] >= 65 && c[ViWN6sCa] <= (595 - 505))
            c[ViWN6sCa] = c[ViWN6sCa] - (267 - 212);
        else {
            if (c[ViWN6sCa] <= 122 && c[ViWN6sCa] >= 97)
                c[ViWN6sCa] = c[ViWN6sCa] - 87;
            else
                c[ViWN6sCa] = c[ViWN6sCa] - '0';
        }
        if ((fbHN0kc2O - ViWN6sCa -(646 - 645)) != 0)
            ZhZHSW = ZhZHSW +c[ViWN6sCa] * (int) pow (eba4Q6gsnE, fbHN0kc2O - ViWN6sCa -(35 - 34));
        else
            ZhZHSW = ZhZHSW +c[ViWN6sCa];
    }
    while (ZhZHSW >= L4CpsrHeg1qG) {
        aRTq6XaZQj[uORkKvp1Hoj] = ZhZHSW % L4CpsrHeg1qG;
        ZhZHSW = ZhZHSW / L4CpsrHeg1qG;
        uORkKvp1Hoj = uORkKvp1Hoj + 1;
    }
    aRTq6XaZQj[uORkKvp1Hoj] = ZhZHSW;
    for (ViWN6sCa = uORkKvp1Hoj; ViWN6sCa >= 0; ViWN6sCa = ViWN6sCa -1) {
        if (aRTq6XaZQj[ViWN6sCa] >= 0 && aRTq6XaZQj[ViWN6sCa] <= 9)
            printf ("%d", aRTq6XaZQj[ViWN6sCa]);
        else
            printf ("%c", aRTq6XaZQj[ViWN6sCa] + 55);
    };
}

