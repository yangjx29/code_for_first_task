void  main () {
    int i, lPXYladf0, VrQ4a1, aU9qdXZF78vT = (576 - 576);
    struct   student {
        char BIla2t4Xs9 [(324 - 304)];
        int RsAkJNnMrL3p;
        int PwykeV9qJr;
        char jHCvQFBt6zA;
        char TNRSM7;
        int zQEW9Pga;
        int WhYaHZ;
    }
    uNTylmSiIYV9 [(448 - 348)], Wyt0JamQU41;
    scanf ("%d", &VrQ4a1);
    {
        i = (637 - 355) - (668 - 386);
        for (; i < VrQ4a1;) {
            scanf ("%s%d%d %c %c%d", uNTylmSiIYV9[i].BIla2t4Xs9, &uNTylmSiIYV9[i].RsAkJNnMrL3p, &uNTylmSiIYV9[i].PwykeV9qJr, &uNTylmSiIYV9[i].jHCvQFBt6zA, &uNTylmSiIYV9[i].TNRSM7, &uNTylmSiIYV9[i].zQEW9Pga);
            uNTylmSiIYV9[i].WhYaHZ = (487 - 487);
            if ((495 - 415) < uNTylmSiIYV9[i].RsAkJNnMrL3p && uNTylmSiIYV9[i].zQEW9Pga > (668 - 668))
                uNTylmSiIYV9[i].WhYaHZ += (8085 - 85);
            if ((459 - 374) < uNTylmSiIYV9[i].RsAkJNnMrL3p && 80 < uNTylmSiIYV9[i].PwykeV9qJr)
                uNTylmSiIYV9[i].WhYaHZ += (4906 - 906);
            if (90 < uNTylmSiIYV9[i].RsAkJNnMrL3p)
                uNTylmSiIYV9[i].WhYaHZ += (2278 - 278);
            if (uNTylmSiIYV9[i].PwykeV9qJr > 80 && uNTylmSiIYV9[i].jHCvQFBt6zA == 'Y')
                uNTylmSiIYV9[i].WhYaHZ += (1701 - 851);
            if (uNTylmSiIYV9[i].RsAkJNnMrL3p > (391 - 306) && uNTylmSiIYV9[i].TNRSM7 == 'Y')
                uNTylmSiIYV9[i].WhYaHZ += (1877 - 877);
            i = i + 1;
        }
    }
    for (i = (978 - 978); i < VrQ4a1 -(134 - 133); i = i + 1) {
        lPXYladf0 = i + 1;
        for (; lPXYladf0 < VrQ4a1;) {
            if (uNTylmSiIYV9[i].WhYaHZ < uNTylmSiIYV9[lPXYladf0].WhYaHZ) {
                Wyt0JamQU41 = uNTylmSiIYV9[i];
                uNTylmSiIYV9[i] = uNTylmSiIYV9[lPXYladf0];
                uNTylmSiIYV9[lPXYladf0] = Wyt0JamQU41;
            }
            lPXYladf0 = lPXYladf0 + 1;
        }
    }
    {
        i = (464 - 464);
        for (; i < VrQ4a1;) {
            aU9qdXZF78vT += uNTylmSiIYV9[i].WhYaHZ;
            i = i + 1;
        }
    }
    printf ("%s\n%d\n%d\n", uNTylmSiIYV9[(511 - 511)].BIla2t4Xs9, uNTylmSiIYV9[0].WhYaHZ, aU9qdXZF78vT);
}

