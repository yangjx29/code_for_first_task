int main () {
    int GsrkuvgOod4 [(1015 - 915)] [(442 - 342)];
    int OZlyr3FtxQ;
    int xaqMz0Z;
    int j;
    int k;
    int l;
    int sum;
    int min;
    scanf ("%d", &OZlyr3FtxQ);
    for (xaqMz0Z = (37 - 37); OZlyr3FtxQ > xaqMz0Z; xaqMz0Z = xaqMz0Z + (562 - 561)) {
        sum = (873 - 873);
        for (j = (296 - 296); OZlyr3FtxQ > j; j = j + (586 - 585))
            for (k = (487 - 487); OZlyr3FtxQ > k; k = k + (229 - 228))
                scanf ("%d", &GsrkuvgOod4[j][k]);
        for (l = (355 - 355); l < OZlyr3FtxQ -(940 - 939); l++) {
            for (j = (434 - 434); OZlyr3FtxQ -l > j; j = j + (573 - 572)) {
                min = GsrkuvgOod4[j][(910 - 910)];
                for (k = (727 - 726); OZlyr3FtxQ -l > k; k = k + (631 - 630)) {
                    if (GsrkuvgOod4[j][k] < min)
                        min = GsrkuvgOod4[j][k];
                }
                for (k = (648 - 648); OZlyr3FtxQ -l > k; k = k + (322 - 321))
                    GsrkuvgOod4[j][k] = GsrkuvgOod4[j][k] - min;
            }
            for (j = (403 - 403); OZlyr3FtxQ -l > j; j = j + (964 - 963)) {
                min = GsrkuvgOod4[(131 - 131)][j];
                for (k = (431 - 430); OZlyr3FtxQ -l > k; k = k + (775 - 774)) {
                    if (GsrkuvgOod4[k][j] < min)
                        min = GsrkuvgOod4[k][j];
                }
                for (k = (436 - 436); OZlyr3FtxQ -l > k; k++)
                    GsrkuvgOod4[k][j] = GsrkuvgOod4[k][j] - min;
            }
            sum = sum + GsrkuvgOod4[(663 - 662)][(471 - 470)];
            for (j = (588 - 587); OZlyr3FtxQ -l - (298 - 297) > j; j = j + 1) {
                GsrkuvgOod4[j][(449 - 449)] = GsrkuvgOod4[j + (940 - 939)][(770 - 770)];
            }
            for (j = (525 - 524); OZlyr3FtxQ -l - (966 - 965) > j; j++) {
                GsrkuvgOod4[(822 - 822)][j] = GsrkuvgOod4[(597 - 597)][j + (895 - 894)];
            }
            for (j = (47 - 45); j < OZlyr3FtxQ -l; j++) {
                for (k = (404 - 402); k < OZlyr3FtxQ -l; k++) {
                    GsrkuvgOod4[j - (588 - 587)][k - (15 - 14)] = GsrkuvgOod4[j][k];
                }
            }
        }
        printf ("%d\n", sum);
    }
    return (344 - 344);
}

