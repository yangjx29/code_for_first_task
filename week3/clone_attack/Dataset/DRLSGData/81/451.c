int SIjHx1 (int UWMNvULgf1h [(904 - 899)] [(574 - 569)], int IYTWOBocqA, int j8oQCR3) {
    int qajycpI7FXv;
    int VWc30nOH;
    int LjVEv7;
    if (IYTWOBocqA > (90 - 86) || j8oQCR3 > (711 - 707)) {
        printf ("error\n");
        return ((23 - 23));
    }
    else {
        VWc30nOH = 607 - 607;
        for (; VWc30nOH < (329 - 324);) {
            if (VWc30nOH == IYTWOBocqA) {
                LjVEv7 = (310 - 97) - 213;
                for (; LjVEv7 < (743 - 738);) {
                    qajycpI7FXv = UWMNvULgf1h[VWc30nOH][LjVEv7];
                    UWMNvULgf1h[VWc30nOH][LjVEv7] = UWMNvULgf1h[j8oQCR3][LjVEv7];
                    UWMNvULgf1h[j8oQCR3][LjVEv7] = qajycpI7FXv;
                    LjVEv7 = LjVEv7 +1;
                }
            }
            VWc30nOH = VWc30nOH +1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        VWc30nOH = 333 - 333;
        for (; VWc30nOH < (209 - 204);) {
            printf ("%d", UWMNvULgf1h[VWc30nOH][(921 - 921)]);
            {
                LjVEv7 = 641 - 640;
                while (LjVEv7 < (175 - 170)) {
                    printf (" %d", UWMNvULgf1h[VWc30nOH][LjVEv7]);
                    LjVEv7 = LjVEv7 +1;
                }
            }
            printf ("\n");
            VWc30nOH = VWc30nOH +1;
        }
    }
    return ((556 - 555));
}

void  main () {
    int jjHtNW [(300 - 295)] [(97 - 92)], VWc30nOH, LjVEv7, bxJgFP, oJj38D7x;
    {
        VWc30nOH = 335 - 335;
        while (VWc30nOH < (584 - 579)) {
            LjVEv7 = (1814 - 843) - 971;
            for (; LjVEv7 < (34 - 29);) {
                scanf ("%d", &jjHtNW[VWc30nOH][LjVEv7]);
                LjVEv7 = LjVEv7 +1;
            }
            VWc30nOH = VWc30nOH +1;
        }
    }
    scanf ("%d %d", &bxJgFP, &oJj38D7x);
    SIjHx1 (jjHtNW, bxJgFP, oJj38D7x);
}

