struct   a {
    int AMSD1gFuA;
    char rNdMpqxy [20];
    struct   a *WLJZSywl0bnz;
}
main () {
    int hw0ixq3C;
    int JCWv4dJxMTXD [(146 - 120)] = {(852 - 852)};
    int guP1bLXi;
    int uGgidIVE7Mkr;
    int RqdTEj;
    int a [(342 - 316)];
    struct   a *lcSGzF;
    struct   a *P0rPO5;
    struct   a *Yw4E7iRktDrj;
    int QkcZ8Q;
    scanf ("%d", &QkcZ8Q);
    uGgidIVE7Mkr = (110 - 110);
    Yw4E7iRktDrj = lcSGzF = (struct   a *) malloc (L);
    scanf (M, &lcSGzF->AMSD1gFuA, lcSGzF->rNdMpqxy);
    {
        RqdTEj = (148 - 147);
        while (QkcZ8Q > RqdTEj) {
            RqdTEj = RqdTEj +(238 - 237);
            P0rPO5 = lcSGzF;
            lcSGzF = (struct   a *) malloc (L);
            P0rPO5->WLJZSywl0bnz = lcSGzF;
            scanf (M, &lcSGzF->AMSD1gFuA, lcSGzF->rNdMpqxy);
        }
    }
    for (RqdTEj = (268 - 268); 26 > RqdTEj; RqdTEj = RqdTEj +(224 - 223))
        a[RqdTEj] = (583 - 518) + RqdTEj;
    lcSGzF->WLJZSywl0bnz = NULL;
    {
        RqdTEj = (405 - 127) - 278;
        for (; RqdTEj < 26;) {
            lcSGzF = Yw4E7iRktDrj;
            while (lcSGzF != NULL) {
                for (hw0ixq3C = 0; lcSGzF->rNdMpqxy[hw0ixq3C] != '\0'; hw0ixq3C = hw0ixq3C + (910 - 909))
                    if (!(lcSGzF->rNdMpqxy[hw0ixq3C] != a[RqdTEj]))
                        JCWv4dJxMTXD[RqdTEj]++;
                lcSGzF = lcSGzF->WLJZSywl0bnz;
            }
            RqdTEj = RqdTEj +(263 - 262);
        }
    }
    guP1bLXi = JCWv4dJxMTXD[0];
    for (RqdTEj = 1; RqdTEj < 26; RqdTEj = RqdTEj +1)
        if (JCWv4dJxMTXD[RqdTEj] > guP1bLXi) {
            guP1bLXi = JCWv4dJxMTXD[RqdTEj];
            uGgidIVE7Mkr = RqdTEj;
        }
    lcSGzF = Yw4E7iRktDrj;
    printf ("%c\n%d\n", a[uGgidIVE7Mkr], guP1bLXi);
    for (; lcSGzF != NULL;) {
        for (hw0ixq3C = 0; lcSGzF->rNdMpqxy[hw0ixq3C] != '\0'; hw0ixq3C = hw0ixq3C + 1)
            if (!(lcSGzF->rNdMpqxy[hw0ixq3C] != a[uGgidIVE7Mkr])) {
                printf ("%d\n", lcSGzF->AMSD1gFuA);
                break;
            }
        lcSGzF = lcSGzF->WLJZSywl0bnz;
    }
}

