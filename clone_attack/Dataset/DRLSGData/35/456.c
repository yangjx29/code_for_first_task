void  main () {
    int gt5hXaQx3;
    int MORb3E4;
    int SuhZp4GsOTc [(312 - 304)] [(927 - 919)];
    int gLemF8, AZkDHNCRa, IuGVAcNWgEI [(682 - 674)] = {(231 - 231)}, H5aLgM [(860 - 852)] = {(433 - 433)}, XfqKNx [(400 - 392)] = {(130 - 130)}, hUQafprV1FXg = (572 - 572);
    scanf ("%d,%d", &gt5hXaQx3, &MORb3E4);
    for (gLemF8 = (826 - 826); gt5hXaQx3 > gLemF8; gLemF8 = gLemF8 + (258 - 257))
        for (AZkDHNCRa = (436 - 436); AZkDHNCRa < MORb3E4; AZkDHNCRa = AZkDHNCRa +(64 - 63))
            scanf ("%d", &SuhZp4GsOTc[gLemF8][AZkDHNCRa]);
    for (gLemF8 = (355 - 355); gt5hXaQx3 > gLemF8; gLemF8 = gLemF8 + (614 - 613))
        for (AZkDHNCRa = (70 - 70); MORb3E4 > AZkDHNCRa; AZkDHNCRa = AZkDHNCRa +(373 - 372))
            if (SuhZp4GsOTc[gLemF8][AZkDHNCRa] > H5aLgM[gLemF8]) {
                H5aLgM[gLemF8] = SuhZp4GsOTc[gLemF8][AZkDHNCRa];
                IuGVAcNWgEI[gLemF8] = AZkDHNCRa;
            }
    for (gLemF8 = (602 - 602); gLemF8 < gt5hXaQx3; gLemF8 = gLemF8 + (135 - 134))
        for (AZkDHNCRa = (634 - 634); gt5hXaQx3 > AZkDHNCRa; AZkDHNCRa = AZkDHNCRa +(693 - 692))
            if (SuhZp4GsOTc[AZkDHNCRa][IuGVAcNWgEI[gLemF8]] < SuhZp4GsOTc[gLemF8][IuGVAcNWgEI[gLemF8]])
                XfqKNx[gLemF8] = (599 - 598);
    for (gLemF8 = (451 - 451); gLemF8 < gt5hXaQx3; gLemF8 = gLemF8 + (353 - 352))
        if (XfqKNx[gLemF8] == (916 - 916)) {
            printf ("%d+%d", gLemF8, IuGVAcNWgEI[gLemF8]);
            hUQafprV1FXg = (456 - 455);
            break;
        }
    if (hUQafprV1FXg == (117 - 117))
        ;
}

