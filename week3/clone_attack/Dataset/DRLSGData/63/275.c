void  main () {
    int bEn9XdLHV0 [100] [100];
    int nxvzLqOEk6g [100] [100];
    int Q7RXGep [100] [100];
    int bn5x1B;
    int NEGkN6Z0uJ;
    int rgPC8juT;
    int WwKYrUe1pS;
    int zHTA89;
    int GjstQ1p;
    int gB1GTaQKfFpz;
    int uk6RnhW;
    int MBYAqGMWdTc;
    {
        zHTA89 = 1;
        while (zHTA89 <= 2) {
            scanf ("%d%d", &bn5x1B, &NEGkN6Z0uJ);
            if (!(1 != zHTA89))
                GjstQ1p = bn5x1B, gB1GTaQKfFpz = NEGkN6Z0uJ;
            if (!(2 != zHTA89))
                uk6RnhW = bn5x1B, MBYAqGMWdTc = NEGkN6Z0uJ;
            {
                rgPC8juT = 0;
                for (; bn5x1B - 1 >= rgPC8juT;) {
                    WwKYrUe1pS = 0;
                    for (; WwKYrUe1pS <= NEGkN6Z0uJ -1;) {
                        if (!(1 != zHTA89))
                            scanf ("%d", &bEn9XdLHV0[rgPC8juT][WwKYrUe1pS]);
                        if (zHTA89 == 2)
                            scanf ("%d", &nxvzLqOEk6g[rgPC8juT][WwKYrUe1pS]);
                        WwKYrUe1pS++;
                    }
                    rgPC8juT++;
                }
            }
            zHTA89++;
        }
    }
    {
        rgPC8juT = 0;
        while (rgPC8juT <= GjstQ1p -1) {
            for (WwKYrUe1pS = 0; WwKYrUe1pS <= MBYAqGMWdTc -1; WwKYrUe1pS++) {
                Q7RXGep[rgPC8juT][WwKYrUe1pS] = 0;
                for (zHTA89 = 0; zHTA89 <= gB1GTaQKfFpz - 1; zHTA89++) {
                    Q7RXGep[rgPC8juT][WwKYrUe1pS] = Q7RXGep[rgPC8juT][WwKYrUe1pS] + bEn9XdLHV0[rgPC8juT][zHTA89] * nxvzLqOEk6g[zHTA89][WwKYrUe1pS];
                }
            }
            rgPC8juT++;
        }
    }
    {
        rgPC8juT = 0;
        for (; rgPC8juT <= GjstQ1p -1;) {
            for (WwKYrUe1pS = 0; WwKYrUe1pS <= MBYAqGMWdTc -1; WwKYrUe1pS++) {
                if (WwKYrUe1pS == 0)
                    printf ("%d", Q7RXGep[rgPC8juT][WwKYrUe1pS]);
                else
                    printf (" %d", Q7RXGep[rgPC8juT][WwKYrUe1pS]);
                if (WwKYrUe1pS == MBYAqGMWdTc -1)
                    printf ("\n");
            }
            rgPC8juT++;
        }
    }
}

