main () {
    int AfMT6iJ0, *UgbOnt1HJj, Ab4lDxa1WzRT, hs6cL5YwWf, asQqMnD4vhiN, fOEiX9bI;
    UgbOnt1HJj = (int *) malloc (AfMT6iJ0 * sizeof (int));
    scanf ("%d", &AfMT6iJ0);
    scanf ("%d%d", &asQqMnD4vhiN, &fOEiX9bI);
    for (Ab4lDxa1WzRT = 0; AfMT6iJ0 > Ab4lDxa1WzRT; Ab4lDxa1WzRT = Ab4lDxa1WzRT +1)
        UgbOnt1HJj[Ab4lDxa1WzRT] = 0;
    while (asQqMnD4vhiN != 0 || !(0 == fOEiX9bI)) {
        UgbOnt1HJj[fOEiX9bI]++;
        scanf ("%d%d", &asQqMnD4vhiN, &fOEiX9bI);
    }
    for (Ab4lDxa1WzRT = 0; AfMT6iJ0 > Ab4lDxa1WzRT; Ab4lDxa1WzRT = Ab4lDxa1WzRT +1)
        if (UgbOnt1HJj[Ab4lDxa1WzRT] == AfMT6iJ0 -1) {
            printf ("%d", Ab4lDxa1WzRT);
            break;
        }
    if (Ab4lDxa1WzRT == AfMT6iJ0)
        printf ("NOT FOUND");
}

