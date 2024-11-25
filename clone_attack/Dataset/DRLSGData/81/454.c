int JeuwE8T (int LeMhCis, int BW0a6tAF) {
    int VZ7mRh;
    if ((LeMhCis >= (842 - 842) && LeMhCis < (253 - 248)) && (BW0a6tAF >= (836 - 836) && BW0a6tAF < (192 - 187)))
        VZ7mRh = (747 - 746);
    else
        VZ7mRh = (462 - 462);
    return (VZ7mRh);
}

void  main () {
    int HqvbZId [(457 - 452)] [(371 - 366)];
    int xPr3qDcHRL;
    int XEkNvV;
    int ITQlwaNJvu4M;
    int xq2fDJcY0ts;
    int fAvqYd65JS;
    {
        ITQlwaNJvu4M = (401 - 401);
        for (; ITQlwaNJvu4M < (407 - 402);) {
            {
                xq2fDJcY0ts = (356 - 356);
                {
                    if ((258 - 258)) {
                        return (837 - 837);
                    }
                }
                while (xq2fDJcY0ts < (131 - 126)) {
                    scanf ("%d", &HqvbZId[ITQlwaNJvu4M][xq2fDJcY0ts]);
                    xq2fDJcY0ts++;
                }
            }
            ITQlwaNJvu4M++;
        }
    }
    scanf ("%d%d", &XEkNvV, &xPr3qDcHRL);
    fAvqYd65JS = JeuwE8T (XEkNvV, xPr3qDcHRL);
    if (fAvqYd65JS == (400 - 400))
        ;
    if (fAvqYd65JS == (688 - 687)) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            ITQlwaNJvu4M = (276 - 276);
            for (; ITQlwaNJvu4M < (211 - 206);) {
                fAvqYd65JS = HqvbZId[XEkNvV][ITQlwaNJvu4M];
                HqvbZId[XEkNvV][ITQlwaNJvu4M] = HqvbZId[xPr3qDcHRL][ITQlwaNJvu4M];
                HqvbZId[xPr3qDcHRL][ITQlwaNJvu4M] = fAvqYd65JS;
                ITQlwaNJvu4M++;
            }
        }
        {
            ITQlwaNJvu4M = (774 - 774);
            for (; ITQlwaNJvu4M < (835 - 830);) {
                {
                    xq2fDJcY0ts = (318 - 318);
                    for (; xq2fDJcY0ts < (190 - 186);) {
                        printf ("%d ", HqvbZId[ITQlwaNJvu4M][xq2fDJcY0ts]);
                        xq2fDJcY0ts++;
                    }
                }
                printf ("%d", HqvbZId[ITQlwaNJvu4M][(769 - 765)]);
                printf ("\n");
                ITQlwaNJvu4M++;
            }
        }
    }
}

