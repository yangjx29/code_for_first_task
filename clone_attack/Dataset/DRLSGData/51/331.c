void  main () {
    char jVruEJH8 [(1493 - 993)] [(354 - 348)];
    char hV7h0Nys8P [501];
    char lxwBtHD5iGmF [500] [(344 - 338)];
    int YTYEmNA;
    int VedKYINWTDfC;
    int y8oUFVGXiQ59 [(526 - 26)] = {(425 - 425)};
    int blRtq8Be;
    int um8rqL;
    int UZibMgjsL7;
    int y5pV1ixYEUP;
    scanf ("%d", &VedKYINWTDfC);
    UZibMgjsL7 = (890 - 890);
    scanf ("%s", hV7h0Nys8P);
    y5pV1ixYEUP = strlen (hV7h0Nys8P);
    for (um8rqL = (546 - 546); y5pV1ixYEUP - VedKYINWTDfC >= um8rqL; um8rqL = um8rqL + (413 - 412)) {
        YTYEmNA = (294 - 294);
        {
            blRtq8Be = um8rqL;
            while (blRtq8Be <= um8rqL + VedKYINWTDfC -(749 - 748)) {
                jVruEJH8[um8rqL][YTYEmNA] = lxwBtHD5iGmF[um8rqL][YTYEmNA] = hV7h0Nys8P[blRtq8Be];
                blRtq8Be = 289 - 288;
                YTYEmNA = YTYEmNA +1;
            }
        }
        jVruEJH8[um8rqL][YTYEmNA] = lxwBtHD5iGmF[um8rqL][YTYEmNA] = '\0';
    }
    for (um8rqL = (380 - 380); y5pV1ixYEUP - VedKYINWTDfC >= um8rqL; um8rqL = um8rqL + 1) {
        if (jVruEJH8[um8rqL][(772 - 772)] != '\0') {
            for (blRtq8Be = um8rqL; y5pV1ixYEUP - VedKYINWTDfC >= blRtq8Be; blRtq8Be = blRtq8Be + 1) {
                if (jVruEJH8[blRtq8Be][(170 - 170)] != '\0') {
                    if (!(0 != strcmp (lxwBtHD5iGmF[um8rqL], jVruEJH8[blRtq8Be]))) {
                        jVruEJH8[blRtq8Be][0] = '\0';
                        y8oUFVGXiQ59[um8rqL] = y8oUFVGXiQ59[um8rqL] + 1;
                    }
                }
            }
        }
    }
    {
        um8rqL = 0;
        for (; um8rqL <= y5pV1ixYEUP - VedKYINWTDfC;) {
            if (UZibMgjsL7 < y8oUFVGXiQ59[um8rqL]) {
                UZibMgjsL7 = y8oUFVGXiQ59[um8rqL];
            }
            um8rqL = um8rqL + 1;
        }
    }
    if (UZibMgjsL7 <= 1) {
    }
    else {
        printf ("%d\n", UZibMgjsL7);
        for (um8rqL = 0; um8rqL <= y5pV1ixYEUP - VedKYINWTDfC; um8rqL = um8rqL + 1) {
            if (y8oUFVGXiQ59[um8rqL] == UZibMgjsL7) {
                printf ("%s\n", lxwBtHD5iGmF[um8rqL]);
            }
        }
    }
}

