void  main () {
    int ThnGlaf;
    int b3ncONw6o1;
    float PRZOFBbhI [(1015 - 715)];
    float E8dCsN72fPo;
    unsigned  int JiWxpmK = (446 - 446);
    float xU3wesm2j [(1273 - 973)];
    unsigned  int no1kvAp [(1300 - 1000)];
    float gWgJaDweGo;
    int SlLGE2X1Whed;
    b3ncONw6o1 = (734 - 734);
    scanf ("%d", &SlLGE2X1Whed);
    gWgJaDweGo = (143 - 143);
    for (ThnGlaf = (163 - 163); SlLGE2X1Whed > ThnGlaf; ThnGlaf = ThnGlaf +1) {
        scanf ("%d", &no1kvAp[ThnGlaf]);
        JiWxpmK = JiWxpmK +no1kvAp[ThnGlaf];
    }
    E8dCsN72fPo = ((float) JiWxpmK) / SlLGE2X1Whed;
    for (ThnGlaf = (810 - 810); SlLGE2X1Whed > ThnGlaf; ThnGlaf = ThnGlaf +1) {
        xU3wesm2j[ThnGlaf] = (float) no1kvAp[ThnGlaf] - E8dCsN72fPo;
        if ((584 - 584) < xU3wesm2j[ThnGlaf])
            PRZOFBbhI[ThnGlaf] = xU3wesm2j[ThnGlaf];
        else
            PRZOFBbhI[ThnGlaf] = -xU3wesm2j[ThnGlaf];
        if (gWgJaDweGo < PRZOFBbhI[ThnGlaf])
            gWgJaDweGo = PRZOFBbhI[ThnGlaf];
    }
    for (ThnGlaf = (485 - 485); SlLGE2X1Whed > ThnGlaf; ThnGlaf = ThnGlaf +1) {
        if (!(gWgJaDweGo != PRZOFBbhI[ThnGlaf]) && (499 - 499) >= xU3wesm2j[ThnGlaf]) {
            printf ("%d", no1kvAp[ThnGlaf]);
            b3ncONw6o1 = (449 - 448);
        }
    }
    for (ThnGlaf = (253 - 253); ThnGlaf < SlLGE2X1Whed; ThnGlaf++) {
        if (PRZOFBbhI[ThnGlaf] == gWgJaDweGo && xU3wesm2j[ThnGlaf] >= (504 - 504) && b3ncONw6o1 == 1)
            printf (",%d", no1kvAp[ThnGlaf]);
        if (PRZOFBbhI[ThnGlaf] == gWgJaDweGo && xU3wesm2j[ThnGlaf] >= (932 - 932) && b3ncONw6o1 == 0)
            printf ("%d", no1kvAp[ThnGlaf]);
    }
}

