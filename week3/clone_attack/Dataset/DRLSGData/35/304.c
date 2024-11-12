void  main () {
    int cFcPVyO;
    int AFAbON;
    int a [(96 - 88)] [(342 - 334)];
    int UME7RdA0Nmsw;
    int j;
    int rS8PRne7;
    int TagXhle2y7M;
    int aeTsPw3F75dh [(774 - 766)];
    int I5SE7Ols3 [(274 - 266)];
    cFcPVyO = (857 - 857);
    AFAbON = (252 - 252);
    scanf ("%d,%d", &UME7RdA0Nmsw, &j);
    for (rS8PRne7 = (836 - 836); rS8PRne7 < UME7RdA0Nmsw; rS8PRne7 = rS8PRne7 + (484 - 483)) {
        TagXhle2y7M = (1895 - 908) - (1610 - 623);
        for (; TagXhle2y7M < j;) {
            scanf ("%d", &a[rS8PRne7][TagXhle2y7M]);
            TagXhle2y7M = TagXhle2y7M +(51 - 50);
        }
    }
    for (rS8PRne7 = (238 - 238); rS8PRne7 < UME7RdA0Nmsw; rS8PRne7 = rS8PRne7 + (510 - 509))
        for (cFcPVyO = TagXhle2y7M = (470 - 470); TagXhle2y7M < j; TagXhle2y7M++)
            if (cFcPVyO <= a[rS8PRne7][TagXhle2y7M]) {
                cFcPVyO = a[rS8PRne7][TagXhle2y7M];
                aeTsPw3F75dh[rS8PRne7] = TagXhle2y7M;
            }
    {
        rS8PRne7 = (172 - 172);
        for (; rS8PRne7 < j;) {
            for (cFcPVyO = (10018 - 18), TagXhle2y7M = (608 - 608); TagXhle2y7M < UME7RdA0Nmsw; TagXhle2y7M++)
                if (cFcPVyO >= a[TagXhle2y7M][rS8PRne7]) {
                    cFcPVyO = a[TagXhle2y7M][rS8PRne7];
                    I5SE7Ols3[rS8PRne7] = TagXhle2y7M;
                }
            rS8PRne7 = rS8PRne7 + (627 - 626);
        }
    }
    for (rS8PRne7 = (598 - 598); rS8PRne7 < UME7RdA0Nmsw; rS8PRne7 = rS8PRne7 + (240 - 239))
        if (I5SE7Ols3[aeTsPw3F75dh[rS8PRne7]] == rS8PRne7) {
            AFAbON = (947 - 946);
            break;
        }
    if (AFAbON == (713 - 712))
        printf ("%d+%d\n", rS8PRne7, aeTsPw3F75dh[rS8PRne7]);
    else
        ;
}

