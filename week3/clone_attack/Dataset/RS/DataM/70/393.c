void  main () {
    int vSpMeWTyZgoN;
    int q9zOK8Ti30;
    int i;
    int xvGn5fF;
    vSpMeWTyZgoN = (414 - 414);
    double  uoW9sndz5fX [100] [2], b [100], mINBFvbcG;
    scanf ("%d", &q9zOK8Ti30);
    {
        i = 0;
        while (q9zOK8Ti30 > i) {
            scanf ("%lf%lf", &uoW9sndz5fX[i][0], &uoW9sndz5fX[i][(920 - 919)]);
            i++;
        };
    }
    for (i = 0; q9zOK8Ti30 - 1 > i; i = i + 1) {
        for (xvGn5fF = 1; q9zOK8Ti30 > xvGn5fF; xvGn5fF = xvGn5fF + 1) {
            b[vSpMeWTyZgoN] = sqrt ((uoW9sndz5fX[i][0] - uoW9sndz5fX[xvGn5fF][0]) * (uoW9sndz5fX[i][0] - uoW9sndz5fX[xvGn5fF][0]) + (uoW9sndz5fX[i][1] - uoW9sndz5fX[xvGn5fF][1]) * (uoW9sndz5fX[i][1] - uoW9sndz5fX[xvGn5fF][1]));
            vSpMeWTyZgoN++;
        };
    }
    for (i = 0; vSpMeWTyZgoN - 1 > i; i++) {
        if (b[i] > b[i + 1]) {
            mINBFvbcG = b[i];
            b[i] = b[i + 1];
            b[i + 1] = mINBFvbcG;
        };
    }
    printf ("%.4f\n", b[vSpMeWTyZgoN - 1]);
}

