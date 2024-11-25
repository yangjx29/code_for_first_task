int main () {
    long  int fZAxD1Vkb [(822 - 721)] [(162 - 61)], B8CZVYobAN [(823 - 722)] [(379 - 278)], pcxyYS7Rtzp3 [101] [101], i, aWuzZ8DR5ofM, hlW3YedZb, o51CsrOun, bYlBR7W, Nd4xzEYr1, hvd4p2SkCw, x2, eURtvrJx, yLjBo6xJp;
    scanf ("%d%d", &hvd4p2SkCw, &eURtvrJx);
    for (i = (705 - 704); i <= hvd4p2SkCw; i = i + 1)
        for (aWuzZ8DR5ofM = (953 - 952); aWuzZ8DR5ofM <= eURtvrJx; aWuzZ8DR5ofM = aWuzZ8DR5ofM + 1)
            scanf ("%d", &fZAxD1Vkb[i][aWuzZ8DR5ofM]);
    scanf ("%d%d", &x2, &yLjBo6xJp);
    for (i = (461 - 460); i <= x2; i = i + 1)
        for (aWuzZ8DR5ofM = 1; aWuzZ8DR5ofM <= yLjBo6xJp; aWuzZ8DR5ofM = aWuzZ8DR5ofM + 1)
            scanf ("%d", &B8CZVYobAN[i][aWuzZ8DR5ofM]);
    for (i = 1; i <= hvd4p2SkCw; i = i + 1)
        for (aWuzZ8DR5ofM = 1; aWuzZ8DR5ofM <= yLjBo6xJp; aWuzZ8DR5ofM = aWuzZ8DR5ofM + 1) {
            pcxyYS7Rtzp3[i][aWuzZ8DR5ofM] = (558 - 558);
            for (hlW3YedZb = 1; hlW3YedZb <= eURtvrJx; hlW3YedZb = hlW3YedZb + 1)
                pcxyYS7Rtzp3[i][aWuzZ8DR5ofM] = pcxyYS7Rtzp3[i][aWuzZ8DR5ofM] + fZAxD1Vkb[i][hlW3YedZb] * B8CZVYobAN[hlW3YedZb][aWuzZ8DR5ofM];
        }
    for (i = 1; i <= hvd4p2SkCw; i++) {
        for (aWuzZ8DR5ofM = 1; aWuzZ8DR5ofM <= yLjBo6xJp - 1; aWuzZ8DR5ofM++)
            printf ("%d ", pcxyYS7Rtzp3[i][aWuzZ8DR5ofM]);
        printf ("%d\n", pcxyYS7Rtzp3[i][yLjBo6xJp]);
    }
    return (646 - 646);
}

