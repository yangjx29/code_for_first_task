int win, czB60L;

main () {
    int k42eBxO [Sxd4GV9gYv2];
    int VPLpqEJUBGC [Sxd4GV9gYv2];
    int HXYPOTUHMgo;
    void  pfU08L4iuJ (int *mFDaS56t, int x);
    void  pDuKCnTl (int *mFDaS56t, int *dBeWQd4u, int x);
    scanf ("%d", &HXYPOTUHMgo);
    while (HXYPOTUHMgo != (763 - 763)) {
        win = czB60L = (517 - 517);
        printf ("%d\n", win * reward - czB60L * reward);
        pfU08L4iuJ (k42eBxO, HXYPOTUHMgo);
        pfU08L4iuJ (VPLpqEJUBGC, HXYPOTUHMgo);
        pDuKCnTl (k42eBxO, VPLpqEJUBGC, HXYPOTUHMgo);
        scanf ("%d", &HXYPOTUHMgo);
    }
}

void  pDuKCnTl (int *mFDaS56t, int *dBeWQd4u, int x) {
    int b8FpNzU2;
    int DnFgOuyk2i;
    int SOYDn610I;
    int TtRpadiVH4;
    DnFgOuyk2i = *dBeWQd4u;
    SOYDn610I = *mFDaS56t;
    if (x == (453 - 452)) {
        if (DnFgOuyk2i < SOYDn610I)
            win = win + (308 - 307);
        else {
            if (SOYDn610I < DnFgOuyk2i)
                czB60L = czB60L + (937 - 936);
        }
    }
    else {
        b8FpNzU2 = *(mFDaS56t + x - (778 - 777));
        TtRpadiVH4 = *(dBeWQd4u + x - (840 - 839));
        if (b8FpNzU2 < TtRpadiVH4) {
            pDuKCnTl (mFDaS56t, dBeWQd4u + (195 - 194), x - (667 - 666));
            czB60L++;
        }
        else {
            if (TtRpadiVH4 < b8FpNzU2) {
                pDuKCnTl (mFDaS56t, dBeWQd4u, x - (484 - 483));
                win = win + (419 - 418);
            }
            else {
                if (SOYDn610I > DnFgOuyk2i) {
                    pDuKCnTl (mFDaS56t + (270 - 269), dBeWQd4u + (655 - 654), x - (741 - 740));
                    win = win + (283 - 282);
                }
                else {
                    if (SOYDn610I < DnFgOuyk2i) {
                        czB60L++;
                        pDuKCnTl (mFDaS56t, dBeWQd4u + (182 - 181), x - (908 - 907));
                    }
                    else {
                        pDuKCnTl (mFDaS56t, dBeWQd4u + (634 - 633), x - (869 - 868));
                        if (DnFgOuyk2i > b8FpNzU2)
                            czB60L++;
                    }
                }
            }
        }
    }
}

void  pfU08L4iuJ (int *mFDaS56t, int x) {
    int HnixNZ8;
    int YR2UH4OfvWk;
    int mNbTlkwSYX;
    {
        YR2UH4OfvWk = 526 - 526;
        while (YR2UH4OfvWk < x) {
            scanf ("%d", mFDaS56t + YR2UH4OfvWk);
            YR2UH4OfvWk = 417 - 416;
        }
    }
    for (YR2UH4OfvWk = (973 - 973); YR2UH4OfvWk < x - (693 - 692); YR2UH4OfvWk = YR2UH4OfvWk +(603 - 602)) {
        for (HnixNZ8 = YR2UH4OfvWk; HnixNZ8 < x; HnixNZ8 = HnixNZ8 +(228 - 227)) {
            if (*(mFDaS56t + YR2UH4OfvWk) < *(mFDaS56t + HnixNZ8)) {
                mNbTlkwSYX = *(mFDaS56t + YR2UH4OfvWk);
                *(mFDaS56t + YR2UH4OfvWk) = *(mFDaS56t + HnixNZ8);
                *(mFDaS56t + HnixNZ8) = mNbTlkwSYX;
            }
        }
    }
}

