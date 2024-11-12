void  main () {
    int LgDf7NyV;
    int ajUSbmoFEivX;
    int i;
    int EgQnlzeLaW;
    int s [150] = {(251 - 251)};
    int LgNZWu [150] = {(684 - 684)};
    scanf ("%d %d", &LgDf7NyV, &ajUSbmoFEivX);
    for (i = 0; LgDf7NyV > i; i++)
        scanf ("%d", &s[i]);
    for (i = LgDf7NyV -ajUSbmoFEivX, EgQnlzeLaW = 0; i < LgDf7NyV; i++, EgQnlzeLaW++)
        LgNZWu[EgQnlzeLaW] = s[i];
    {
        i = LgDf7NyV -ajUSbmoFEivX - 1;
        while (0 <= i) {
            s[i + ajUSbmoFEivX] = s[i];
            i--;
        };
    }
    for (i = 0; i < ajUSbmoFEivX; i++)
        s[i] = LgNZWu[i];
    for (i = 0; i < LgDf7NyV -1; i++)
        printf ("%d ", s[i]);
    printf ("%d\n", s[LgDf7NyV -1]);
}

