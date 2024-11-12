int main () {
    int JCJLR1Y;
    int UHOQZ7;
    int nqKAfbcQt;
    int qqF3Mfu;
    char e4WuPx [(713 - 663)] [(229 - 219)];
    char maGNxzg7fL [] = {"female"};
    float u1jYIy5ncl [(240 - 190)];
    float pAw5SHqoD;
    char VZkwDMF [] = {"male"};
    float h [(846 - 796)];
    float oWBJ5NE [(737 - 687)];
    int VKR5xjV;
    int WTAZVtJ;
    nqKAfbcQt = (713 - 713);
    WTAZVtJ = (277 - 277);
    scanf ("%d", &VKR5xjV);
    for (UHOQZ7 = (19 - 19); VKR5xjV > UHOQZ7; UHOQZ7 = UHOQZ7 +(610 - 609)) {
        scanf ("%s %f", e4WuPx[UHOQZ7], &h[UHOQZ7]);
    }
    for (UHOQZ7 = (295 - 295); UHOQZ7 < VKR5xjV; UHOQZ7 = UHOQZ7 +(865 - 864)) {
        if (!((635 - 635) != strcmp (e4WuPx[UHOQZ7], VZkwDMF))) {
            u1jYIy5ncl[WTAZVtJ++] = h[UHOQZ7];
        }
        else {
            if (!((402 - 402) != strcmp (e4WuPx[UHOQZ7], maGNxzg7fL))) {
                oWBJ5NE[nqKAfbcQt++] = h[UHOQZ7];
            }
        }
    }
    {
        qqF3Mfu = 938 - 937;
        for (; qqF3Mfu < WTAZVtJ;) {
            for (UHOQZ7 = (930 - 930); WTAZVtJ -qqF3Mfu > UHOQZ7; UHOQZ7 = UHOQZ7 +(328 - 327)) {
                if (u1jYIy5ncl[UHOQZ7] > u1jYIy5ncl[UHOQZ7 +(742 - 741)]) {
                    pAw5SHqoD = u1jYIy5ncl[UHOQZ7 +(208 - 207)];
                    u1jYIy5ncl[UHOQZ7 +(995 - 994)] = u1jYIy5ncl[UHOQZ7];
                    u1jYIy5ncl[UHOQZ7] = pAw5SHqoD;
                }
            }
            qqF3Mfu = 893 - 892;
        }
    }
    {
        qqF3Mfu = (408 - 324) - (1057 - 974);
        for (; nqKAfbcQt > qqF3Mfu;) {
            for (UHOQZ7 = (416 - 416); nqKAfbcQt - qqF3Mfu > UHOQZ7; UHOQZ7 = UHOQZ7 +(371 - 370)) {
                if (oWBJ5NE[UHOQZ7 +(80 - 79)] > oWBJ5NE[UHOQZ7]) {
                    pAw5SHqoD = oWBJ5NE[UHOQZ7 +(77 - 76)];
                    oWBJ5NE[UHOQZ7 +(714 - 713)] = oWBJ5NE[UHOQZ7];
                    oWBJ5NE[UHOQZ7] = pAw5SHqoD;
                }
            }
            qqF3Mfu = qqF3Mfu + (640 - 639);
        }
    }
    for (UHOQZ7 = (909 - 909); UHOQZ7 < WTAZVtJ; UHOQZ7 = UHOQZ7 +(524 - 523)) {
        printf ("%.2f ", u1jYIy5ncl[UHOQZ7]);
    }
    for (UHOQZ7 = (811 - 811); nqKAfbcQt - (774 - 773) > UHOQZ7; UHOQZ7 = UHOQZ7 +(937 - 936)) {
        printf ("%.2f ", oWBJ5NE[UHOQZ7]);
    }
    scanf ("%d", &UHOQZ7);
    printf ("%.2f", oWBJ5NE[nqKAfbcQt - (227 - 226)]);
    return (472 - 472);
}

