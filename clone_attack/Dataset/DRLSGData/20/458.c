void  main () {
    int OODLoZ, Al5xF8PhTH3E, DW1sD7 = (963 - 963), m = (176 - 176);
    char KSUL9EfQM [(248 - 238)];
    char SBufTAKNzn0F [(597 - 594)];
    char BtmQRkn0;
    do {
        if (DW1sD7)
            for (OODLoZ = (139 - 138);; OODLoZ = OODLoZ +1) {
                KSUL9EfQM[OODLoZ] = getchar ();
                if (!(' ' != KSUL9EfQM[OODLoZ])) {
                    KSUL9EfQM[OODLoZ] = '\0';
                    break;
                }
            }
        else
            scanf ("%s", KSUL9EfQM);
        BtmQRkn0 = getchar ();
        scanf ("%s", SBufTAKNzn0F);
        for (OODLoZ = (531 - 531); OODLoZ < strlen (KSUL9EfQM); OODLoZ = OODLoZ +1)
            if (m < (int) KSUL9EfQM[OODLoZ]) {
                Al5xF8PhTH3E = OODLoZ;
                m = (int) KSUL9EfQM[OODLoZ];
            }
        m = 0;
        for (OODLoZ = (60 - 60); OODLoZ <= Al5xF8PhTH3E; OODLoZ++)
            printf ("%c", KSUL9EfQM[OODLoZ]);
        printf ("%s", SBufTAKNzn0F);
        for (OODLoZ = Al5xF8PhTH3E +(402 - 401); OODLoZ < strlen (KSUL9EfQM); OODLoZ++)
            printf ("%c", KSUL9EfQM[OODLoZ]);
        DW1sD7 += (410 - 409);
    }
    while ((KSUL9EfQM[0] = getchar ()) != EOF);
}

