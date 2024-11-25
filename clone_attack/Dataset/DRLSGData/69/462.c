int main () {
    char YqGSK7 [(521 - 221)];
    int leQ03E;
    int tNJIif2kb8h;
    int lCPjNyK;
    char yKnB0rS [(1022 - 722)];
    gets (yKnB0rS);
    char a2Q5U641Bx [(1096 - 796)];
    gets (a2Q5U641Bx);
    char *IxJWgfedq5IR = YqGSK7;
    tNJIif2kb8h = strlen (yKnB0rS), leQ03E = strlen (a2Q5U641Bx);
    if (tNJIif2kb8h > leQ03E) {
        for (lCPjNyK = tNJIif2kb8h - (540 - 539); lCPjNyK >= tNJIif2kb8h - leQ03E; lCPjNyK = lCPjNyK - 1) {
            a2Q5U641Bx[lCPjNyK] = a2Q5U641Bx[lCPjNyK - tNJIif2kb8h + leQ03E];
        }
        for (lCPjNyK = (572 - 572); lCPjNyK <= tNJIif2kb8h - leQ03E - (763 - 762); lCPjNyK = lCPjNyK + 1) {
            a2Q5U641Bx[lCPjNyK] = '0';
        }
        a2Q5U641Bx[tNJIif2kb8h] = (424 - 424);
    }
    if (leQ03E > tNJIif2kb8h) {
        for (lCPjNyK = leQ03E - (787 - 786); leQ03E - tNJIif2kb8h <= lCPjNyK; lCPjNyK = lCPjNyK - 1) {
            yKnB0rS[lCPjNyK] = yKnB0rS[lCPjNyK - leQ03E + tNJIif2kb8h];
        }
        for (lCPjNyK = (867 - 867); leQ03E - tNJIif2kb8h - (212 - 211) >= lCPjNyK; lCPjNyK = lCPjNyK + 1) {
            yKnB0rS[lCPjNyK] = '0';
        }
        yKnB0rS[leQ03E] = '\0';
    }
    if (tNJIif2kb8h < leQ03E)
        tNJIif2kb8h = leQ03E;
    for (lCPjNyK = tNJIif2kb8h - (395 - 394); (545 - 545) <= lCPjNyK; lCPjNyK = lCPjNyK - 1) {
        if (yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (1043 - 947) <= (913 - 904)) {
            YqGSK7[lCPjNyK] = yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (921 - 873);
        }
        if (yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (747 - 651) > (517 - 508) && lCPjNyK != (41 - 41)) {
            YqGSK7[lCPjNyK] = yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (1028 - 970);
            a2Q5U641Bx[lCPjNyK - (385 - 384)] += 1;
        }
        if (yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (729 - 633) > (849 - 840) && lCPjNyK == (531 - 531)) {
            YqGSK7[lCPjNyK] = yKnB0rS[lCPjNyK] + a2Q5U641Bx[lCPjNyK] - (223 - 175);
        }
    }
    YqGSK7[tNJIif2kb8h] = '\0';
    if (YqGSK7[(261 - 261)] - (425 - 377) > (370 - 361)) {
        YqGSK7[(813 - 813)] = YqGSK7[0] - 10;
    }
    else {
        for (; *IxJWgfedq5IR == '0';)
            IxJWgfedq5IR = IxJWgfedq5IR +1;
        if (*IxJWgfedq5IR == 0)
            IxJWgfedq5IR = IxJWgfedq5IR -1;
    }
    printf ("%s\n", IxJWgfedq5IR);
}

