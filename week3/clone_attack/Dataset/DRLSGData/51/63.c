main () {
    char leRs1uWr [(915 - 415)] [6];
    int qSpXUOmlTjhx;
    int T7BTjImerc, FjkMRANr;
    char diPahzF19O6K [501];
    int BQiJsWMg3 [(1358 - 858)];
    int vsMOb83VPRxE = -(649 - 648);
    int TUvZJGVtgLuX, r, NqPxJt;
    scanf ("%d", &TUvZJGVtgLuX);
    {
        NqPxJt = 0;
        while (NqPxJt < 500) {
            BQiJsWMg3[NqPxJt] = 1;
            NqPxJt++;
        }
    }
    scanf ("%s", diPahzF19O6K);
    T7BTjImerc = strlen (diPahzF19O6K);
    for (NqPxJt = 0; T7BTjImerc -TUvZJGVtgLuX >= NqPxJt; NqPxJt++) {
        vsMOb83VPRxE++;
        {
            FjkMRANr = NqPxJt;
            while (NqPxJt +TUvZJGVtgLuX > FjkMRANr) {
                leRs1uWr[vsMOb83VPRxE][FjkMRANr -NqPxJt] = diPahzF19O6K[FjkMRANr];
                FjkMRANr++;
            }
        }
    }
    {
        NqPxJt = 0;
        while (NqPxJt < vsMOb83VPRxE) {
            T7BTjImerc = strlen (leRs1uWr[NqPxJt]);
            if (T7BTjImerc > TUvZJGVtgLuX)
                continue;
            {
                FjkMRANr = NqPxJt +1;
                while (FjkMRANr <= vsMOb83VPRxE) {
                    {
                        r = 0;
                        while (r < TUvZJGVtgLuX) {
                            if (leRs1uWr[NqPxJt][r] != leRs1uWr[FjkMRANr][r])
                                break;
                            r++;
                        }
                    }
                    if (r == TUvZJGVtgLuX) {
                        BQiJsWMg3[NqPxJt]++;
                        leRs1uWr[FjkMRANr][TUvZJGVtgLuX] = '0';
                    }
                    FjkMRANr++;
                }
            }
            NqPxJt++;
        }
    }
    qSpXUOmlTjhx = BQiJsWMg3[0];
    {
        NqPxJt = 1;
        while (NqPxJt <= vsMOb83VPRxE) {
            if (BQiJsWMg3[NqPxJt] > qSpXUOmlTjhx)
                qSpXUOmlTjhx = BQiJsWMg3[NqPxJt];
            NqPxJt++;
        }
    }
    if (qSpXUOmlTjhx == 1)
        ;
    else {
        printf ("%d\n", qSpXUOmlTjhx);
        for (NqPxJt = 0; NqPxJt <= vsMOb83VPRxE; NqPxJt++) {
            if (BQiJsWMg3[NqPxJt] == qSpXUOmlTjhx)
                printf ("%s\n", leRs1uWr[NqPxJt]);
        }
    }
}

