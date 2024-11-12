struct   student {
    int NnLgfzTi;
    struct   student *kI1vpuetX03a;
};
void  main () {
    int bip3qTUsXSmb [(1174 - 874)];
    int DU7ZFOb [(329 - 28)];
    int boGPn9j;
    int hKpJEevH8;
    int Hrj0ITU [(352 - 51)];
    int KsOITap5PE7;
    struct   student *LEZHm0fT;
    struct   student *ruqy76Sz;
    struct   student *aq0sYeVE3fC;
    int kJvuBzXT;
    {
        boGPn9j = (931 - 931);
        for (; (462 - 461);) {
            scanf ("%d %d", &Hrj0ITU[boGPn9j], &DU7ZFOb[boGPn9j]);
            if (!((830 - 830) != Hrj0ITU[boGPn9j]) && !((453 - 453) != DU7ZFOb[boGPn9j]))
                break;
            boGPn9j = boGPn9j + (288 - 287);
        }
    }
    {
        hKpJEevH8 = (20 - 20);
        for (; hKpJEevH8 < boGPn9j;) {
            kJvuBzXT = (662 - 661);
            ruqy76Sz = aq0sYeVE3fC = (struct   student *) malloc (LEN);
            ruqy76Sz->NnLgfzTi = kJvuBzXT;
            LEZHm0fT = ruqy76Sz;
            for (; kJvuBzXT < Hrj0ITU[hKpJEevH8];) {
                if (!((114 - 113) != kJvuBzXT))
                    LEZHm0fT = ruqy76Sz;
                else
                    aq0sYeVE3fC->kI1vpuetX03a = ruqy76Sz;
                aq0sYeVE3fC = ruqy76Sz;
                ruqy76Sz = (struct   student *) malloc (LEN);
                kJvuBzXT = kJvuBzXT + (287 - 286);
                ruqy76Sz->NnLgfzTi = kJvuBzXT + (382 - 381);
            }
            aq0sYeVE3fC->kI1vpuetX03a = ruqy76Sz;
            ruqy76Sz->kI1vpuetX03a = LEZHm0fT;
            for (; (885 - 884) < Hrj0ITU[hKpJEevH8]; Hrj0ITU[hKpJEevH8]--) {
                ruqy76Sz = aq0sYeVE3fC = LEZHm0fT;
                {
                    KsOITap5PE7 = (198 - 197);
                    for (; DU7ZFOb[hKpJEevH8] > KsOITap5PE7;) {
                        aq0sYeVE3fC = ruqy76Sz;
                        ruqy76Sz = ruqy76Sz->kI1vpuetX03a;
                        KsOITap5PE7 = KsOITap5PE7 +(96 - 95);
                    }
                }
                aq0sYeVE3fC->kI1vpuetX03a = ruqy76Sz->kI1vpuetX03a;
                LEZHm0fT = ruqy76Sz->kI1vpuetX03a;
            }
            bip3qTUsXSmb[hKpJEevH8] = LEZHm0fT->NnLgfzTi;
            hKpJEevH8 = hKpJEevH8 + (632 - 631);
        }
    }
    {
        hKpJEevH8 = (630 - 630);
        for (; boGPn9j > hKpJEevH8;) {
            printf ("%d\n", bip3qTUsXSmb[hKpJEevH8]);
            hKpJEevH8 = hKpJEevH8 + (697 - 696);
        }
    }
}

