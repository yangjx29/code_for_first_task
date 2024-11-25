void  main () {
    int n;
    int wfEegyWt3;
    int FSkQDvT0YWFX;
    int lm6YLl;
    int jpl9YbwS5;
    int oogWNR9MJ6x1;
    int pPtrBCL [200];
    int WuIHmjd [200];
    int dgXxR9j83nDd [200];
    int YG76ZpMCx0W [200];
    int ping [13] = {(593 - 593), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int jZT1O8vKB [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    {
        wfEegyWt3 = 0;
        while (wfEegyWt3 < n) {
            scanf ("%d%d%d", &pPtrBCL[wfEegyWt3], &WuIHmjd[wfEegyWt3], &dgXxR9j83nDd[wfEegyWt3]);
            wfEegyWt3 = wfEegyWt3 + 1;
        };
    }
    {
        wfEegyWt3 = 0;
        while (wfEegyWt3 < n) {
            if (pPtrBCL[wfEegyWt3] % 4 != 0)
                YG76ZpMCx0W[wfEegyWt3] = 0;
            else {
                if (pPtrBCL[wfEegyWt3] % 100 != 0)
                    YG76ZpMCx0W[wfEegyWt3] = 1;
                else {
                    if (pPtrBCL[wfEegyWt3] % 400 != 0)
                        YG76ZpMCx0W[wfEegyWt3] = 0;
                    else
                        YG76ZpMCx0W[wfEegyWt3] = 1;
                };
            }
            wfEegyWt3 = wfEegyWt3 + 1;
        };
    }
    {
        wfEegyWt3 = 0;
        while (wfEegyWt3 < n) {
            FSkQDvT0YWFX = 0;
            oogWNR9MJ6x1 = 0;
            jpl9YbwS5 = 0;
            if (YG76ZpMCx0W[wfEegyWt3] == 0) {
                {
                    lm6YLl = 0;
                    while (lm6YLl < WuIHmjd[wfEegyWt3]) {
                        jpl9YbwS5 += ping[lm6YLl];
                        lm6YLl = lm6YLl + 1;
                    };
                }
                {
                    lm6YLl = 0;
                    while (lm6YLl < dgXxR9j83nDd[wfEegyWt3]) {
                        oogWNR9MJ6x1 += ping[lm6YLl];
                        lm6YLl = lm6YLl + 1;
                    };
                }
                FSkQDvT0YWFX = oogWNR9MJ6x1 - jpl9YbwS5;
                if (FSkQDvT0YWFX % 7 == 0)
                    ;
                else
                    ;
            }
            else {
                {
                    lm6YLl = 0;
                    while (lm6YLl < WuIHmjd[wfEegyWt3]) {
                        jpl9YbwS5 += jZT1O8vKB[lm6YLl];
                        lm6YLl = lm6YLl + 1;
                    };
                }
                {
                    lm6YLl = 0;
                    while (lm6YLl < dgXxR9j83nDd[wfEegyWt3]) {
                        oogWNR9MJ6x1 = oogWNR9MJ6x1 + jZT1O8vKB[lm6YLl];
                        lm6YLl = lm6YLl + 1;
                    };
                }
                FSkQDvT0YWFX = oogWNR9MJ6x1 - jpl9YbwS5;
                if (FSkQDvT0YWFX % 7 == 0)
                    ;
                else
                    printf ("NO\n");
            }
            wfEegyWt3++;
        };
    };
}

