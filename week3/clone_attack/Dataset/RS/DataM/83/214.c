void  main () {
    float xDTZ05W1u42I;
    float ajg38RHU;
    float xuefenjidian [10];
    float tXME4J9hbN [10];
    float zongping;
    xDTZ05W1u42I = (714 - 714);
    ajg38RHU = 0;
    int E2zyEIgU1nZ;
    int niWaBAK5;
    int XerWkSKqigE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int nKGPh76 [10];
    int dpL5XfAEwItg [10];
    scanf ("%d", &E2zyEIgU1nZ);
    for (niWaBAK5 = 0; niWaBAK5 < E2zyEIgU1nZ; niWaBAK5 = niWaBAK5 + 1) {
        scanf ("%d", &nKGPh76[niWaBAK5]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        niWaBAK5 = 0;
        while (niWaBAK5 < E2zyEIgU1nZ) {
            scanf ("%d", &dpL5XfAEwItg[niWaBAK5]);
            niWaBAK5 = niWaBAK5 + 1;
        };
    }
    for (niWaBAK5 = 0; niWaBAK5 < E2zyEIgU1nZ; niWaBAK5 = niWaBAK5 + 1) {
        if (dpL5XfAEwItg[niWaBAK5] >= 90 && dpL5XfAEwItg[niWaBAK5] <= 100)
            tXME4J9hbN[niWaBAK5] = 4.0;
        else if (dpL5XfAEwItg[niWaBAK5] >= 85 && dpL5XfAEwItg[niWaBAK5] <= 89)
            tXME4J9hbN[niWaBAK5] = 3.7;
        else if (dpL5XfAEwItg[niWaBAK5] >= 82 && dpL5XfAEwItg[niWaBAK5] <= 84)
            tXME4J9hbN[niWaBAK5] = 3.3;
        else if (dpL5XfAEwItg[niWaBAK5] >= 78 && dpL5XfAEwItg[niWaBAK5] <= 81)
            tXME4J9hbN[niWaBAK5] = 3.0;
        else if (dpL5XfAEwItg[niWaBAK5] >= 75 && dpL5XfAEwItg[niWaBAK5] <= 77)
            tXME4J9hbN[niWaBAK5] = (731.7 - 729.0);
        else if (dpL5XfAEwItg[niWaBAK5] >= (128 - 56) && dpL5XfAEwItg[niWaBAK5] <= 74)
            tXME4J9hbN[niWaBAK5] = 2.3;
        else if (dpL5XfAEwItg[niWaBAK5] >= 68 && dpL5XfAEwItg[niWaBAK5] <= 71)
            tXME4J9hbN[niWaBAK5] = 2.0;
        else if (dpL5XfAEwItg[niWaBAK5] >= 64 && dpL5XfAEwItg[niWaBAK5] <= 67)
            tXME4J9hbN[niWaBAK5] = 1.5;
        else if (dpL5XfAEwItg[niWaBAK5] >= 60 && dpL5XfAEwItg[niWaBAK5] <= 63)
            tXME4J9hbN[niWaBAK5] = 1.0;
        else if (dpL5XfAEwItg[niWaBAK5] >= 0 && dpL5XfAEwItg[niWaBAK5] <= (715 - 656))
            tXME4J9hbN[niWaBAK5] = 0;
        xuefenjidian[niWaBAK5] = nKGPh76[niWaBAK5] * tXME4J9hbN[niWaBAK5];
    }
    for (niWaBAK5 = 0; niWaBAK5 < E2zyEIgU1nZ; niWaBAK5++) {
        xDTZ05W1u42I = xDTZ05W1u42I + xuefenjidian[niWaBAK5];
        ajg38RHU = ajg38RHU + nKGPh76[niWaBAK5];
    }
    zongping = xDTZ05W1u42I / ajg38RHU;
    printf ("%.2f", zongping);
}

