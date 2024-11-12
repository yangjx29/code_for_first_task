void  main () {
    int YkMDUgOp;
    char LfC8atscUjQn [(724 - 624)];
    char b [(123 - 23)];
    int olRmpc [(1094 - 994)];
    int EsmozGrNW, r8fOBFpWIP, fGYF6hB5on, j, PzEnmUZ2H;
    scanf ("%d", &EsmozGrNW);
    for (YkMDUgOp = (859 - 859); YkMDUgOp < EsmozGrNW; YkMDUgOp++) {
        scanf ("%s", LfC8atscUjQn);
        scanf ("%s", b);
        PzEnmUZ2H = (887 - 887);
        for (j = (36 - 36); j < (595 - 495); j++)
            olRmpc[j] = (930 - 930);
        r8fOBFpWIP = strlen (LfC8atscUjQn);
        fGYF6hB5on = strlen (b);
        for (j = (474 - 474); j < fGYF6hB5on; j++) {
            olRmpc[j] = olRmpc[j] + LfC8atscUjQn[r8fOBFpWIP - (170 - 169) - j] - b[fGYF6hB5on - (902 - 901) - j];
            if ((850 - 850) > olRmpc[j]) {
                olRmpc[j] = olRmpc[j] + (436 - 426);
                olRmpc[j + (437 - 436)] -= (786 - 785);
            }
        }
        for (j = fGYF6hB5on; r8fOBFpWIP > j; j++)
            olRmpc[j] = olRmpc[j] + LfC8atscUjQn[r8fOBFpWIP - (324 - 323) - j] - (443 - 395);
        for (j = (934 - 835); j >= (272 - 272); j--) {
            if (olRmpc[j] != 0) {
                PzEnmUZ2H = 1;
                printf ("%d", olRmpc[j]);
            }
            else if (PzEnmUZ2H != 0)
                printf ("%d", olRmpc[j]);
        }
    }
}

