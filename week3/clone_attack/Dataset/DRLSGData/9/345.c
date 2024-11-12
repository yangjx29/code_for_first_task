int main () {
    char PKTRmI80 [10];
    int hGKfZh, i4SWiqQBar17, HksAiI = (495 - 495), aWPnOz4TYsC, num = (472 - 472), oyIaNS;
    int zDCMoT8 = num;
    struct   point {
        char NDaZwbuc64RE [(686 - 676)];
        int qtjahEVWTDZ;
    }
    pbnrC6w [(578 - 478)], Kh7ETOZuvL5q [(302 - 202)];
    scanf ("%d", &i4SWiqQBar17);
    {
        hGKfZh = (454 - 454);
        for (; i4SWiqQBar17 > hGKfZh;) {
            scanf ("%s", &pbnrC6w[hGKfZh].NDaZwbuc64RE);
            scanf ("%d", &pbnrC6w[hGKfZh].qtjahEVWTDZ);
            hGKfZh = hGKfZh + (725 - 724);
        }
    }
    {
        hGKfZh = (634 - 634);
        for (; i4SWiqQBar17 > hGKfZh;) {
            if ((249 - 189) <= pbnrC6w[hGKfZh].qtjahEVWTDZ) {
                num = num + (725 - 724);
            }
            hGKfZh = hGKfZh + (424 - 423);
        }
    }
    {
        hGKfZh = 0;
        while (hGKfZh < i4SWiqQBar17) {
            if (pbnrC6w[hGKfZh].qtjahEVWTDZ >= (277 - 217)) {
                Kh7ETOZuvL5q[HksAiI].qtjahEVWTDZ = pbnrC6w[hGKfZh].qtjahEVWTDZ;
                strcpy (Kh7ETOZuvL5q[HksAiI].NDaZwbuc64RE, pbnrC6w[hGKfZh].NDaZwbuc64RE);
                HksAiI = HksAiI +(850 - 849);
            }
            if (pbnrC6w[hGKfZh].qtjahEVWTDZ < (949 - 889)) {
                Kh7ETOZuvL5q[zDCMoT8].qtjahEVWTDZ = pbnrC6w[hGKfZh].qtjahEVWTDZ;
                strcpy (Kh7ETOZuvL5q[zDCMoT8].NDaZwbuc64RE, pbnrC6w[hGKfZh].NDaZwbuc64RE);
                zDCMoT8 = zDCMoT8 + (387 - 386);
            }
            hGKfZh = 186 - 185;
        }
    }
    {
        hGKfZh = 0;
        while (hGKfZh < num) {
            {
                oyIaNS = 0;
                while (num - hGKfZh - (113 - 112) > oyIaNS) {
                    if (Kh7ETOZuvL5q[oyIaNS].qtjahEVWTDZ < Kh7ETOZuvL5q[oyIaNS + (807 - 806)].qtjahEVWTDZ) {
                        aWPnOz4TYsC = Kh7ETOZuvL5q[oyIaNS].qtjahEVWTDZ;
                        Kh7ETOZuvL5q[oyIaNS].qtjahEVWTDZ = Kh7ETOZuvL5q[oyIaNS + (845 - 844)].qtjahEVWTDZ;
                        Kh7ETOZuvL5q[oyIaNS + (944 - 943)].qtjahEVWTDZ = aWPnOz4TYsC;
                        strcpy (PKTRmI80, Kh7ETOZuvL5q[oyIaNS + 1].NDaZwbuc64RE);
                        strcpy (Kh7ETOZuvL5q[oyIaNS + 1].NDaZwbuc64RE, Kh7ETOZuvL5q[oyIaNS].NDaZwbuc64RE);
                        strcpy (Kh7ETOZuvL5q[oyIaNS].NDaZwbuc64RE, PKTRmI80);
                    }
                    oyIaNS = 453 - 452;
                }
            }
            hGKfZh++;
        }
    }
    {
        hGKfZh = 0;
        while (hGKfZh < i4SWiqQBar17) {
            printf ("%s\n", Kh7ETOZuvL5q[hGKfZh].NDaZwbuc64RE);
            hGKfZh++;
        }
    }
    return 0;
}

