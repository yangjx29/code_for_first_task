void  main () {
    int n;
    int nDFlOAsB;
    int rJZ5iGv;
    int y7heEpG;
    int max;
    int maxj;
    int TiPdtUCj;
    int bYCc8f [8] [8];
    int w6ck5EU;
    scanf ("%d,%d", &n, &nDFlOAsB);
    {
        rJZ5iGv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > rJZ5iGv) {
            {
                y7heEpG = 0;
                while (nDFlOAsB - 1 > y7heEpG) {
                    scanf ("%d ", &bYCc8f[rJZ5iGv][y7heEpG]);
                    y7heEpG = y7heEpG + 1;
                };
            }
            scanf ("%d\n", &bYCc8f[rJZ5iGv][nDFlOAsB - 1]);
            rJZ5iGv = rJZ5iGv + 1;
        };
    }
    for (rJZ5iGv = 0; n > rJZ5iGv; rJZ5iGv++) {
        max = bYCc8f[rJZ5iGv][0];
        maxj = 0;
        for (y7heEpG = 0; nDFlOAsB > y7heEpG; y7heEpG = y7heEpG + 1)
            if (max < bYCc8f[rJZ5iGv][y7heEpG]) {
                max = bYCc8f[rJZ5iGv][y7heEpG];
                maxj = y7heEpG;
            }
        TiPdtUCj = 1;
        {
            w6ck5EU = 0;
            while (w6ck5EU < n) {
                if (bYCc8f[w6ck5EU][maxj] < max) {
                    TiPdtUCj = 0;
                    continue;
                }
                w6ck5EU = w6ck5EU + 1;
            };
        }
        if (TiPdtUCj == 1) {
            printf ("%d+%d", rJZ5iGv, maxj);
            break;
        };
    }
    if (TiPdtUCj == 0)
        ;
}

