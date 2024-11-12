void  main () {
    char uDQv3Ep2FfT [500];
    int codVEzfX;
    int i;
    char FxuOhC0aQ [500] [5];
    int ZYpGsb6zA;
    int qtCSiQU;
    int DCTaemRO [500];
    int cnIkyq;
    int y;
    int c20HnesY;
    scanf ("%d", &c20HnesY);
    ZYpGsb6zA = 0;
    scanf ("%s", uDQv3Ep2FfT);
    codVEzfX = strlen (uDQv3Ep2FfT);
    for (i = 0; i <= codVEzfX - c20HnesY; i = i + 1) {
        for (cnIkyq = 0; cnIkyq < c20HnesY; cnIkyq = cnIkyq + 1) {
            FxuOhC0aQ[i][cnIkyq] = uDQv3Ep2FfT[ZYpGsb6zA];
            ZYpGsb6zA = ZYpGsb6zA +1;
        }
        ZYpGsb6zA = ZYpGsb6zA -c20HnesY + 1;
    }
    for (i = 0; i <= codVEzfX - c20HnesY; i = i + 1) {
        DCTaemRO[i] = 1;
        for (cnIkyq = i + 1; cnIkyq <= codVEzfX - c20HnesY; cnIkyq = cnIkyq + 1) {
            if (strcmp (FxuOhC0aQ[i], FxuOhC0aQ[cnIkyq]) == 0) {
                DCTaemRO[i]++;
            }
        }
    }
    qtCSiQU = DCTaemRO[0];
    for (i = 0; i <= codVEzfX - c20HnesY; i = i + 1) {
        if (DCTaemRO[i] > qtCSiQU)
            qtCSiQU = DCTaemRO[i];
    }
    y = 0;
    for (i = 0; i <= codVEzfX - c20HnesY; i = i + 1) {
        if (DCTaemRO[i] == qtCSiQU)
            y = y + 1;
    }
    if (qtCSiQU > 1) {
        printf ("%d\n", qtCSiQU);
        for (i = 0; i <= codVEzfX - c20HnesY; i++) {
            if (DCTaemRO[i] == qtCSiQU) {
                printf ("%s\n", FxuOhC0aQ[i]);
            }
        }
    }
    else
        ;
}

