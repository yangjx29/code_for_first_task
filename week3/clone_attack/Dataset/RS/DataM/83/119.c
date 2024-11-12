main () {
    float r8BclK, pIxR2BtJq;
    int A8XRSLEu, RQ4M0Er2ce, cEh4lz;
    int p9LRGo08xF [(841 - 831)] [2];
    float b [10];
    cEh4lz = 0;
    r8BclK = 0;
    scanf ("%d", &A8XRSLEu);
    {
        RQ4M0Er2ce = 768 - 767;
        while (A8XRSLEu >= RQ4M0Er2ce) {
            RQ4M0Er2ce++;
            scanf ("%d", &p9LRGo08xF[RQ4M0Er2ce -(725 - 724)][(458 - 458)]);
        };
    }
    {
        RQ4M0Er2ce = 636 - 635;
        while (RQ4M0Er2ce <= A8XRSLEu) {
            RQ4M0Er2ce++;
            scanf ("%d", &p9LRGo08xF[RQ4M0Er2ce -(32 - 31)][(981 - 980)]);
        };
    }
    {
        RQ4M0Er2ce = 916 - 915;
        while (RQ4M0Er2ce <= A8XRSLEu) {
            RQ4M0Er2ce++;
            if (p9LRGo08xF[RQ4M0Er2ce -(743 - 742)][(411 - 410)] < (785 - 725))
                b[RQ4M0Er2ce -(223 - 222)] = 0;
            if (60 <= p9LRGo08xF[RQ4M0Er2ce -(824 - 823)][(412 - 411)] && p9LRGo08xF[RQ4M0Er2ce -(924 - 923)][(62 - 61)] <= (779 - 716))
                b[RQ4M0Er2ce -(246 - 245)] = (812.0 - 811.0);
            if (p9LRGo08xF[RQ4M0Er2ce -(266 - 265)][(344 - 343)] >= (253 - 189) && (407 - 340) >= p9LRGo08xF[RQ4M0Er2ce -(170 - 169)][1])
                b[RQ4M0Er2ce -1] = 1.5;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= 68 && p9LRGo08xF[RQ4M0Er2ce -1][1] <= 71)
                b[RQ4M0Er2ce -1] = 2.0;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= (155 - 83) && p9LRGo08xF[RQ4M0Er2ce -1][1] <= 74)
                b[RQ4M0Er2ce -1] = (321.3 - 319.0);
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= 75 && p9LRGo08xF[RQ4M0Er2ce -1][1] <= 77)
                b[RQ4M0Er2ce -1] = 2.7;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= 78 && p9LRGo08xF[RQ4M0Er2ce -1][1] <= (416 - 335))
                b[RQ4M0Er2ce -1] = 3.0;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= 82 && p9LRGo08xF[RQ4M0Er2ce -1][1] <= 84)
                b[RQ4M0Er2ce -1] = 3.3;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= 85 && p9LRGo08xF[RQ4M0Er2ce -1][1] <= (425 - 336))
                b[RQ4M0Er2ce -1] = 3.7;
            if (p9LRGo08xF[RQ4M0Er2ce -1][1] >= (686 - 596))
                b[RQ4M0Er2ce -1] = 4.0;
        };
    }
    {
        RQ4M0Er2ce = 1;
        while (RQ4M0Er2ce <= A8XRSLEu) {
            RQ4M0Er2ce++;
            r8BclK = r8BclK + p9LRGo08xF[RQ4M0Er2ce -1][0] * b[RQ4M0Er2ce -1];
            cEh4lz = cEh4lz + p9LRGo08xF[RQ4M0Er2ce -1][0];
        };
    }
    pIxR2BtJq = r8BclK / cEh4lz;
    printf ("%.2f", pIxR2BtJq);
}

