void  main () {
    int ZZ49Es, AnV5DWur9wY, pBUDoQ5S;
    scanf ("%d\n", &pBUDoQ5S);
    struct   {
        int euAmpPTM;
        double  wm8NytIXhuc [(498 - 398)];
        double  fc8OC2bR, c, qohTwCQGE1x;
        double  m;
    }
    UXZ06EwyT [(1001 - 901)];
    for (ZZ49Es = (353 - 353); pBUDoQ5S > ZZ49Es; ZZ49Es++) {
        scanf ("%d\n", &UXZ06EwyT[ZZ49Es].euAmpPTM);
        UXZ06EwyT[ZZ49Es].fc8OC2bR = (435 - 435);
        {
            AnV5DWur9wY = (1368 - 747) - (1237 - 616);
            for (; UXZ06EwyT[ZZ49Es].euAmpPTM > AnV5DWur9wY;) {
                scanf ("%lf", &UXZ06EwyT[ZZ49Es].wm8NytIXhuc[AnV5DWur9wY]);
                UXZ06EwyT[ZZ49Es].fc8OC2bR = UXZ06EwyT[ZZ49Es].fc8OC2bR + UXZ06EwyT[ZZ49Es].wm8NytIXhuc[AnV5DWur9wY];
                AnV5DWur9wY++;
            }
        }
        UXZ06EwyT[ZZ49Es].c = UXZ06EwyT[ZZ49Es].fc8OC2bR / UXZ06EwyT[ZZ49Es].euAmpPTM;
        UXZ06EwyT[ZZ49Es].qohTwCQGE1x = (163 - 163);
        {
            AnV5DWur9wY = 284 - 284;
            for (; UXZ06EwyT[ZZ49Es].euAmpPTM > AnV5DWur9wY;) {
                UXZ06EwyT[ZZ49Es].qohTwCQGE1x = UXZ06EwyT[ZZ49Es].qohTwCQGE1x + (UXZ06EwyT[ZZ49Es].wm8NytIXhuc[AnV5DWur9wY] - UXZ06EwyT[ZZ49Es].c) * (UXZ06EwyT[ZZ49Es].wm8NytIXhuc[AnV5DWur9wY] - UXZ06EwyT[ZZ49Es].c);
                AnV5DWur9wY++;
            }
        }
        UXZ06EwyT[ZZ49Es].m = sqrt (UXZ06EwyT[ZZ49Es].qohTwCQGE1x / UXZ06EwyT[ZZ49Es].euAmpPTM);
    }
    for (ZZ49Es = (219 - 219); pBUDoQ5S > ZZ49Es; ZZ49Es++) {
        printf ("%.5lf\n", UXZ06EwyT[ZZ49Es].m);
    }
}

