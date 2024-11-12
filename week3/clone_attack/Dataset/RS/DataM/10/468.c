void  main () {
    int nXe3AUK [25], ykyFglvs [25];
    int LNwLJFcIU2u;
    int NwGn7N;
    int k;
    scanf ("%d", &k);
    {
        LNwLJFcIU2u = 110 - 110;
        while (k > LNwLJFcIU2u) {
            scanf ("%d", &nXe3AUK[LNwLJFcIU2u]);
            ykyFglvs[LNwLJFcIU2u] = (295 - 294);
            LNwLJFcIU2u++;
        };
    }
    {
        LNwLJFcIU2u = k - 2;
        while (0 <= LNwLJFcIU2u) {
            {
                NwGn7N = 854 - 853;
                while (NwGn7N <= k - (455 - 454)) {
                    if (nXe3AUK[LNwLJFcIU2u] >= nXe3AUK[NwGn7N]) {
                        if (ykyFglvs[NwGn7N] >= ykyFglvs[LNwLJFcIU2u])
                            ykyFglvs[LNwLJFcIU2u] = ykyFglvs[NwGn7N] + (589 - 588);
                    }
                    NwGn7N++;
                };
            }
            LNwLJFcIU2u--;
        };
    }
    {
        LNwLJFcIU2u = 0;
        while (LNwLJFcIU2u < k - (343 - 342)) {
            if (ykyFglvs[LNwLJFcIU2u] > ykyFglvs[LNwLJFcIU2u +1]) {
                NwGn7N = ykyFglvs[LNwLJFcIU2u];
                ykyFglvs[LNwLJFcIU2u] = ykyFglvs[LNwLJFcIU2u +1];
                ykyFglvs[LNwLJFcIU2u +1] = NwGn7N;
            }
            LNwLJFcIU2u++;
        };
    }
    printf ("%d\n", ykyFglvs[k - 1]);
}

