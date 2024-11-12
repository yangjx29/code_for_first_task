void  main () {
    char GJnrU9Z [10000] [100];
    int MwtQiBsNgVM;
    char yIFQ2m0Hr8L;
    char gfv2JiuYZK0p [10000] [100];
    int ODBu7ohmzS;
    int Un3PpKgDtc;
    int tOcyRstS;
    int i;
    i = 0;
    for (; scanf ("%s", &gfv2JiuYZK0p[i]) != EOF;) {
        Un3PpKgDtc = 0;
        scanf ("%s", &GJnrU9Z[i]);
        yIFQ2m0Hr8L = gfv2JiuYZK0p[i][0];
        {
            MwtQiBsNgVM = 1;
            while (MwtQiBsNgVM <= strlen (gfv2JiuYZK0p[i]) - 1) {
                if (gfv2JiuYZK0p[i][MwtQiBsNgVM] > yIFQ2m0Hr8L) {
                    yIFQ2m0Hr8L = gfv2JiuYZK0p[i][MwtQiBsNgVM];
                    Un3PpKgDtc = MwtQiBsNgVM;
                }
                MwtQiBsNgVM = MwtQiBsNgVM +1;
            }
        }
        {
            ODBu7ohmzS = i;
            while (Un3PpKgDtc +1 <= ODBu7ohmzS) {
                gfv2JiuYZK0p[i][ODBu7ohmzS +3] = gfv2JiuYZK0p[i][ODBu7ohmzS];
                ODBu7ohmzS = ODBu7ohmzS -1;
            }
        }
        {
            ODBu7ohmzS = Un3PpKgDtc +1;
            while (ODBu7ohmzS <= Un3PpKgDtc +3) {
                gfv2JiuYZK0p[i][ODBu7ohmzS] = GJnrU9Z[i][ODBu7ohmzS -Un3PpKgDtc-1];
                ODBu7ohmzS = ODBu7ohmzS +1;
            }
        }
        i = i + 1;
    }
    {
        MwtQiBsNgVM = 0;
        for (; MwtQiBsNgVM <= i - 1;) {
            f7yDcR (gfv2JiuYZK0p [MwtQiBsNgVM]);
            MwtQiBsNgVM = MwtQiBsNgVM +1;
        }
    }
    tOcyRstS = 0;
}

