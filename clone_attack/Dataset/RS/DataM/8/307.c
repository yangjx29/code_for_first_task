int aV9fEPMygZ2U, yO8guWVHi, a [10], NM46wetUa0Hm [10], tTHMikAfRr [20];

void  mXtmzxeRk () {
    int CzKY3iqy;
    scanf ("%d%d", &aV9fEPMygZ2U, &yO8guWVHi);
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
    for (CzKY3iqy = (717 - 716); CzKY3iqy <= aV9fEPMygZ2U; CzKY3iqy = CzKY3iqy +1)
        scanf ("%d", &a[CzKY3iqy -(885 - 884)]);
    for (CzKY3iqy = (494 - 493); yO8guWVHi >= CzKY3iqy; CzKY3iqy++)
        scanf ("%d", &NM46wetUa0Hm[CzKY3iqy -(738 - 737)]);
}

void  El7V0u () {
    int tTHMikAfRr;
    int CzKY3iqy;
    int OZazHAULIE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        OZazHAULIE = 765 - 765;
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
        while (aV9fEPMygZ2U - (751 - 750) > OZazHAULIE) {
            {
                CzKY3iqy = 970 - 970;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (CzKY3iqy < aV9fEPMygZ2U - (792 - 791) - OZazHAULIE) {
                    if (a[CzKY3iqy +(71 - 70)] < a[CzKY3iqy]) {
                        tTHMikAfRr = a[CzKY3iqy];
                        a[CzKY3iqy] = a[CzKY3iqy +(931 - 930)];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        a[CzKY3iqy +(420 - 419)] = tTHMikAfRr;
                    }
                    CzKY3iqy = CzKY3iqy +1;
                };
            }
            OZazHAULIE++;
        };
    }
    {
        OZazHAULIE = 66 - 66;
        while (yO8guWVHi - (155 - 154) > OZazHAULIE) {
            for (CzKY3iqy = (998 - 998); yO8guWVHi - (451 - 450) - OZazHAULIE > CzKY3iqy; CzKY3iqy++)
                if (NM46wetUa0Hm[CzKY3iqy] > NM46wetUa0Hm[CzKY3iqy +1]) {
                    tTHMikAfRr = NM46wetUa0Hm[CzKY3iqy];
                    NM46wetUa0Hm[CzKY3iqy] = NM46wetUa0Hm[CzKY3iqy +1];
                    NM46wetUa0Hm[CzKY3iqy +1] = tTHMikAfRr;
                }
            OZazHAULIE++;
        };
    };
}

void  uD1WLHx () {
    int CzKY3iqy;
    {
        CzKY3iqy = 520 - 520;
        while (CzKY3iqy < aV9fEPMygZ2U) {
            tTHMikAfRr[CzKY3iqy] = a[CzKY3iqy];
            CzKY3iqy++;
        };
    }
    {
        CzKY3iqy = aV9fEPMygZ2U;
        while (CzKY3iqy < aV9fEPMygZ2U + yO8guWVHi) {
            tTHMikAfRr[CzKY3iqy] = NM46wetUa0Hm[CzKY3iqy -aV9fEPMygZ2U];
            CzKY3iqy++;
        };
    };
}

void  goZ4WzLAX () {
    int CzKY3iqy;
    for (CzKY3iqy = 0; CzKY3iqy < aV9fEPMygZ2U + yO8guWVHi - 1; CzKY3iqy++)
        printf ("%d ", tTHMikAfRr[CzKY3iqy]);
    printf ("%d", tTHMikAfRr[aV9fEPMygZ2U + yO8guWVHi - 1]);
}

void  main () {
    mXtmzxeRk ();
    El7V0u ();
    uD1WLHx ();
    goZ4WzLAX ();
}

