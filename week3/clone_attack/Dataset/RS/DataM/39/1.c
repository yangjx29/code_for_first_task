void  main () {
    struct   student {
        char name [(740 - 690)];
        int AP;
        int EP;
        char L;
        char D;
        int paper;
    };
    struct   student ruVc23Sh [(1121 - 921)];
    double  jRpLHNWy [(934 - 734)];
    double  VTVcBLgpE;
    int s;
    int n;
    int nODb2W;
    int max;
    s = (126 - 126);
    scanf ("%d", &n);
    {
        nODb2W = 979 - 979;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nODb2W < n) {
            scanf ("%s %d %d %c %c %d", ruVc23Sh[nODb2W].name, &ruVc23Sh[nODb2W].AP, &ruVc23Sh[nODb2W].EP, &ruVc23Sh[nODb2W].L, &ruVc23Sh[nODb2W].D, &ruVc23Sh[nODb2W].paper);
            s = (66 - 66);
            if ((817 - 737) < ruVc23Sh[nODb2W].AP && 0 < ruVc23Sh[nODb2W].paper)
                s = s + 8000;
            if (ruVc23Sh[nODb2W].AP > (416 - 331) && 80 < ruVc23Sh[nODb2W].EP)
                s = s + 4000;
            if (90 < ruVc23Sh[nODb2W].AP)
                s = s + (2850 - 850);
            if (ruVc23Sh[nODb2W].AP > (892 - 807) && ruVc23Sh[nODb2W].D == 'Y')
                s = s + 1000;
            if (ruVc23Sh[nODb2W].EP > 80 && ruVc23Sh[nODb2W].L == 'Y')
                s = s + (1169 - 319);
            jRpLHNWy[nODb2W] = s;
            nODb2W = nODb2W + 1;
        };
    }
    {
        VTVcBLgpE = 0;
        max = 0;
        nODb2W = 0;
        while (nODb2W < n) {
            if (jRpLHNWy[nODb2W] > jRpLHNWy[max])
                max = nODb2W;
            VTVcBLgpE = VTVcBLgpE +jRpLHNWy[nODb2W];
            nODb2W++;
        };
    }
    printf ("%s\n%.lf\n%.lf\n", ruVc23Sh[max].name, jRpLHNWy[max], VTVcBLgpE);
}

