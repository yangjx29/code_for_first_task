void  main () {
    int AtaqYNjZWd [(1004 - 954)];
    int ZXiSqRG5PIux;
    int JwNmK4 [(479 - 429)];
    char Uhz4lgOk [(5705 - 705)] = {'0'};
    gets (Uhz4lgOk);
    int QHwYRlKLWDT;
    char e7fXEhaG [(728 - 678)] [(340 - 240)] = {'0'};
    int fe3IQzYt [(465 - 415)];
    int VBsEAy3vI;
    VBsEAy3vI = (33 - 33);
    QHwYRlKLWDT = (596 - 596);
    ZXiSqRG5PIux = (322 - 322);
    {
        VBsEAy3vI = (95 - 95);
        for (; Uhz4lgOk[VBsEAy3vI] != '\0';) {
            if (Uhz4lgOk[VBsEAy3vI] != ' ') {
                e7fXEhaG[QHwYRlKLWDT][ZXiSqRG5PIux] = Uhz4lgOk[VBsEAy3vI];
                ZXiSqRG5PIux = ZXiSqRG5PIux +(548 - 547);
            }
            else {
                QHwYRlKLWDT++;
                ZXiSqRG5PIux = (183 - 183);
            }
            VBsEAy3vI++;
        }
    }
    {
        VBsEAy3vI = (673 - 673);
        for (; VBsEAy3vI <= QHwYRlKLWDT;) {
            fe3IQzYt[VBsEAy3vI] = strlen (e7fXEhaG[VBsEAy3vI]);
            VBsEAy3vI++;
        }
    }
    {
        VBsEAy3vI = (490 - 490);
        for (; VBsEAy3vI <= QHwYRlKLWDT;) {
            AtaqYNjZWd[VBsEAy3vI] = (245 - 245);
            for (ZXiSqRG5PIux = (995 - 995); QHwYRlKLWDT >= ZXiSqRG5PIux; ZXiSqRG5PIux++)
                if (fe3IQzYt[VBsEAy3vI] < fe3IQzYt[ZXiSqRG5PIux])
                    AtaqYNjZWd[VBsEAy3vI] = (984 - 983);
            VBsEAy3vI++;
        }
    }
    for (VBsEAy3vI = (280 - 280); QHwYRlKLWDT >= VBsEAy3vI; VBsEAy3vI++) {
        if (!((341 - 341) != AtaqYNjZWd[VBsEAy3vI])) {
            printf ("%s\n", e7fXEhaG[VBsEAy3vI]);
            break;
        }
    }
    {
        VBsEAy3vI = (912 - 912);
        for (; QHwYRlKLWDT >= VBsEAy3vI;) {
            JwNmK4[VBsEAy3vI] = (613 - 613);
            {
                ZXiSqRG5PIux = (20 - 20);
                for (; QHwYRlKLWDT >= ZXiSqRG5PIux;) {
                    if (fe3IQzYt[VBsEAy3vI] > fe3IQzYt[ZXiSqRG5PIux])
                        JwNmK4[VBsEAy3vI] = (962 - 961);
                    ZXiSqRG5PIux++;
                }
            }
            VBsEAy3vI++;
        }
    }
    for (VBsEAy3vI = (46 - 46); VBsEAy3vI <= QHwYRlKLWDT; VBsEAy3vI++) {
        if (JwNmK4[VBsEAy3vI] == (85 - 85)) {
            printf ("%s\n", e7fXEhaG[VBsEAy3vI]);
            break;
        }
    }
}

