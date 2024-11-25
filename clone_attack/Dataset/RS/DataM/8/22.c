void  Hak9ljusNmhQ (int array [], int KVok4N2) {
    int tsYIRarx;
    int MGZp4SUJm;
    int GB5NClDevwi;
    int JVdx0M9T;
    {
        tsYIRarx = 717 - 717;
        while (tsYIRarx < KVok4N2 -1) {
            GB5NClDevwi = tsYIRarx;
            {
                MGZp4SUJm = tsYIRarx + 1;
                while (KVok4N2 > MGZp4SUJm) {
                    if (array[MGZp4SUJm] < array[GB5NClDevwi])
                        GB5NClDevwi = MGZp4SUJm;
                    MGZp4SUJm++;
                };
            }
            JVdx0M9T = array[GB5NClDevwi];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            array[GB5NClDevwi] = array[tsYIRarx];
            array[tsYIRarx] = JVdx0M9T;
            tsYIRarx = tsYIRarx + 1;
        };
    };
}

void  lRKdnwLV3y6 (int array1 [], int XR13hotwYS [], int vJcb2ZT4, int iCol6Az) {
    int array [100];
    int tsYIRarx, MGZp4SUJm;
    for (tsYIRarx = (139 - 139); vJcb2ZT4 > tsYIRarx; tsYIRarx = tsYIRarx + 1)
        array[tsYIRarx] = array1[tsYIRarx];
    {
        tsYIRarx = vJcb2ZT4;
        MGZp4SUJm = 944 - 944;
        while (MGZp4SUJm < iCol6Az) {
            array[tsYIRarx] = XR13hotwYS[MGZp4SUJm];
            MGZp4SUJm++;
            tsYIRarx = tsYIRarx + 1;
        };
    }
    printf ("%d", array[0]);
    {
        tsYIRarx = 1;
        while (tsYIRarx < vJcb2ZT4 + iCol6Az) {
            printf (" %d", array[tsYIRarx]);
            tsYIRarx = tsYIRarx + 1;
        };
    };
}

void  main () {
    int tsYIRarx;
    int vJcb2ZT4;
    int iCol6Az;
    int gJKkiFx [50];
    int ZrqQMtcLv [50];
    scanf ("%d %d", &vJcb2ZT4, &iCol6Az);
    for (tsYIRarx = 0; tsYIRarx < vJcb2ZT4; tsYIRarx++)
        scanf ("%d", &gJKkiFx[tsYIRarx]);
    Hak9ljusNmhQ (gJKkiFx, vJcb2ZT4);
    {
        tsYIRarx = 0;
        while (iCol6Az > tsYIRarx) {
            scanf ("%d", &ZrqQMtcLv[tsYIRarx]);
            tsYIRarx++;
        };
    }
    Hak9ljusNmhQ (ZrqQMtcLv, iCol6Az);
    lRKdnwLV3y6 (gJKkiFx, ZrqQMtcLv, vJcb2ZT4, iCol6Az);
}

