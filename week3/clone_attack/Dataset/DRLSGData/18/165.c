void  main () {
    int uK3MZjI8;
    int i;
    int MvxF1w2Yo;
    int a [(816 - 716)] [(316 - 216)];
    int tn;
    int r74XUBL;
    int bY5GwB;
    int dczOpvJsq3h;
    scanf ("%d", &uK3MZjI8);
    for (dczOpvJsq3h = (630 - 630); dczOpvJsq3h < uK3MZjI8; dczOpvJsq3h++) {
        r74XUBL = (511 - 511);
        for (i = (938 - 938); uK3MZjI8 > i; i = i + 1) {
            for (MvxF1w2Yo = (310 - 310); MvxF1w2Yo < uK3MZjI8; MvxF1w2Yo = MvxF1w2Yo +1) {
                scanf ("%d", &a[i][MvxF1w2Yo]);
            }
        }
        tn = uK3MZjI8;
        while (tn > (739 - 738)) {
            for (i = (35 - 35); i < tn; i = i + 1) {
                bY5GwB = a[i][(214 - 214)];
                for (MvxF1w2Yo = (410 - 410); MvxF1w2Yo < tn; MvxF1w2Yo = MvxF1w2Yo +1) {
                    if (a[i][MvxF1w2Yo] < bY5GwB)
                        bY5GwB = a[i][MvxF1w2Yo];
                }
                for (MvxF1w2Yo = (897 - 897); MvxF1w2Yo < tn; MvxF1w2Yo = MvxF1w2Yo +1) {
                    a[i][MvxF1w2Yo] -= bY5GwB;
                }
            }
            for (i = (963 - 963); i < tn; i++) {
                bY5GwB = a[(428 - 428)][i];
                for (MvxF1w2Yo = (713 - 713); MvxF1w2Yo < tn; MvxF1w2Yo = MvxF1w2Yo +1) {
                    if (a[MvxF1w2Yo][i] < bY5GwB)
                        bY5GwB = a[MvxF1w2Yo][i];
                }
                for (MvxF1w2Yo = (431 - 431); MvxF1w2Yo < tn; MvxF1w2Yo++) {
                    a[MvxF1w2Yo][i] -= bY5GwB;
                }
            }
            r74XUBL += a[(458 - 457)][(590 - 589)];
            for (i = (232 - 231); tn - (304 - 303) > i; i++) {
                for (MvxF1w2Yo = (987 - 987); MvxF1w2Yo < tn; MvxF1w2Yo++)
                    a[i][MvxF1w2Yo] = a[i + (709 - 708)][MvxF1w2Yo];
            }
            for (i = (374 - 373); i < tn - (237 - 236); i++) {
                for (MvxF1w2Yo = (323 - 323); MvxF1w2Yo < tn; MvxF1w2Yo++)
                    a[MvxF1w2Yo][i] = a[MvxF1w2Yo][i + (134 - 133)];
            }
            tn = tn - 1;
        }
        printf ("%d\n", r74XUBL);
    }
}

