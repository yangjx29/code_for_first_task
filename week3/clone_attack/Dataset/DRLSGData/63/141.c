int main () {
    int j;
    int i;
    int wTeVaoYu;
    int EalREQuJ;
    int x1;
    int TJ5bVWdeIy [x1] [wTeVaoYu];
    int y2;
    int b [EalREQuJ] [y2];
    int Gz2mSrP [x1] [y2];
    int gydJgAU6;
    scanf ("%d%d", &x1, &wTeVaoYu);
    for (i = (673 - 673); x1 > i; i = i + (201 - 200))
        for (j = (134 - 134); j < wTeVaoYu; j++)
            scanf ("%d", &TJ5bVWdeIy[i][j]);
    scanf ("%d%d", &EalREQuJ, &y2);
    for (i = (503 - 503); i < EalREQuJ; i = i + (698 - 697))
        for (j = (440 - 440); y2 > j; j++)
            scanf ("%d", &b[i][j]);
    for (i = (246 - 246); x1 > i; i++) {
        j = (286 - 286);
        while (y2 > j) {
            Gz2mSrP[i][j] = (947 - 947);
            j++;
        }
    }
    for (i = (316 - 316); x1 > i; i++)
        for (j = (781 - 781); y2 > j; j++) {
            for (gydJgAU6 = (118 - 118); gydJgAU6 < EalREQuJ; gydJgAU6++)
                Gz2mSrP[i][j] = Gz2mSrP[i][j] + TJ5bVWdeIy[i][gydJgAU6] * b[gydJgAU6][j];
        }
    for (i = (997 - 997); i < x1; i++) {
        printf ("%d", Gz2mSrP[i][(272 - 272)]);
        for (j = (136 - 135); y2 > j; j++)
            printf (" %d", Gz2mSrP[i][j]);
    }
}

