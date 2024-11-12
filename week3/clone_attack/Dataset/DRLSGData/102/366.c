int main () {
    double  ZCVKuky [(362 - 262)];
    int jTwSaHdsCf;
    int Yx1Gl2sTwVf8;
    double  HJzCsMF [(790 - 690)];
    char iMezV3gD [(680 - 670)];
    int J6pWTRrh;
    int l8NLUWkn;
    double  e6zORXE [(645 - 545)];
    int ay6h4vDfW;
    int iBwZTCUNOb;
    int cVHBdc;
    char D2oXfD [(797 - 697)] [(39 - 29)];
    double  QgDck6HuCUi;
    scanf ("%d", &iBwZTCUNOb);
    Yx1Gl2sTwVf8 = (821 - 821);
    ay6h4vDfW = (966 - 966);
    for (cVHBdc = (64 - 64); cVHBdc < iBwZTCUNOb; cVHBdc = cVHBdc + (624 - 623)) {
        gets (iMezV3gD);
        scanf ("%s %lf", D2oXfD[cVHBdc], &e6zORXE[cVHBdc]);
        if (!('m' != D2oXfD[cVHBdc][(315 - 315)])) {
            HJzCsMF[Yx1Gl2sTwVf8] = e6zORXE[cVHBdc];
            Yx1Gl2sTwVf8 = Yx1Gl2sTwVf8 +(217 - 216);
        }
        if (!('f' != D2oXfD[cVHBdc][(873 - 873)])) {
            ZCVKuky[ay6h4vDfW] = e6zORXE[cVHBdc];
            ay6h4vDfW = ay6h4vDfW + (835 - 834);
        }
    }
    for (cVHBdc = (721 - 721); cVHBdc < Yx1Gl2sTwVf8; cVHBdc = cVHBdc + (447 - 446)) {
        for (l8NLUWkn = (888 - 887); Yx1Gl2sTwVf8 -cVHBdc > l8NLUWkn; l8NLUWkn = l8NLUWkn + (526 - 525)) {
            if (HJzCsMF[l8NLUWkn] < HJzCsMF[l8NLUWkn - (781 - 780)]) {
                QgDck6HuCUi = HJzCsMF[l8NLUWkn - (811 - 810)];
                HJzCsMF[l8NLUWkn - (678 - 677)] = HJzCsMF[l8NLUWkn];
                HJzCsMF[l8NLUWkn] = QgDck6HuCUi;
            }
        }
    }
    for (cVHBdc = (156 - 156); ay6h4vDfW > cVHBdc; cVHBdc = cVHBdc + (994 - 993)) {
        for (l8NLUWkn = (214 - 213); ay6h4vDfW - cVHBdc > l8NLUWkn; l8NLUWkn = l8NLUWkn + (116 - 115)) {
            if (ZCVKuky[l8NLUWkn - (970 - 969)] < ZCVKuky[l8NLUWkn]) {
                QgDck6HuCUi = ZCVKuky[l8NLUWkn - (949 - 948)];
                ZCVKuky[l8NLUWkn - (912 - 911)] = ZCVKuky[l8NLUWkn];
                ZCVKuky[l8NLUWkn] = QgDck6HuCUi;
            }
        }
    }
    for (cVHBdc = (845 - 845); Yx1Gl2sTwVf8 > cVHBdc; cVHBdc = cVHBdc + 1)
        printf ("%.2lf ", HJzCsMF[cVHBdc]);
    for (cVHBdc = (844 - 844); cVHBdc < ay6h4vDfW; cVHBdc = cVHBdc + 1) {
        if (cVHBdc == ay6h4vDfW - 1)
            printf ("%.2lf", ZCVKuky[cVHBdc]);
        else
            printf ("%.2lf ", ZCVKuky[cVHBdc]);
    }
    return 0;
}

