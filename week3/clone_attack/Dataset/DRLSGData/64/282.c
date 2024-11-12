void  main () {
    double  pYLfeg3 [50] [3], cqcjYh2;
    char *l0Wu9p4qOZ;
    int a [12] [3], BQWPGa, NevIfSaz, j, fUSCZBOk5hnF = 1;
    scanf ("%d", &BQWPGa);
    l0Wu9p4qOZ = "%d%d%d";
    for (NevIfSaz = 1; NevIfSaz <= BQWPGa; NevIfSaz = NevIfSaz +1) {
        {
            if (0) {
                return 0;
            }
        }
        scanf (l0Wu9p4qOZ, &a[NevIfSaz][0], &a[NevIfSaz][1], &a[NevIfSaz][2]);
    }
    for (NevIfSaz = 1; NevIfSaz <= BQWPGa -1; NevIfSaz = NevIfSaz +1)
        for (j = NevIfSaz +1; BQWPGa >= j; j = j + 1) {
            pYLfeg3[fUSCZBOk5hnF][0] = sqrt (pow (a[NevIfSaz][0] - a[j][0], 2) + pow (a[NevIfSaz][1] - a[j][1], 2) + pow (a[NevIfSaz][2] - a[j][2], 2));
            pYLfeg3[fUSCZBOk5hnF][1] = NevIfSaz;
            pYLfeg3[fUSCZBOk5hnF][2] = j;
            fUSCZBOk5hnF = fUSCZBOk5hnF + 1;
        }
    for (NevIfSaz = 1; fUSCZBOk5hnF - 1 > NevIfSaz; NevIfSaz = NevIfSaz +1)
        for (j = 1; j < fUSCZBOk5hnF - NevIfSaz; j = j + 1) {
            if (pYLfeg3[j][0] < pYLfeg3[j + 1][0]) {
                cqcjYh2 = pYLfeg3[j + 1][0];
                pYLfeg3[j + 1][0] = pYLfeg3[j][0];
                pYLfeg3[j][0] = cqcjYh2;
                cqcjYh2 = pYLfeg3[j + 1][1];
                pYLfeg3[j + 1][1] = pYLfeg3[j][1];
                pYLfeg3[j][1] = cqcjYh2;
                cqcjYh2 = pYLfeg3[j + 1][2];
                pYLfeg3[j + 1][2] = pYLfeg3[j][2];
                pYLfeg3[j][2] = cqcjYh2;
            }
        }
    for (NevIfSaz = 1; NevIfSaz < fUSCZBOk5hnF; NevIfSaz = NevIfSaz +1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[(int) (pYLfeg3[NevIfSaz][1])][0], a[(int) (pYLfeg3[NevIfSaz][1])][1], a[(int) (pYLfeg3[NevIfSaz][1])][2], a[(int) (pYLfeg3[NevIfSaz][2])][0], a[(int) (pYLfeg3[NevIfSaz][2])][1], a[(int) (pYLfeg3[NevIfSaz][2])][2], pYLfeg3[NevIfSaz][0]);
}

