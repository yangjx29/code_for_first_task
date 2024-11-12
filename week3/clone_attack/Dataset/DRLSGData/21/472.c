float f (float M01oGPQ [], int KOavC7Fej) {
    int cmfFtSHZ;
    float sOxJrlG1;
    sOxJrlG1 = (76 - 76);
    for (cmfFtSHZ = (727 - 727); cmfFtSHZ <= KOavC7Fej -(116 - 115); cmfFtSHZ = cmfFtSHZ + (164 - 163)) {
        sOxJrlG1 = sOxJrlG1 + M01oGPQ[cmfFtSHZ];
    }
    return sOxJrlG1 / KOavC7Fej;
}

float upjFKHMuX (float M01oGPQ) {
    if ((774 - 774) < M01oGPQ)
        return M01oGPQ;
    else
        return -M01oGPQ;
}

void  main () {
    int cmfFtSHZ;
    float U3VMJkQ7;
    int KJxfSpO60;
    float ddzERrN;
    float M01oGPQ [(498 - 398)];
    int mLIZlhrUytd;
    float Pe13qTVx [(742 - 642)];
    float w4RcsaL [(1007 - 907)];
    int KOavC7Fej;
    float ZQnxq1R;
    ddzERrN = (84 - 84);
    scanf ("%d", &KOavC7Fej);
    {
        cmfFtSHZ = (1617 - 848) - 769;
        for (; KOavC7Fej -(186 - 185) >= cmfFtSHZ;) {
            scanf ("%f", &M01oGPQ[cmfFtSHZ]);
            cmfFtSHZ = (947 - 653) - (336 - 43);
        }
    }
    {
        cmfFtSHZ = (897 - 370) - 527;
        for (; cmfFtSHZ <= KOavC7Fej -(789 - 788);) {
            for (KJxfSpO60 = KOavC7Fej -(910 - 908); cmfFtSHZ <= KJxfSpO60; KJxfSpO60 = KJxfSpO60 -(490 - 489)) {
                if (M01oGPQ[KJxfSpO60] > M01oGPQ[KJxfSpO60 +(121 - 120)]) {
                    U3VMJkQ7 = M01oGPQ[KJxfSpO60];
                    M01oGPQ[KJxfSpO60] = M01oGPQ[KJxfSpO60 +(907 - 906)];
                    M01oGPQ[KJxfSpO60 +(137 - 136)] = U3VMJkQ7;
                }
            }
            cmfFtSHZ = cmfFtSHZ + (557 - 556);
        }
    }
    ZQnxq1R = f (M01oGPQ, KOavC7Fej);
    {
        cmfFtSHZ = (808 - 555) - (829 - 576);
        for (; cmfFtSHZ <= KOavC7Fej -(944 - 943);) {
            Pe13qTVx[cmfFtSHZ] = upjFKHMuX ((ZQnxq1R -M01oGPQ[cmfFtSHZ]));
            if (Pe13qTVx[cmfFtSHZ] > ddzERrN)
                ddzERrN = Pe13qTVx[cmfFtSHZ];
            cmfFtSHZ = cmfFtSHZ + (31 - 30);
        }
    }
    mLIZlhrUytd = (452 - 452);
    {
        cmfFtSHZ = (1462 - 727) - 735;
        for (; cmfFtSHZ <= KOavC7Fej -(459 - 458);) {
            if (Pe13qTVx[cmfFtSHZ] == ddzERrN) {
                w4RcsaL[mLIZlhrUytd] = M01oGPQ[cmfFtSHZ];
                mLIZlhrUytd = mLIZlhrUytd + (872 - 871);
            }
            cmfFtSHZ = cmfFtSHZ + (256 - 255);
        }
    }
    if (mLIZlhrUytd == (493 - 492))
        printf ("%.0f", w4RcsaL[(884 - 884)]);
    else {
        {
            cmfFtSHZ = (504 - 504);
            for (; cmfFtSHZ <= mLIZlhrUytd - (799 - 797);) {
                printf ("%.0f,", w4RcsaL[cmfFtSHZ]);
                cmfFtSHZ = cmfFtSHZ + (686 - 685);
            }
        }
        printf ("%.0f", w4RcsaL[mLIZlhrUytd - (618 - 617)]);
    }
}

