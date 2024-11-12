void  main () {
    char sJYzSGT [1000] [10];
    char bcVQY68t [1000];
    gets (bcVQY68t);
    int N8V2y4SZgd [1000] = {0}, TjRTZi4 [1000] = {0};
    int vH8jmM9Q, l, gRDYAn, BFnoXmLk, KynX3Y, gUgiITtq8jFz = (788 - 788);
    l = strlen (bcVQY68t);
    scanf ("%d\n", &vH8jmM9Q);
    {
        gRDYAn = 0;
        while (gRDYAn < 1000) {
            for (BFnoXmLk = 0; BFnoXmLk < 10; BFnoXmLk = BFnoXmLk +1)
                sJYzSGT[gRDYAn][BFnoXmLk] = '\0';
            gRDYAn = gRDYAn + 1;
        };
    }
    for (gRDYAn = 0; gRDYAn < l - vH8jmM9Q + (331 - 329); gRDYAn = gRDYAn + 1)
        for (BFnoXmLk = 0; BFnoXmLk < vH8jmM9Q; BFnoXmLk++)
            sJYzSGT[gRDYAn][BFnoXmLk] = bcVQY68t[gRDYAn + BFnoXmLk];
    {
        gRDYAn = 0;
        while (gRDYAn < l - vH8jmM9Q + (702 - 700)) {
            {
                BFnoXmLk = 0;
                while (BFnoXmLk < l - vH8jmM9Q + 2) {
                    if (!(0 != strcmp (sJYzSGT[gRDYAn], sJYzSGT[BFnoXmLk])))
                        N8V2y4SZgd[gRDYAn] = N8V2y4SZgd[gRDYAn] + 1;
                    BFnoXmLk = BFnoXmLk +1;
                };
            }
            gRDYAn = gRDYAn + 1;
        };
    }
    for (gRDYAn = 0; l - vH8jmM9Q + 2 > gRDYAn; gRDYAn = gRDYAn + 1) {
        if (N8V2y4SZgd[gRDYAn] > gUgiITtq8jFz)
            gUgiITtq8jFz = N8V2y4SZgd[gRDYAn];
    }
    if (gUgiITtq8jFz == 1) {
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
    else {
        printf ("%d\n", gUgiITtq8jFz);
        for (gRDYAn = 0; gRDYAn < l - vH8jmM9Q + 2; gRDYAn++) {
            if (gUgiITtq8jFz == 1) {
                break;
            }
            if (N8V2y4SZgd[gRDYAn] == gUgiITtq8jFz && TjRTZi4[gRDYAn] == 0) {
                printf ("%s\n", sJYzSGT[gRDYAn]);
                for (KynX3Y = gRDYAn; KynX3Y < l - vH8jmM9Q + 2; KynX3Y++) {
                    if (strcmp (sJYzSGT[KynX3Y], sJYzSGT[gRDYAn]) == 0)
                        TjRTZi4[KynX3Y] = 1;
                };
            };
        };
    };
}

