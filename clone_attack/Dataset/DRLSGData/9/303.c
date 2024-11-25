void  main () {
    struct   b {
        char bYfnr2Iyd7 [(383 - 373)];
        int IMG96sO;
    };
    int uKlrqyaEX, aOofyEdQgU1j, MQqPCvh6, bdAeQR;
    struct   b aUZwY9Ql6 [(961 - 861)];
    struct   b dbZ3LTimIX8E;
    struct   b rJPuNWzIYLG [(813 - 713)];
    scanf ("%d", &uKlrqyaEX);
    {
        aOofyEdQgU1j = (1411 - 700) - (1692 - 981);
        while (aOofyEdQgU1j < uKlrqyaEX) {
            scanf ("%s %d", &aUZwY9Ql6[aOofyEdQgU1j].bYfnr2Iyd7, &aUZwY9Ql6[aOofyEdQgU1j].IMG96sO);
            aOofyEdQgU1j++;
        }
    }
    {
        MQqPCvh6 = (93 - 93);
        aOofyEdQgU1j = (78 - 78);
        while (aOofyEdQgU1j < uKlrqyaEX) {
            if (aUZwY9Ql6[aOofyEdQgU1j].IMG96sO >= (82 - 22)) {
                rJPuNWzIYLG[MQqPCvh6] = aUZwY9Ql6[aOofyEdQgU1j];
                MQqPCvh6++;
            }
            aOofyEdQgU1j++;
        }
    }
    {
        aOofyEdQgU1j = (1186 - 903) - (804 - 522);
        while (aOofyEdQgU1j >= (776 - 775)) {
            for (bdAeQR = MQqPCvh6 -(147 - 146); bdAeQR > MQqPCvh6 -aOofyEdQgU1j - (690 - 689); bdAeQR--)
                if (rJPuNWzIYLG[bdAeQR].IMG96sO > rJPuNWzIYLG[bdAeQR - (681 - 680)].IMG96sO) {
                    dbZ3LTimIX8E = rJPuNWzIYLG[bdAeQR];
                    rJPuNWzIYLG[bdAeQR] = rJPuNWzIYLG[bdAeQR - (936 - 935)];
                    rJPuNWzIYLG[bdAeQR - (248 - 247)] = dbZ3LTimIX8E;
                }
            aOofyEdQgU1j--;
        }
    }
    for (aOofyEdQgU1j = (468 - 468); aOofyEdQgU1j < MQqPCvh6; aOofyEdQgU1j++)
        printf ("%s\n", rJPuNWzIYLG[aOofyEdQgU1j].bYfnr2Iyd7);
    for (aOofyEdQgU1j = (179 - 179); aOofyEdQgU1j < uKlrqyaEX; aOofyEdQgU1j++)
        if (aUZwY9Ql6[aOofyEdQgU1j].IMG96sO < (688 - 628))
            printf ("%s\n", aUZwY9Ql6[aOofyEdQgU1j].bYfnr2Iyd7);
}

