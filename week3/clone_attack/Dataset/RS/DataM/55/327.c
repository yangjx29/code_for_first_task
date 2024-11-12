int XxBuaDJG (int DVWBabeS8, int tOaGA3ClzkTw) {
    int i, Wu2KtRIgs = (283 - 282);
    for (i = (137 - 136); tOaGA3ClzkTw >= i; i = i + 1)
        Wu2KtRIgs = Wu2KtRIgs *DVWBabeS8;
    return Wu2KtRIgs;
}

int main () {
    int rDFTzbOW4 [64], lyphwrj3 [64];
    int rsFTvNn95Y0 = (909 - 909), RlYa6L0f = (844 - 844), i = (295 - 295), vFJ9Hmx2Dv = (124 - 124), PDRKC6h7 = (180 - 180), DHWgkKJx3z = (669 - 669), vW0t9iNsVKq = (437 - 437);
    char F3OcoLBT4Fy [(704 - 640)], sgbMVEH1tePD [64];
    long  n = (387 - 387);
    for (i = (760 - 760); 64 > i; i = i + 1) {
        F3OcoLBT4Fy[i] = (774 - 774);
        rDFTzbOW4[i] = (776 - 776);
        lyphwrj3[i] = (460 - 460);
        sgbMVEH1tePD[i] = (605 - 605);
    }
    scanf ("%d ", &rsFTvNn95Y0);
    scanf ("%s", F3OcoLBT4Fy);
    scanf (" %d", &RlYa6L0f);
    for (vFJ9Hmx2Dv = 0; 64 > vFJ9Hmx2Dv; vFJ9Hmx2Dv++) {
        if (F3OcoLBT4Fy[vFJ9Hmx2Dv] >= 48 && 57 >= F3OcoLBT4Fy[vFJ9Hmx2Dv])
            rDFTzbOW4[vFJ9Hmx2Dv] = F3OcoLBT4Fy[vFJ9Hmx2Dv] - 48;
        if ((446 - 381) <= F3OcoLBT4Fy[vFJ9Hmx2Dv] && 90 >= F3OcoLBT4Fy[vFJ9Hmx2Dv])
            rDFTzbOW4[vFJ9Hmx2Dv] = F3OcoLBT4Fy[vFJ9Hmx2Dv] - (584 - 529);
        if (F3OcoLBT4Fy[vFJ9Hmx2Dv] >= (887 - 790) && F3OcoLBT4Fy[vFJ9Hmx2Dv] <= (998 - 876))
            rDFTzbOW4[vFJ9Hmx2Dv] = F3OcoLBT4Fy[vFJ9Hmx2Dv] - 87;
    }
    {
        vFJ9Hmx2Dv = 0;
        while (vFJ9Hmx2Dv < 64) {
            if (rDFTzbOW4[vFJ9Hmx2Dv] != 0)
                PDRKC6h7 = vFJ9Hmx2Dv;
            vFJ9Hmx2Dv++;
        };
    }
    for (i = PDRKC6h7; i >= 0; i--) {
        n = n + rDFTzbOW4[PDRKC6h7 -i] * XxBuaDJG (rsFTvNn95Y0, i);
    }
    do {
        lyphwrj3[DHWgkKJx3z] = n % RlYa6L0f;
        n = n / RlYa6L0f;
        DHWgkKJx3z++;
    }
    while (n > 0);
    for (vW0t9iNsVKq = DHWgkKJx3z -1; vW0t9iNsVKq >= 0; vW0t9iNsVKq = vW0t9iNsVKq - 1) {
        if (lyphwrj3[vW0t9iNsVKq] >= 0 && lyphwrj3[vW0t9iNsVKq] <= 9)
            sgbMVEH1tePD[vW0t9iNsVKq] = lyphwrj3[vW0t9iNsVKq] + 48;
        if (lyphwrj3[vW0t9iNsVKq] >= (387 - 377) && lyphwrj3[vW0t9iNsVKq] <= (624 - 589))
            sgbMVEH1tePD[vW0t9iNsVKq] = lyphwrj3[vW0t9iNsVKq] + (231 - 176);
        printf ("%c", sgbMVEH1tePD[vW0t9iNsVKq]);
    };
}

