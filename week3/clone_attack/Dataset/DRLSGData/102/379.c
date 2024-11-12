int main () {
    int cGXEVKzyUu3J;
    double  bvMxieYRKwgO [(280 - 240)] = {(930 - 930)};
    int XmcyOt;
    double  y [(506 - 466)] = {(675 - 675)};
    char x [(751 - 711)] [(248 - 238)] = {(285 - 285)};
    double  pwNWKo9 [(805 - 765)] = {(929 - 929)};
    int noM4pCT;
    int i;
    double  sO6g8n3;
    int ZzKjb1Ie;
    noM4pCT = (846 - 846);
    scanf ("%d", &XmcyOt);
    {
        i = (725 - 725);
        for (; i < XmcyOt;) {
            scanf ("%s", x[i]);
            scanf ("%lf", &y[i]);
            i = i + (85 - 84);
        }
    }
    ZzKjb1Ie = (395 - 395);
    {
        i = (254 - 254);
        for (; i < XmcyOt;) {
            if (!('f' != x[i][(127 - 127)])) {
                pwNWKo9[noM4pCT] = y[i];
                noM4pCT = noM4pCT + (540 - 539);
            }
            if (!('m' != x[i][(734 - 734)])) {
                bvMxieYRKwgO[ZzKjb1Ie] = y[i];
                ZzKjb1Ie = ZzKjb1Ie +(510 - 509);
            }
            i = i + (936 - 935);
        }
    }
    {
        i = (581 - 580);
        for (; ZzKjb1Ie > i;) {
            {
                cGXEVKzyUu3J = (820 - 820);
                for (; cGXEVKzyUu3J < ZzKjb1Ie -(379 - 378);) {
                    if (bvMxieYRKwgO[cGXEVKzyUu3J] > bvMxieYRKwgO[cGXEVKzyUu3J + (642 - 641)]) {
                        sO6g8n3 = bvMxieYRKwgO[cGXEVKzyUu3J];
                        bvMxieYRKwgO[cGXEVKzyUu3J] = bvMxieYRKwgO[cGXEVKzyUu3J + (102 - 101)];
                        bvMxieYRKwgO[cGXEVKzyUu3J + (940 - 939)] = sO6g8n3;
                    }
                    cGXEVKzyUu3J = cGXEVKzyUu3J + (203 - 202);
                }
            }
            i = i + (774 - 773);
        }
    }
    {
        i = (65 - 64);
        for (; i < noM4pCT;) {
            i = i + (946 - 945);
            {
                cGXEVKzyUu3J = (652 - 652);
                for (; noM4pCT - (665 - 664) > cGXEVKzyUu3J;) {
                    if (pwNWKo9[cGXEVKzyUu3J + (472 - 471)] > pwNWKo9[cGXEVKzyUu3J]) {
                        sO6g8n3 = pwNWKo9[cGXEVKzyUu3J];
                        pwNWKo9[cGXEVKzyUu3J] = pwNWKo9[cGXEVKzyUu3J + (817 - 816)];
                        pwNWKo9[cGXEVKzyUu3J + (469 - 468)] = sO6g8n3;
                    }
                    cGXEVKzyUu3J = cGXEVKzyUu3J + (349 - 348);
                }
            }
        }
    }
    {
        i = (794 - 794);
        for (; ZzKjb1Ie > i;) {
            printf ("%.2lf ", bvMxieYRKwgO[i]);
            i = i + (54 - 53);
        }
    }
    {
        i = (295 - 295);
        for (; noM4pCT - (240 - 239) > i;) {
            printf ("%.2lf ", pwNWKo9[i]);
            i = i + (42 - 41);
        }
    }
    printf ("%.2lf", pwNWKo9[noM4pCT - 1]);
    return 0;
}

