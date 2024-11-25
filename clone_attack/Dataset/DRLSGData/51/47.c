int main () {
    char FsK1I23MHJ [5], Wd0E4wmNV [500];
    gets (Wd0E4wmNV);
    int jCIvlP, vTRSnLv, gX1lJ0g, mHufZisPh, KTfItjiWh, WKJmtkCL76V [500] = {0}, p, apVJZ1yQbd = 0;
    KTfItjiWh = strlen (Wd0E4wmNV);
    scanf ("%d\n", &jCIvlP);
    for (vTRSnLv = 0; vTRSnLv < KTfItjiWh -jCIvlP + 1; vTRSnLv++) {
        for (gX1lJ0g = 0; gX1lJ0g < jCIvlP; gX1lJ0g++)
            FsK1I23MHJ[gX1lJ0g] = Wd0E4wmNV[vTRSnLv + gX1lJ0g];
        for (gX1lJ0g = vTRSnLv; gX1lJ0g < KTfItjiWh -jCIvlP + 1; gX1lJ0g++) {
            p = 0;
            for (mHufZisPh = 0; mHufZisPh < jCIvlP; mHufZisPh++)
                if (FsK1I23MHJ[mHufZisPh] == Wd0E4wmNV[gX1lJ0g + mHufZisPh])
                    p = 1;
                else {
                    p = 0;
                    break;
                }
            if (p)
                WKJmtkCL76V[vTRSnLv]++;
        }
    }
    for (vTRSnLv = 0; vTRSnLv < KTfItjiWh -jCIvlP + 1; vTRSnLv++)
        if (WKJmtkCL76V[vTRSnLv] > apVJZ1yQbd)
            apVJZ1yQbd = WKJmtkCL76V[vTRSnLv];
    if (apVJZ1yQbd == 1)
        ;
    else {
        printf ("%d\n", apVJZ1yQbd);
        for (vTRSnLv = 0; vTRSnLv < KTfItjiWh -jCIvlP + 1; vTRSnLv++)
            if (WKJmtkCL76V[vTRSnLv] == apVJZ1yQbd) {
                for (gX1lJ0g = 0; gX1lJ0g < jCIvlP; gX1lJ0g++)
                    printf ("%c", Wd0E4wmNV[vTRSnLv + gX1lJ0g]);
            }
    }
    return 0;
}

