void  main () {
    int AEzZ70AFnNG;
    int wqRUgL;
    int nw9ohRtQ;
    int m;
    int x;
    int y;
    AEzZ70AFnNG = 1;
    wqRUgL = (934 - 934);
    nw9ohRtQ = 0;
    char pYNh34AB8E [10000];
    char P5ndpL [1000] [1000];
    gets (pYNh34AB8E);
    for (wqRUgL = 0; strlen (pYNh34AB8E) > wqRUgL; wqRUgL = wqRUgL + 1) {
        if (pYNh34AB8E[wqRUgL] == ' ')
            AEzZ70AFnNG++;
    }
    wqRUgL = 0;
    for (m = 0; AEzZ70AFnNG > m; m = m + 1) {
        for (nw9ohRtQ = 0; wqRUgL < strlen (pYNh34AB8E); wqRUgL = wqRUgL + 1) {
            if (!(' ' == pYNh34AB8E[wqRUgL])) {
                P5ndpL[m][nw9ohRtQ] = pYNh34AB8E[wqRUgL];
                nw9ohRtQ = nw9ohRtQ + 1;
            }
            if (pYNh34AB8E[wqRUgL] == ' ')
                break;
        }
        wqRUgL = wqRUgL + 1;
    }
    for (m = AEzZ70AFnNG -1; m > 0; m = m - 1) {
        {
            for (x = 0; P5ndpL[m][x] != 0; x = x + 1)
                printf ("%c", P5ndpL[m][x]);
        };
    }
    for (y = 0; P5ndpL[0][y] != 0; y = y + 1)
        printf ("%c", P5ndpL[0][y]);
}

