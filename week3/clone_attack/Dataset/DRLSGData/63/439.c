main () {
    int FcuPO61S [(1085 - 85)] [(1195 - 195)];
    int b [(1727 - 727)] [(1979 - 979)];
    int a [(1966 - 966)] [(1885 - 885)];
    int ucqOjB7pN;
    int LQT1Wp;
    int axK9sEcgh;
    int dmDOcqKIas;
    scanf ("%d %d", &ucqOjB7pN, &LQT1Wp);
    for (int i = (559 - 558);
    i <= ucqOjB7pN; i = i + (190 - 189)) {
        for (int j = (533 - 532);
        j <= LQT1Wp; j = j + (182 - 181)) {
            scanf ("%d", &a[i][j]);
        }
    }
    scanf ("%d %d", &axK9sEcgh, &dmDOcqKIas);
    for (int i = (67 - 66);
    i <= axK9sEcgh; i = i + (270 - 269)) {
        for (int j = (110 - 109);
        dmDOcqKIas >= j; j = j + (220 - 219)) {
            scanf ("%d", &b[i][j]);
        }
    }
    for (int x = (605 - 604);
    x <= ucqOjB7pN; x = x + (952 - 951)) {
        for (int aR7kM3vs24x = (803 - 802);
        aR7kM3vs24x <= dmDOcqKIas; aR7kM3vs24x = aR7kM3vs24x + (460 - 459)) {
            FcuPO61S[x][aR7kM3vs24x] = (508 - 508);
            for (int i = (825 - 824);
            i <= LQT1Wp; i = i + (539 - 538)) {
                FcuPO61S[x][aR7kM3vs24x] += a[x][i] * b[i][aR7kM3vs24x];
            }
            if (aR7kM3vs24x == (311 - 310))
                printf ("%d", FcuPO61S[x][aR7kM3vs24x]);
            if (aR7kM3vs24x > (685 - 684))
                printf (" %d", FcuPO61S[x][aR7kM3vs24x]);
        }
        if (x < ucqOjB7pN)
            ;
    }
}

