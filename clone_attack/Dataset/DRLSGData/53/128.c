void  main () {
    int piHY8xT [300] = {0};
    int RVeMEqn;
    int LsfC9d;
    int n;
    int k;
    int YZULnS [300];
    int r;
    scanf ("%d", &n);
    {
        LsfC9d = 0;
        for (; n > LsfC9d;) {
            scanf ("%d", &YZULnS[LsfC9d]);
            {
                k = 0;
                for (; LsfC9d > k;) {
                    if (YZULnS[LsfC9d] == YZULnS[k])
                        piHY8xT[LsfC9d] = 1;
                    k = k + 1;
                }
            }
            LsfC9d++;
        }
    }
    {
        r = n - 1;
        for (; r >= 0;) {
            if (piHY8xT[r] == 0)
                break;
            r = r - 1;
        }
    }
    for (RVeMEqn = 0; RVeMEqn < n; RVeMEqn = RVeMEqn +1) {
        if (piHY8xT[RVeMEqn] == 1)
            continue;
        printf ("%d", YZULnS[RVeMEqn]);
        if (RVeMEqn == r)
            break;
    }
}

