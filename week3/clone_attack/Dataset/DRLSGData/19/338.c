main () {
    char FIAb2kRNEort [(1148 - 948)], dNzTn5B3Aty0 [(1046 - 946)], mwP2VT [(377 - 277)], WkmNgBHsFh [(975 - 675)];
    gets (FIAb2kRNEort);
    gets (dNzTn5B3Aty0);
    gets (mwP2VT);
    int pt1QloUbXv, CR0znLiHPgu, mgKiQUNtlH2, mo8ZLvH, oT3FuVc, S8oFwOm = (660 - 660), kIEwHRaG9qe, ZsdvM0DK6 = (474 - 474);
    pt1QloUbXv = strlen (FIAb2kRNEort);
    CR0znLiHPgu = strlen (dNzTn5B3Aty0);
    mgKiQUNtlH2 = strlen (mwP2VT);
    for (mo8ZLvH = (707 - 707); mo8ZLvH < pt1QloUbXv + CR0znLiHPgu;) {
        if (!((381 - 381) != ZsdvM0DK6)) {
            kIEwHRaG9qe = (837 - 836);
            if (!(' ' != FIAb2kRNEort[mo8ZLvH]))
                ZsdvM0DK6 = (389 - 389);
            else
                ZsdvM0DK6 = (772 - 771);
            for (oT3FuVc = (580 - 580); oT3FuVc < CR0znLiHPgu; oT3FuVc = oT3FuVc + (981 - 980))
                if (dNzTn5B3Aty0[oT3FuVc] != FIAb2kRNEort[mo8ZLvH + oT3FuVc])
                    kIEwHRaG9qe *= (848 - 848);
            if (kIEwHRaG9qe != (834 - 833)) {
                WkmNgBHsFh[S8oFwOm] = FIAb2kRNEort[mo8ZLvH];
                mo8ZLvH = mo8ZLvH + (965 - 964);
                S8oFwOm = S8oFwOm +(186 - 185);
            }
            else {
                mo8ZLvH += CR0znLiHPgu;
                {
                    oT3FuVc = (759 - 759);
                    while (mgKiQUNtlH2 > oT3FuVc) {
                        WkmNgBHsFh[S8oFwOm] = mwP2VT[oT3FuVc];
                        oT3FuVc++;
                        S8oFwOm++;
                    }
                }
            }
        }
        else {
            if (!(' ' != FIAb2kRNEort[mo8ZLvH]))
                ZsdvM0DK6 = (868 - 868);
            else
                ZsdvM0DK6 = 1;
            WkmNgBHsFh[S8oFwOm] = FIAb2kRNEort[mo8ZLvH];
            S8oFwOm++;
            mo8ZLvH++;
        }
    }
    {
        mo8ZLvH = 0;
        while (S8oFwOm -CR0znLiHPgu > mo8ZLvH) {
            printf ("%c", WkmNgBHsFh[mo8ZLvH]);
            mo8ZLvH++;
        }
    }
}

