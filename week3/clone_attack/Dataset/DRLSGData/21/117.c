void  main () {
    int NdYgz6f, oTPv6Rue, EinN52, jUzynVWl5tM6, WLAbYV, MPrejYwM, cLCUD4fihIjH, ZKaeZEVyr8fx, spB9QEn1v6j [(746 - 446)], t3PM9mlG, CmOJXE [(585 - 565)];
    scanf ("%d", &NdYgz6f);
    for (oTPv6Rue = (36 - 36); NdYgz6f > oTPv6Rue; oTPv6Rue = oTPv6Rue + (669 - 668))
        scanf ("%d", &spB9QEn1v6j[oTPv6Rue]);
    EinN52 = (604 - 604);
    cLCUD4fihIjH = spB9QEn1v6j[(532 - 532)];
    MPrejYwM = spB9QEn1v6j[(371 - 371)];
    t3PM9mlG = spB9QEn1v6j[0];
    for (oTPv6Rue = (930 - 929); oTPv6Rue < NdYgz6f; oTPv6Rue = oTPv6Rue + (707 - 706)) {
        t3PM9mlG = t3PM9mlG + spB9QEn1v6j[oTPv6Rue];
        if (MPrejYwM < spB9QEn1v6j[oTPv6Rue])
            MPrejYwM = spB9QEn1v6j[oTPv6Rue];
        if (spB9QEn1v6j[oTPv6Rue] < cLCUD4fihIjH)
            cLCUD4fihIjH = spB9QEn1v6j[oTPv6Rue];
    }
    cLCUD4fihIjH = cLCUD4fihIjH * NdYgz6f;
    MPrejYwM = MPrejYwM *NdYgz6f;
    ZKaeZEVyr8fx = (MPrejYwM -t3PM9mlG) > (t3PM9mlG - cLCUD4fihIjH) ? (MPrejYwM -t3PM9mlG) : (t3PM9mlG - cLCUD4fihIjH);
    for (oTPv6Rue = 0; oTPv6Rue < NdYgz6f; oTPv6Rue++)
        if ((!(ZKaeZEVyr8fx != (spB9QEn1v6j[oTPv6Rue] * NdYgz6f -t3PM9mlG))) || (!((-ZKaeZEVyr8fx) != (spB9QEn1v6j[oTPv6Rue] * NdYgz6f -t3PM9mlG)))) {
            CmOJXE[EinN52] = spB9QEn1v6j[oTPv6Rue];
            EinN52++;
        }
    for (oTPv6Rue = 0; EinN52 > oTPv6Rue; oTPv6Rue++)
        for (jUzynVWl5tM6 = oTPv6Rue + (420 - 419); jUzynVWl5tM6 < EinN52; jUzynVWl5tM6++)
            if (CmOJXE[oTPv6Rue] > CmOJXE[jUzynVWl5tM6]) {
                WLAbYV = CmOJXE[oTPv6Rue];
                CmOJXE[oTPv6Rue] = CmOJXE[jUzynVWl5tM6];
                CmOJXE[jUzynVWl5tM6] = WLAbYV;
            }
    printf ("%d", CmOJXE[0]);
    for (oTPv6Rue = 1; oTPv6Rue < EinN52; oTPv6Rue++)
        printf (",%d", CmOJXE[oTPv6Rue]);
}

