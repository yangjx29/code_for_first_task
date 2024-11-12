main () {
    int hK2JeRNSGDZ;
    char T89zpRj [1500];
    gets (T89zpRj);
    int EbIKGoA;
    int Cl4o51YsJwR;
    int MxhiV1;
    int yWi2Hc;
    int gPB7grjQyvWo [300];
    MxhiV1 = strlen (T89zpRj);
    yWi2Hc = 0;
    for (EbIKGoA = 0; EbIKGoA <= MxhiV1 -1; EbIKGoA++) {
        gPB7grjQyvWo[yWi2Hc] = 0;
        for (; EbIKGoA <= MxhiV1 -1; EbIKGoA++) {
            if (!(',' != T89zpRj[EbIKGoA]))
                break;
            else {
                gPB7grjQyvWo[yWi2Hc] = T89zpRj[EbIKGoA] - 48 + gPB7grjQyvWo[yWi2Hc] * 10;
            };
        }
        yWi2Hc++;
    }
    if (MxhiV1 == 1)
        ;
    else {
        for (EbIKGoA = 0; EbIKGoA <= yWi2Hc - 2; EbIKGoA++) {
            if (gPB7grjQyvWo[EbIKGoA] != gPB7grjQyvWo[EbIKGoA +1])
                break;
        }
        if (!(yWi2Hc - 1 != EbIKGoA))
            ;
        else {
            for (EbIKGoA = 0; EbIKGoA <= yWi2Hc - 2; EbIKGoA++)
                for (Cl4o51YsJwR = 0; Cl4o51YsJwR <= yWi2Hc - 2 - EbIKGoA; Cl4o51YsJwR++)
                    if (gPB7grjQyvWo[Cl4o51YsJwR] <= gPB7grjQyvWo[Cl4o51YsJwR +1]) {
                        hK2JeRNSGDZ = gPB7grjQyvWo[Cl4o51YsJwR];
                        gPB7grjQyvWo[Cl4o51YsJwR] = gPB7grjQyvWo[Cl4o51YsJwR +1];
                        gPB7grjQyvWo[Cl4o51YsJwR +1] = hK2JeRNSGDZ;
                    }
            for (EbIKGoA = 0; EbIKGoA <= yWi2Hc - 2; EbIKGoA++) {
                if (gPB7grjQyvWo[EbIKGoA] != gPB7grjQyvWo[EbIKGoA +1]) {
                    printf ("%d", gPB7grjQyvWo[EbIKGoA +1]);
                    break;
                };
            };
        };
    };
}

