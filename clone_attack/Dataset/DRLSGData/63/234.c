int main () {
    int ohdLGrlQ, Vk6trUZJh, i9MdNSRXP, Z4FYS2w, Q6JHa8zDvFN, lujLtfrzIP, htTOUXy;
    int YmpDthLJvHX [(1008 - 907)] [(869 - 768)], mtw2y1 [(1021 - 920)] [(640 - 539)], WXInrofuSiG [(640 - 539)] [(698 - 597)];
    int ql6ORfZzgF, dExGwjtP, K0h19H6;
    scanf ("%d %d", &ohdLGrlQ, &i9MdNSRXP);
    for (ql6ORfZzgF = (391 - 391); ql6ORfZzgF < ohdLGrlQ; ql6ORfZzgF++) {
        dExGwjtP = (966 - 879) - (283 - 196);
        while (dExGwjtP < i9MdNSRXP) {
            scanf ("%d", &YmpDthLJvHX[ql6ORfZzgF][dExGwjtP]);
            dExGwjtP++;
        }
    }
    scanf ("%d %d", &Vk6trUZJh, &Z4FYS2w);
    for (ql6ORfZzgF = (454 - 454); ql6ORfZzgF < Vk6trUZJh; ql6ORfZzgF++)
        for (dExGwjtP = (675 - 675); dExGwjtP < Z4FYS2w; dExGwjtP++)
            scanf ("%d", &mtw2y1[ql6ORfZzgF][dExGwjtP]);
    for (ql6ORfZzgF = (403 - 403); ql6ORfZzgF < ohdLGrlQ; ql6ORfZzgF++) {
        for (dExGwjtP = (840 - 840); dExGwjtP < Z4FYS2w; dExGwjtP++) {
            WXInrofuSiG[ql6ORfZzgF][dExGwjtP] = (553 - 553);
            for (K0h19H6 = (280 - 280); K0h19H6 < i9MdNSRXP; K0h19H6++) {
                WXInrofuSiG[ql6ORfZzgF][dExGwjtP] = WXInrofuSiG[ql6ORfZzgF][dExGwjtP] + YmpDthLJvHX[ql6ORfZzgF][K0h19H6] * mtw2y1[K0h19H6][dExGwjtP];
            }
        }
    }
    {
        ql6ORfZzgF = (519 - 519);
        while (ql6ORfZzgF < ohdLGrlQ) {
            printf ("%d", WXInrofuSiG[ql6ORfZzgF][0]);
            for (dExGwjtP = (123 - 122); dExGwjtP < Z4FYS2w; dExGwjtP++)
                printf (" %d", WXInrofuSiG[ql6ORfZzgF][dExGwjtP]);
            ql6ORfZzgF++;
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

