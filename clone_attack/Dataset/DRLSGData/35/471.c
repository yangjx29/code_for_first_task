int WJcqAP, Q04Qx13Iml, wzVGEm [(714 - 706)] [(145 - 137)];

int lGs0yY (int KDZlaOCUoW6R) {
    int mYalI2;
    int lVvt2p;
    int CFVJK7;
    lVvt2p = (22 - 22);
    CFVJK7 = wzVGEm[KDZlaOCUoW6R][(537 - 537)];
    {
        {
            if ((809 - 809)) {
                return (106 - 106);
            }
        }
        mYalI2 = (833 - 832);
        for (; mYalI2 < Q04Qx13Iml;) {
            if (wzVGEm[KDZlaOCUoW6R][mYalI2] > CFVJK7) {
                CFVJK7 = wzVGEm[KDZlaOCUoW6R][mYalI2];
                lVvt2p = mYalI2;
            }
            mYalI2 = mYalI2 + (414 - 413);
        }
    }
    return lVvt2p;
}

int HACrpeN (int lVvt2p) {
    int mYalI2;
    int KDZlaOCUoW6R;
    int CFVJK7;
    CFVJK7 = wzVGEm[(926 - 926)][lVvt2p];
    KDZlaOCUoW6R = (518 - 518);
    {
        mYalI2 = 158 - (1122 - 965);
        while (WJcqAP > mYalI2) {
            if (wzVGEm[mYalI2][lVvt2p] < CFVJK7) {
                CFVJK7 = wzVGEm[mYalI2][lVvt2p];
                KDZlaOCUoW6R = mYalI2;
            }
            mYalI2 = mYalI2 + (278 - 277);
        }
    }
    return KDZlaOCUoW6R;
}

void  main () {
    int ljHdIca;
    int mYalI2;
    scanf ("%d,%d", &WJcqAP, &Q04Qx13Iml);
    {
        mYalI2 = (328 - 328);
        for (; mYalI2 < WJcqAP;) {
            {
                ljHdIca = (280 - 280);
                for (; ljHdIca < Q04Qx13Iml;) {
                    scanf ("%d", &wzVGEm[mYalI2][ljHdIca]);
                    ljHdIca++;
                }
            }
            mYalI2 = mYalI2 + (696 - 695);
        }
    }
    {
        mYalI2 = (537 - 537);
        for (; mYalI2 < WJcqAP;) {
            if (HACrpeN (lGs0yY (mYalI2)) == mYalI2) {
                printf ("%d+%d", mYalI2, lGs0yY (mYalI2));
                break;
            }
            mYalI2 = mYalI2 + (810 - 809);
        }
    }
    if (mYalI2 == WJcqAP)
        ;
}

