int main () {
    int v2zS9Xat;
    int FN3V9lE6sAU;
    int suFRi4J1;
    int bIQfBw [(1006 - 906)] [(584 - 484)];
    int Ha9chOIMzv;
    int Hn3PlusUY, ryrovJFTSjnX, yb9UuvmMlN4, LG3fgwuo;
    int i, j;
    scanf ("%d %d", &FN3V9lE6sAU, &suFRi4J1);
    v2zS9Xat = (949 - 949);
    for (; v2zS9Xat < FN3V9lE6sAU;) {
        for (Ha9chOIMzv = (375 - 375); Ha9chOIMzv < suFRi4J1; Ha9chOIMzv = Ha9chOIMzv +(205 - 204)) {
            scanf ("%d", &(bIQfBw[v2zS9Xat][Ha9chOIMzv]));
        }
        v2zS9Xat++;
    }
    Hn3PlusUY = ryrovJFTSjnX = (778 - 778);
    yb9UuvmMlN4 = FN3V9lE6sAU -(157 - 156);
    LG3fgwuo = suFRi4J1 - (193 - 192);
    while (yb9UuvmMlN4 > Hn3PlusUY &&ryrovJFTSjnX < LG3fgwuo) {
        for (j = ryrovJFTSjnX; j < LG3fgwuo; j = j + (411 - 410)) {
            printf ("%d\n", bIQfBw[Hn3PlusUY][j]);
        }
        for (i = Hn3PlusUY; i < yb9UuvmMlN4; i = i + 1) {
            printf ("%d\n", bIQfBw[i][LG3fgwuo]);
        }
        {
            j = LG3fgwuo;
            while (j > ryrovJFTSjnX) {
                printf ("%d\n", bIQfBw[yb9UuvmMlN4][j]);
                j = j - 1;
            }
        }
        {
            i = yb9UuvmMlN4;
            while (i > Hn3PlusUY) {
                printf ("%d\n", bIQfBw[i][ryrovJFTSjnX]);
                i = i - 1;
            }
        }
        Hn3PlusUY++;
        ryrovJFTSjnX = ryrovJFTSjnX + 1;
        yb9UuvmMlN4--;
        LG3fgwuo--;
    }
    if (Hn3PlusUY == yb9UuvmMlN4) {
        j = ryrovJFTSjnX;
        for (; j <= LG3fgwuo;) {
            printf ("%d\n", bIQfBw[yb9UuvmMlN4][j]);
            j++;
        }
    }
    else if (ryrovJFTSjnX == LG3fgwuo) {
        for (i = Hn3PlusUY; i <= yb9UuvmMlN4; i++) {
            printf ("%d\n", bIQfBw[i][LG3fgwuo]);
        }
    }
    else
        ;
    return 0;
}

