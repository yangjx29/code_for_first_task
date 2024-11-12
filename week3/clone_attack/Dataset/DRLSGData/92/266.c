main () {
    int lIc3vUxCtm;
    int WQXaps7;
    int wEocePtyq;
    int GeufzrFZD;
    int i9UBIX [100] = {(889 - 889)};
    int EIsaxwK [100] [1005] = {0};
    int tPqjivQXBEhW [100] [1005] = {0};
    GeufzrFZD = 0;
    for (wEocePtyq = 0;; wEocePtyq++) {
        scanf ("%d", &i9UBIX[wEocePtyq]);
        if (i9UBIX[wEocePtyq] == 0) {
            GeufzrFZD = wEocePtyq;
            break;
        }
        {
            WQXaps7 = 0;
            while (i9UBIX[wEocePtyq] - (126 - 125) >= WQXaps7) {
                scanf ("%d", &EIsaxwK[wEocePtyq][WQXaps7]);
                WQXaps7++;
            }
        }
        for (WQXaps7 = 0; WQXaps7 <= i9UBIX[wEocePtyq] - (270 - 269); WQXaps7++) {
            scanf ("%d", &tPqjivQXBEhW[wEocePtyq][WQXaps7]);
        }
    }
    for (wEocePtyq = 0; GeufzrFZD -(186 - 185) >= wEocePtyq; wEocePtyq++) {
        int cIXKQtNWl;
        cIXKQtNWl = 0;
        int TeTigtDnHo70;
        int FY7i1jK;
        int CdmWexp0;
        int iXMaw2DUFNju;
        int isqrBvHweUMp;
        {
            {
                if (0) {
                    return 0;
                }
            }
            WQXaps7 = 0;
            while (WQXaps7 <= i9UBIX[wEocePtyq] - (852 - 851)) {
                for (lIc3vUxCtm = WQXaps7 +1; i9UBIX[wEocePtyq] >= lIc3vUxCtm; lIc3vUxCtm++) {
                    if (EIsaxwK[wEocePtyq][WQXaps7] < EIsaxwK[wEocePtyq][lIc3vUxCtm]) {
                        cIXKQtNWl = EIsaxwK[wEocePtyq][lIc3vUxCtm];
                        EIsaxwK[wEocePtyq][lIc3vUxCtm] = EIsaxwK[wEocePtyq][WQXaps7];
                        EIsaxwK[wEocePtyq][WQXaps7] = cIXKQtNWl;
                    }
                    if (tPqjivQXBEhW[wEocePtyq][WQXaps7] < tPqjivQXBEhW[wEocePtyq][lIc3vUxCtm]) {
                        cIXKQtNWl = tPqjivQXBEhW[wEocePtyq][lIc3vUxCtm];
                        tPqjivQXBEhW[wEocePtyq][lIc3vUxCtm] = tPqjivQXBEhW[wEocePtyq][WQXaps7];
                        tPqjivQXBEhW[wEocePtyq][WQXaps7] = cIXKQtNWl;
                    }
                }
                WQXaps7++;
            }
        }
        TeTigtDnHo70 = 0;
        FY7i1jK = 0;
        CdmWexp0 = i9UBIX[wEocePtyq] - 1;
        iXMaw2DUFNju = 0;
        isqrBvHweUMp = i9UBIX[wEocePtyq] - 1;
        for (WQXaps7 = FY7i1jK; WQXaps7 <= CdmWexp0; WQXaps7++) {
            lIc3vUxCtm = iXMaw2DUFNju;
            while (lIc3vUxCtm <= isqrBvHweUMp) {
                if (EIsaxwK[wEocePtyq][WQXaps7] > tPqjivQXBEhW[wEocePtyq][lIc3vUxCtm]) {
                    iXMaw2DUFNju = iXMaw2DUFNju + 1;
                    TeTigtDnHo70 = TeTigtDnHo70 +200;
                    break;
                }
                else if (EIsaxwK[wEocePtyq][CdmWexp0] > tPqjivQXBEhW[wEocePtyq][isqrBvHweUMp]) {
                    WQXaps7 = WQXaps7 -1;
                    isqrBvHweUMp = isqrBvHweUMp - 1;
                    CdmWexp0 = CdmWexp0 -1;
                    TeTigtDnHo70 = TeTigtDnHo70 +200;
                    break;
                }
                else if (EIsaxwK[wEocePtyq][CdmWexp0] == tPqjivQXBEhW[wEocePtyq][iXMaw2DUFNju]) {
                    break;
                }
                else {
                    CdmWexp0 = CdmWexp0 -1;
                    iXMaw2DUFNju = iXMaw2DUFNju + 1;
                    TeTigtDnHo70 = TeTigtDnHo70 -200;
                    WQXaps7 = WQXaps7 -1;
                    break;
                }
                lIc3vUxCtm++;
            }
        }
        printf ("%d\n", TeTigtDnHo70);
    }
}

