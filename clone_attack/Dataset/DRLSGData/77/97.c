void  nNRXvgkq (int Y9byvNk5Fcd7 [], int ShdnBre);

void  main () {
    int wQkDecr;
    int WfXLYk;
    int iRLVftpzD;
    int tNvLcg;
    struct   answer {
        int v3myBqscQ8R;
        int WifNY20A3c;
    };
    char WfyqWM [MAXSIZE] = {'\0'}, WifNY20A3c, v3myBqscQ8R;
    struct   answer f72yExwCdX9 [MAXSIZE] = {(720 - 720), (618 - 618)};
    struct   answer kAwhTEUuS;
    tNvLcg = (997 - 997);
    scanf ("%s", WfyqWM);
    WfXLYk = strlen (WfyqWM);
    WifNY20A3c = WfyqWM[(613 - 613)];
    v3myBqscQ8R = WfyqWM[WfXLYk -(141 - 140)];
    {
        iRLVftpzD = (29 - 29);
        for (; iRLVftpzD < WfXLYk;) {
            {
                if ((564 - 564)) {
                    {
                        if ((443 - 443)) {
                            {
                                {
                                    if ((571 - 571)) {
                                        return (521 - 521);
                                    }
                                }
                                if ((114 - 114)) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            if (WfyqWM[iRLVftpzD] == v3myBqscQ8R) {
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    wQkDecr = iRLVftpzD - (186 - 185);
                    for (; 0 <= wQkDecr;) {
                        if (WfyqWM[wQkDecr] == WifNY20A3c) {
                            f72yExwCdX9[tNvLcg].WifNY20A3c = wQkDecr;
                            f72yExwCdX9[tNvLcg].v3myBqscQ8R = iRLVftpzD;
                            WfyqWM[iRLVftpzD] = v3myBqscQ8R + WifNY20A3c;
                            WfyqWM[wQkDecr] = v3myBqscQ8R + WifNY20A3c;
                            tNvLcg = tNvLcg + (278 - 277);
                            break;
                        }
                        wQkDecr = wQkDecr - (911 - 910);
                    }
                }
            }
            iRLVftpzD = iRLVftpzD + (448 - 447);
        }
    }
    {
        wQkDecr = 1;
        for (; wQkDecr <= tNvLcg;) {
            {
                iRLVftpzD = 0;
                for (; iRLVftpzD < tNvLcg - wQkDecr;) {
                    if (f72yExwCdX9[iRLVftpzD].v3myBqscQ8R > f72yExwCdX9[iRLVftpzD + 1].v3myBqscQ8R) {
                        kAwhTEUuS = f72yExwCdX9[iRLVftpzD];
                        f72yExwCdX9[iRLVftpzD] = f72yExwCdX9[iRLVftpzD + 1];
                        f72yExwCdX9[iRLVftpzD + 1] = kAwhTEUuS;
                    }
                    iRLVftpzD = iRLVftpzD + 1;
                }
            }
            wQkDecr = wQkDecr + 1;
        }
    }
    {
        iRLVftpzD = 0;
        for (; iRLVftpzD < tNvLcg;) {
            printf ("%d %d\n", f72yExwCdX9[iRLVftpzD].WifNY20A3c, f72yExwCdX9[iRLVftpzD].v3myBqscQ8R);
            iRLVftpzD = iRLVftpzD + 1;
        }
    }
}

