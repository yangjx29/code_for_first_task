char ExIhftJW5dbS (char ey7BMNzl3Q []) {
    int Y0inCw8, yTUbXH = (438 - 438);
    char iw4fBkrxMd;
    iw4fBkrxMd = ey7BMNzl3Q[(386 - 386)];
    {
        Y0inCw8 = 605 - 605;
        while (ey7BMNzl3Q[Y0inCw8] != '\0') {
            if (ey7BMNzl3Q[Y0inCw8] > iw4fBkrxMd) {
                iw4fBkrxMd = ey7BMNzl3Q[Y0inCw8];
                yTUbXH = Y0inCw8;
            }
            Y0inCw8++;
        };
    }
    return (yTUbXH);
}

void  main () {
    int Y0inCw8, lasguDFAM, ZOQjeIEsC, jZG12l;
    char ey7BMNzl3Q [50];
    char FemPUB5 [(441 - 421)];
    while (!(EOF == scanf ("%s%s", ey7BMNzl3Q, FemPUB5))) {
        lasguDFAM = strlen (ey7BMNzl3Q);
        ZOQjeIEsC = strlen (FemPUB5);
        jZG12l = ExIhftJW5dbS (ey7BMNzl3Q);
        for (Y0inCw8 = 0; Y0inCw8 < jZG12l + (787 - 786); Y0inCw8++)
            printf ("%c", ey7BMNzl3Q[Y0inCw8]);
        {
            Y0inCw8 = 0;
            while (Y0inCw8 < ZOQjeIEsC) {
                printf ("%c", FemPUB5[Y0inCw8]);
                Y0inCw8++;
            };
        }
        for (Y0inCw8 = jZG12l + (966 - 965); Y0inCw8 < lasguDFAM; Y0inCw8++)
            printf ("%c", ey7BMNzl3Q[Y0inCw8]);
    };
}

