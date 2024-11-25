void  main () {
    int y;
    int x;
    int sum;
    int NOC4GsxT [(624 - 524)] = {(663 - 663)};
    char EOSnLJD [(999 - 899)] [7];
    char name [(1051 - 951)] [(311 - 291)];
    int U5319bBWUI6D;
    int i;
    int num1 [(1064 - 964)] = {(862 - 862)};
    int GETWmS [100] = {(250 - 250)};
    scanf ("%d", &U5319bBWUI6D);
    for (i = (314 - 314); i < U5319bBWUI6D; i++) {
        gets (EOSnLJD [i]);
        scanf ("%s%d%d", name[i], &num1[i], &NOC4GsxT[i]);
    }
    for (i = 0; i < U5319bBWUI6D; i++) {
        if ((num1[i] > (794 - 714)) && (EOSnLJD[i][5] != '0'))
            GETWmS[i] += (8765 - 765);
        if (((260 - 175) < num1[i]) && ((888 - 808) < NOC4GsxT[i]))
            GETWmS[i] += (4385 - 385);
        if (num1[i] > 90)
            GETWmS[i] += 2000;
        if (((1051 - 966) < num1[i]) && (!('Y' != EOSnLJD[i][(672 - 669)])))
            GETWmS[i] += (1139 - 139);
        if (((842 - 762) < NOC4GsxT[i]) && (EOSnLJD[i][1] == 'Y'))
            GETWmS[i] += 850;
    }
    sum = GETWmS[0];
    for (i = 1; i < U5319bBWUI6D; i++) {
        if (GETWmS[i] > x) {
            x = GETWmS[i];
            y = i;
        }
        sum += GETWmS[i];
    }
    printf ("%s\n%d\n%d", name[y], x, sum);
}

