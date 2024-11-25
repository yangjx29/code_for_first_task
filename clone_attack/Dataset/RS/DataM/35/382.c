void  main () {
    int WNwGLT, wP6oS7, GhVI93, jj, pBo0dtC = 1, rUP7Lcimb, n, IYGOrCeP5JAK = 0, wevXOlTpuy [8] [8];
    scanf ("%d,%d", &rUP7Lcimb, &n);
    {
        WNwGLT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rUP7Lcimb > WNwGLT) {
            {
                wP6oS7 = 0;
                while (wP6oS7 < n) {
                    scanf ("%d", &wevXOlTpuy[WNwGLT][wP6oS7]);
                    wP6oS7 = wP6oS7 + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            WNwGLT = WNwGLT +1;
        };
    }
    {
        WNwGLT = 0;
        while (WNwGLT < rUP7Lcimb) {
            {
                wP6oS7 = 0;
                while (wP6oS7 < n) {
                    pBo0dtC = 1;
                    {
                        GhVI93 = 0;
                        while (GhVI93 < rUP7Lcimb) {
                            if (WNwGLT == GhVI93)
                                continue;
                            if (wevXOlTpuy[GhVI93][wP6oS7] < wevXOlTpuy[WNwGLT][wP6oS7])
                                pBo0dtC = 0;
                            if (pBo0dtC == 0)
                                break;
                            GhVI93 = GhVI93 +1;
                        };
                    }
                    for (jj = 0; jj < n; jj++) {
                        if (!(jj != wP6oS7))
                            continue;
                        if (wevXOlTpuy[WNwGLT][jj] > wevXOlTpuy[WNwGLT][wP6oS7])
                            pBo0dtC = 0;
                        if (pBo0dtC == 0)
                            break;
                    }
                    if (pBo0dtC == 1) {
                        IYGOrCeP5JAK = 1;
                        printf ("%d+%d", WNwGLT, wP6oS7);
                    }
                    wP6oS7++;
                };
            }
            WNwGLT++;
        };
    }
    if (IYGOrCeP5JAK == 0)
        ;
}

