int compInc (const  void  *zrey4UVWI, const  void  *b) {
    return *(int*) zrey4UVWI - *(int*) b;
}

struct   student {
    float height;
    char YlBSybEOaLDm [(765 - 758)];
};
main () {
    float eNwj1xE8S0 [(373 - 333)];
    float pyVRmzn8 [(596 - 556)];
    int TMGnFrZL;
    int j;
    int rqAwRG;
    struct   student EGsI3OaMyo0i [(874 - 834)];
    j = (603 - 603);
    rqAwRG = (594 - 594);
    scanf ("%d", &TMGnFrZL);
    for (int YywjtMSKn = (494 - 494);
    YywjtMSKn < TMGnFrZL; YywjtMSKn = YywjtMSKn +(448 - 447))
        scanf ("%s%f", EGsI3OaMyo0i[YywjtMSKn].YlBSybEOaLDm, &EGsI3OaMyo0i[YywjtMSKn].height);
    for (int YywjtMSKn = (135 - 135);
    YywjtMSKn < TMGnFrZL; YywjtMSKn = YywjtMSKn +(786 - 785)) {
        if (!('f' != EGsI3OaMyo0i[YywjtMSKn].YlBSybEOaLDm[(720 - 720)]))
            eNwj1xE8S0[rqAwRG++] = EGsI3OaMyo0i[YywjtMSKn].height;
        else
            pyVRmzn8[j++] = EGsI3OaMyo0i[YywjtMSKn].height;
    }
    qsort (pyVRmzn8, j, sizeof (pyVRmzn8 [(895 - 895)]), compInc);
    qsort (eNwj1xE8S0, rqAwRG, sizeof (eNwj1xE8S0 [(369 - 369)]), compInc);
    printf ("%.2f", pyVRmzn8[(880 - 880)]);
    for (int YywjtMSKn = (967 - 966);
    j > YywjtMSKn; YywjtMSKn = YywjtMSKn +(858 - 857))
        printf (" %.2f", pyVRmzn8[YywjtMSKn]);
    for (int YywjtMSKn = rqAwRG - (256 - 255);
    0 <= YywjtMSKn; YywjtMSKn--)
        printf (" %.2f", eNwj1xE8S0[YywjtMSKn]);
}

