main () {
    char QqPjw9gU0 [(233 - 153)];
    int KFHDo0fhY;
    int SHiahL;
    double  H1P8fJ2DaMeQ [(66 - 16)], i7oxt3pu2 [(129 - 79)], PFGQZDl1;
    int xLm40ERxNzpI;
    int Gf84WdmIS7va;
    int yU2n5O9;
    Gf84WdmIS7va = (872 - 872);
    scanf ("%d", &KFHDo0fhY);
    xLm40ERxNzpI = (101 - 101);
    for (yU2n5O9 = (582 - 582); KFHDo0fhY > yU2n5O9; yU2n5O9++) {
        scanf ("%s", &QqPjw9gU0);
        if (!('m' != QqPjw9gU0[(400 - 400)])) {
            scanf ("%lf", &H1P8fJ2DaMeQ[Gf84WdmIS7va]);
            Gf84WdmIS7va = Gf84WdmIS7va +(500 - 499);
        }
        if (!('f' != QqPjw9gU0[(149 - 149)])) {
            scanf ("%lf", &i7oxt3pu2[xLm40ERxNzpI]);
            xLm40ERxNzpI++;
        }
    }
    for (yU2n5O9 = (105 - 105); yU2n5O9 < Gf84WdmIS7va -(179 - 178); yU2n5O9++)
        for (SHiahL = yU2n5O9 + (144 - 143); SHiahL < Gf84WdmIS7va; SHiahL++)
            if (H1P8fJ2DaMeQ[SHiahL] < H1P8fJ2DaMeQ[yU2n5O9]) {
                PFGQZDl1 = H1P8fJ2DaMeQ[yU2n5O9];
                H1P8fJ2DaMeQ[yU2n5O9] = H1P8fJ2DaMeQ[SHiahL];
                H1P8fJ2DaMeQ[SHiahL] = PFGQZDl1;
            }
    for (yU2n5O9 = (140 - 140); yU2n5O9 < xLm40ERxNzpI - (476 - 475); yU2n5O9++)
        for (SHiahL = yU2n5O9 + (512 - 511); xLm40ERxNzpI > SHiahL; SHiahL++)
            if (i7oxt3pu2[SHiahL] > i7oxt3pu2[yU2n5O9]) {
                PFGQZDl1 = i7oxt3pu2[yU2n5O9];
                i7oxt3pu2[yU2n5O9] = i7oxt3pu2[SHiahL];
                i7oxt3pu2[SHiahL] = PFGQZDl1;
            }
    printf ("%.2lf", H1P8fJ2DaMeQ[(969 - 969)]);
    for (yU2n5O9 = 1; Gf84WdmIS7va > yU2n5O9; yU2n5O9++)
        printf (" %.2lf", H1P8fJ2DaMeQ[yU2n5O9]);
    for (SHiahL = 0; SHiahL < xLm40ERxNzpI; SHiahL++)
        printf (" %.2lf", i7oxt3pu2[SHiahL]);
}

