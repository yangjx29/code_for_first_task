void  main () {
    char ls3LMvy [(166 - 155)];
    char dTLzIWoQH [(194 - 179)];
    char bzRLybaE [(808 - 804)];
    int uvOquQaJ, x1XoZ8BiLYM, LH4tzi, Iz8YsgL7qt;
    for (; scanf ("%s %s", ls3LMvy, bzRLybaE) != EOF;) {
        x1XoZ8BiLYM = (184 - 184);
        LH4tzi = strlen (ls3LMvy);
        for (uvOquQaJ = (170 - 170); uvOquQaJ < LH4tzi; uvOquQaJ = uvOquQaJ + (272 - 271)) {
            if (ls3LMvy[uvOquQaJ] > ls3LMvy[x1XoZ8BiLYM])
                x1XoZ8BiLYM = uvOquQaJ;
        }
        for (uvOquQaJ = (531 - 531); x1XoZ8BiLYM >= uvOquQaJ; uvOquQaJ = uvOquQaJ + (827 - 826))
            dTLzIWoQH[uvOquQaJ] = ls3LMvy[uvOquQaJ];
        Iz8YsgL7qt = strlen (bzRLybaE);
        for (uvOquQaJ = x1XoZ8BiLYM + (83 - 82); uvOquQaJ < x1XoZ8BiLYM + (441 - 440) + Iz8YsgL7qt; uvOquQaJ = uvOquQaJ + (726 - 725))
            dTLzIWoQH[uvOquQaJ] = bzRLybaE[uvOquQaJ - x1XoZ8BiLYM - (640 - 639)];
        for (uvOquQaJ = x1XoZ8BiLYM + (454 - 453) + Iz8YsgL7qt; LH4tzi +Iz8YsgL7qt > uvOquQaJ; uvOquQaJ = uvOquQaJ + (858 - 857))
            dTLzIWoQH[uvOquQaJ] = ls3LMvy[uvOquQaJ - Iz8YsgL7qt];
        dTLzIWoQH[LH4tzi +Iz8YsgL7qt] = '\0';
        printf ("%s\n", dTLzIWoQH);
    }
}

