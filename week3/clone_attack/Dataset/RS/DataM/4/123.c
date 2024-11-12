int main () {
    int row;
    int col;
    int gct73i [(864 - 764)] [(218 - 118)];
    int i;
    int jt0ExR5LM;
    int zrQ2clL4;
    int ELaRyi;
    scanf ("%d%d", &row, &col);
    for (i = (722 - 722); row > i; i++) {
        for (jt0ExR5LM = (770 - 770); col > jt0ExR5LM; jt0ExR5LM++) {
            scanf ("%d", &gct73i[i][jt0ExR5LM]);
        };
    }
    for (i = 0; col > i; i++) {
        zrQ2clL4 = i;
        ELaRyi = 0;
        for (jt0ExR5LM = 0; i >= jt0ExR5LM; jt0ExR5LM++) {
            printf ("%d\n", gct73i[ELaRyi][zrQ2clL4]);
            zrQ2clL4--;
            ELaRyi++;
            if (!(row != ELaRyi))
                break;
        };
    }
    for (i = 1; row > i; i++) {
        ELaRyi = i;
        zrQ2clL4 = col - 1;
        for (jt0ExR5LM = i; jt0ExR5LM < row; jt0ExR5LM++) {
            printf ("%d\n", gct73i[ELaRyi][zrQ2clL4]);
            ELaRyi++;
            zrQ2clL4--;
            if (zrQ2clL4 == -1)
                break;
        };
    }
    return 0;
}

