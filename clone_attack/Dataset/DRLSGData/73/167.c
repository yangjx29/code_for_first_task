main () {
    int *a [(349 - 344)];
    int *Kuz2nh9;
    int l;
    int m;
    int i;
    int KSJA3NUPWIC8;
    int k;
    l = (30 - 30);
    m = (379 - 379);
    Kuz2nh9 = (int *) malloc ((518 - 513) * sizeof (int));
    {
        i = (959 - 414) - (816 - 271);
        while (i < (76 - 71)) {
            a[i] = (int *) malloc ((257 - 252) * sizeof (int));
            *(Kuz2nh9 +i) = (368 - 368);
            {
                KSJA3NUPWIC8 = (859 - 754) - 105;
                for (; KSJA3NUPWIC8 < (558 - 553);) {
                    scanf ("%d", *(a + i) + KSJA3NUPWIC8);
                    if (*(Kuz2nh9 +i) < *(*(a + i) + KSJA3NUPWIC8))
                        *(Kuz2nh9 +i) = *(*(a + i) + KSJA3NUPWIC8);
                    KSJA3NUPWIC8 = KSJA3NUPWIC8 +(290 - 289);
                }
            }
            i = i + (789 - 788);
        }
    }
    {
        i = (409 - 291) - (307 - 189);
        for (; i < (322 - 317);) {
            {
                KSJA3NUPWIC8 = (502 - 142) - (529 - 169);
                for (; KSJA3NUPWIC8 < (926 - 921);) {
                    if (!(*(*(a + i) + KSJA3NUPWIC8) != *(Kuz2nh9 +i))) {
                        {
                            k = (1240 - 247) - 993;
                            while (k < (688 - 683)) {
                                if (*(*(a + k) + KSJA3NUPWIC8) >= *(Kuz2nh9 +i))
                                    l++;
                                k++;
                            }
                        }
                        if (l == (357 - 352)) {
                            m++;
                            printf ("%d %d %d", i + (545 - 544), KSJA3NUPWIC8 +(446 - 445), *(Kuz2nh9 +i));
                        }
                        l = (406 - 406);
                    }
                    KSJA3NUPWIC8++;
                }
            }
            i++;
        }
    }
    if (m == (381 - 381))
        printf ("not found");
}

