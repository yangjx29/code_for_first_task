void  main () {
    char Y1GJF58tR [11], TKiLP6pEk [4];
    for (; scanf ("%s %s", Y1GJF58tR, TKiLP6pEk) != EOF;) {
        int zJAOamZP8oE, RqP2wTRC = 0;
        int p = strlen (TKiLP6pEk);
        char y4QU0pbE = Y1GJF58tR[0];
        int JrTBpqX = strlen (Y1GJF58tR);
        for (zJAOamZP8oE = 1; Y1GJF58tR[zJAOamZP8oE] != '\0'; zJAOamZP8oE = zJAOamZP8oE + 1)
            if (y4QU0pbE < Y1GJF58tR[zJAOamZP8oE]) {
                y4QU0pbE = Y1GJF58tR[zJAOamZP8oE];
                RqP2wTRC = zJAOamZP8oE;
            }
        for (zJAOamZP8oE = 0; RqP2wTRC >= zJAOamZP8oE; zJAOamZP8oE = zJAOamZP8oE + 1)
            printf ("%c", Y1GJF58tR[zJAOamZP8oE]);
        for (zJAOamZP8oE = 0; p > zJAOamZP8oE; zJAOamZP8oE++)
            printf ("%c", TKiLP6pEk[zJAOamZP8oE]);
        for (zJAOamZP8oE = RqP2wTRC +1; JrTBpqX > zJAOamZP8oE; zJAOamZP8oE++)
            printf ("%c", Y1GJF58tR[zJAOamZP8oE]);
    }
}

