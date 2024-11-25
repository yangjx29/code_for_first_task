main () {
    int ionGrN;
    int yRrv415h;
    char **LteDg823du6 = (char **) malloc ((2 * yRrv415h) * sizeof (char *));
    free (LteDg823du6);
    int pBCZIx61Ly;
    int YDcUVYtemQ;
    int l2;
    scanf ("%d", &yRrv415h);
    for (ionGrN = 0; 2 * yRrv415h > ionGrN; ionGrN = ionGrN + 1)
        LteDg823du6[ionGrN] = (char *) malloc (100 * sizeof (char));
    for (ionGrN = 0; 2 * yRrv415h > ionGrN; ionGrN++)
        scanf ("%s", LteDg823du6[ionGrN]);
    for (ionGrN = 0; ionGrN < 2 * yRrv415h; ionGrN = ionGrN + 2) {
        pBCZIx61Ly = strlen (LteDg823du6[ionGrN]);
        l2 = strlen (LteDg823du6[ionGrN + 1]);
        for (YDcUVYtemQ = 0; YDcUVYtemQ < l2; YDcUVYtemQ++) {
            LteDg823du6[ionGrN + 1][pBCZIx61Ly - YDcUVYtemQ -1] = LteDg823du6[ionGrN + 1][l2 - YDcUVYtemQ -1];
        }
        for (YDcUVYtemQ = 0; YDcUVYtemQ < pBCZIx61Ly - l2; YDcUVYtemQ++) {
            LteDg823du6[ionGrN + 1][YDcUVYtemQ] = '0';
        }
        for (YDcUVYtemQ = pBCZIx61Ly - 1; pBCZIx61Ly - l2 - 1 < YDcUVYtemQ; YDcUVYtemQ = YDcUVYtemQ -1) {
            if (LteDg823du6[ionGrN][YDcUVYtemQ] - LteDg823du6[ionGrN + 1][YDcUVYtemQ] < 0) {
                LteDg823du6[ionGrN][YDcUVYtemQ -1] = LteDg823du6[ionGrN][YDcUVYtemQ -1] - 1;
                LteDg823du6[ionGrN][YDcUVYtemQ] = '0' + LteDg823du6[ionGrN][YDcUVYtemQ] - LteDg823du6[ionGrN + 1][YDcUVYtemQ] + 10;
            }
            else {
                LteDg823du6[ionGrN][YDcUVYtemQ] = '0' + LteDg823du6[ionGrN][YDcUVYtemQ] - LteDg823du6[ionGrN + 1][YDcUVYtemQ];
            }
        }
        printf ("%s\n", LteDg823du6[ionGrN]);
    }
    for (ionGrN = 0; ionGrN < 2 * yRrv415h; ionGrN++)
        free (LteDg823du6[ionGrN]);
}

