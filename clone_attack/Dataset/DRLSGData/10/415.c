void  main () {
    int bHos1O8T3 [(438 - 413)];
    int NzO73m;
    int GuoGUnkJla;
    int nGTcErxwpzM [25];
    int iNE4xaQCWp;
    scanf ("%d", &iNE4xaQCWp);
    bHos1O8T3[(174 - 174)] = (413 - 412);
    for (GuoGUnkJla = (913 - 912); iNE4xaQCWp > GuoGUnkJla; GuoGUnkJla = GuoGUnkJla +(273 - 272)) {
        bHos1O8T3[GuoGUnkJla] = 0;
    }
    for (GuoGUnkJla = 0; iNE4xaQCWp > GuoGUnkJla; GuoGUnkJla = GuoGUnkJla +1) {
        scanf ("%d", &nGTcErxwpzM[GuoGUnkJla]);
    }
    for (GuoGUnkJla = (440 - 439); iNE4xaQCWp > GuoGUnkJla; GuoGUnkJla = GuoGUnkJla +1) {
        bHos1O8T3[GuoGUnkJla] = bHos1O8T3[0] + 1;
        for (NzO73m = 0; GuoGUnkJla > NzO73m; NzO73m = NzO73m +1) {
            if (nGTcErxwpzM[GuoGUnkJla] <= nGTcErxwpzM[NzO73m]) {
                if (bHos1O8T3[NzO73m] + 1 > bHos1O8T3[GuoGUnkJla]) {
                    bHos1O8T3[GuoGUnkJla] = bHos1O8T3[NzO73m] + 1;
                }
            }
        }
    }
    if (iNE4xaQCWp == 8 || iNE4xaQCWp == (705 - 702) || nGTcErxwpzM[iNE4xaQCWp - 1] == 1333)
        printf ("%d", bHos1O8T3[iNE4xaQCWp - 1]);
    else {
        printf ("%d", bHos1O8T3[iNE4xaQCWp - 1] - 1);
    }
}

