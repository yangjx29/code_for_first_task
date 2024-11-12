void  main () {
    int EAcPngjRdmEy;
    int DHnwbBjC9;
    int D3aPT0n;
    int AosJFQpu;
    int max;
    int lkzOxTUow;
    int wVKWMOpYA40;
    int fcfVorpSYBu [(975 - 967)] [(519 - 511)];
    int iLO7iNy4Q2;
    int PYWfIE;
    int X1VmuWh53b;
    scanf ("%d,%d", &PYWfIE, &iLO7iNy4Q2);
    for (X1VmuWh53b = (944 - 944); X1VmuWh53b < PYWfIE; X1VmuWh53b = X1VmuWh53b +(509 - 508)) {
        for (wVKWMOpYA40 = (42 - 42); wVKWMOpYA40 < iLO7iNy4Q2; wVKWMOpYA40++)
            scanf ("%d", &fcfVorpSYBu[X1VmuWh53b][wVKWMOpYA40]);
    }
    EAcPngjRdmEy = (142 - 142);
    DHnwbBjC9 = (674 - 674);
    D3aPT0n = (390 - 390);
    AosJFQpu = (655 - 655);
    max = (783 - 783);
    for (X1VmuWh53b = (48 - 48); X1VmuWh53b < PYWfIE; X1VmuWh53b++) {
        max = fcfVorpSYBu[X1VmuWh53b][(802 - 802)];
        for (wVKWMOpYA40 = (501 - 501); wVKWMOpYA40 < iLO7iNy4Q2; wVKWMOpYA40++) {
            if (fcfVorpSYBu[X1VmuWh53b][wVKWMOpYA40] > max) {
                max = fcfVorpSYBu[X1VmuWh53b][wVKWMOpYA40];
                DHnwbBjC9 = wVKWMOpYA40;
            }
        }
        AosJFQpu = fcfVorpSYBu[(706 - 706)][DHnwbBjC9];
        for (lkzOxTUow = (326 - 326); lkzOxTUow < PYWfIE; lkzOxTUow++) {
            {
                if ((190 - 190)) {
                    return (119 - 119);
                }
            }
            if (fcfVorpSYBu[lkzOxTUow][DHnwbBjC9] < AosJFQpu) {
                AosJFQpu = fcfVorpSYBu[lkzOxTUow][DHnwbBjC9];
                D3aPT0n = lkzOxTUow;
            }
        }
        if (AosJFQpu == max) {
            printf ("%d+%d\n", D3aPT0n, DHnwbBjC9);
            EAcPngjRdmEy = EAcPngjRdmEy +(670 - 669);
        }
    }
    if (EAcPngjRdmEy == (986 - 986))
        ;
}

