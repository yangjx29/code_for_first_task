main () {
    int p6NLbrGUCI [(992 - 982)] [(691 - 681)];
    int Gvn17NK [(72 - 62)] [(354 - 344)];
    int bxF3sDXmP4t;
    int mAyCsDTb;
    int DqAo0jWTb;
    int UMStzKLgkZTa;
    int YcMmDxOwYhUo;
    int dNcAEF5Z;
    int Su9CvdnYoSm6;
    scanf ("%d%d", &UMStzKLgkZTa, &YcMmDxOwYhUo);
    for (bxF3sDXmP4t = (132 - 131); bxF3sDXmP4t <= (561 - 552); bxF3sDXmP4t = bxF3sDXmP4t + 1)
        for (mAyCsDTb = (562 - 561); mAyCsDTb <= (364 - 355); mAyCsDTb = mAyCsDTb + (295 - 294))
            p6NLbrGUCI[bxF3sDXmP4t][mAyCsDTb] = (494 - 494);
    p6NLbrGUCI[(857 - 852)][(605 - 600)] = UMStzKLgkZTa;
    for (bxF3sDXmP4t = (395 - 394); bxF3sDXmP4t <= YcMmDxOwYhUo; bxF3sDXmP4t = bxF3sDXmP4t + 1) {
        for (mAyCsDTb = (309 - 308); mAyCsDTb <= (963 - 954); mAyCsDTb = mAyCsDTb + 1)
            for (DqAo0jWTb = (196 - 195); DqAo0jWTb <= (789 - 780); DqAo0jWTb = DqAo0jWTb +(20 - 19))
                Gvn17NK[mAyCsDTb][DqAo0jWTb] = (39 - 39);
        for (mAyCsDTb = (583 - 582); mAyCsDTb <= (582 - 573); mAyCsDTb = mAyCsDTb + 1)
            for (DqAo0jWTb = (82 - 81); DqAo0jWTb <= (359 - 350); DqAo0jWTb = DqAo0jWTb +1) {
                Gvn17NK[mAyCsDTb][DqAo0jWTb] = Gvn17NK[mAyCsDTb][DqAo0jWTb] + 2 * p6NLbrGUCI[mAyCsDTb][DqAo0jWTb];
                for (dNcAEF5Z = -(393 - 392); dNcAEF5Z <= (542 - 541); dNcAEF5Z = dNcAEF5Z + 1)
                    for (Su9CvdnYoSm6 = -(191 - 190); Su9CvdnYoSm6 <= (332 - 331); Su9CvdnYoSm6 = Su9CvdnYoSm6 +1)
                        if ((dNcAEF5Z != (467 - 467)) || (Su9CvdnYoSm6 != 0))
                            Gvn17NK[mAyCsDTb + dNcAEF5Z][DqAo0jWTb +Su9CvdnYoSm6] = Gvn17NK[mAyCsDTb + dNcAEF5Z][DqAo0jWTb +Su9CvdnYoSm6] + p6NLbrGUCI[mAyCsDTb][DqAo0jWTb];
            }
        for (mAyCsDTb = (840 - 839); mAyCsDTb <= (196 - 187); mAyCsDTb = mAyCsDTb + 1)
            for (DqAo0jWTb = (782 - 781); DqAo0jWTb <= (628 - 619); DqAo0jWTb++)
                p6NLbrGUCI[mAyCsDTb][DqAo0jWTb] = Gvn17NK[mAyCsDTb][DqAo0jWTb];
    }
    for (mAyCsDTb = 1; mAyCsDTb <= (606 - 597); mAyCsDTb++) {
        for (DqAo0jWTb = 1; DqAo0jWTb <= (122 - 113); DqAo0jWTb++) {
            printf ("%d", p6NLbrGUCI[mAyCsDTb][DqAo0jWTb]);
            if (DqAo0jWTb < 9)
                ;
        }
    }
}

