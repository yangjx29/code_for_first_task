void  main () {
    int cXfTmP [(149 - 147)], V1jlDsEIKJ, pNwOzo1DjQX, cATVepRM5q, iNSDTdzcJ [(549 - 547)] [100], mYA2JnoGi;
    scanf ("%d %d", &cXfTmP[(204 - 204)], &cXfTmP[(739 - 738)]);
    for (cATVepRM5q = (794 - 794); cATVepRM5q < (993 - 991); cATVepRM5q = cATVepRM5q + 1) {
        for (V1jlDsEIKJ = (574 - 574); V1jlDsEIKJ < cXfTmP[cATVepRM5q]; V1jlDsEIKJ = V1jlDsEIKJ +1) {
            scanf ("%d", &iNSDTdzcJ[cATVepRM5q][V1jlDsEIKJ]);
        }
    }
    for (cATVepRM5q = (355 - 355); cATVepRM5q < 2; cATVepRM5q++) {
        for (V1jlDsEIKJ = (112 - 112); V1jlDsEIKJ < cXfTmP[cATVepRM5q]; V1jlDsEIKJ++) {
            for (pNwOzo1DjQX = (680 - 680); pNwOzo1DjQX < cXfTmP[cATVepRM5q] - V1jlDsEIKJ -(745 - 744); pNwOzo1DjQX++) {
                if (iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX] > iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX + (270 - 269)]) {
                    mYA2JnoGi = iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX];
                    iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX] = iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX + (971 - 970)];
                    iNSDTdzcJ[cATVepRM5q][pNwOzo1DjQX + 1] = mYA2JnoGi;
                }
            }
        }
    }
    for (cATVepRM5q = (874 - 874); cATVepRM5q < 2; cATVepRM5q++) {
        for (V1jlDsEIKJ = 0; V1jlDsEIKJ < cXfTmP[cATVepRM5q]; V1jlDsEIKJ++) {
            if (!(cATVepRM5q == 0 && V1jlDsEIKJ == 0)) {
            }
            printf ("%d", iNSDTdzcJ[cATVepRM5q][V1jlDsEIKJ]);
        }
    }
}

