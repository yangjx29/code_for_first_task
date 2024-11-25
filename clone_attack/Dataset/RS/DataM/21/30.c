void  main () {
    float fvKThb60Cd;
    float JZPKFslNiAd;
    float NTUELBHYq4gz [(278 - 178)];
    float Dfu6jNgIw;
    fvKThb60Cd = (525 - 525);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int cnBkrMLQd0, lJCd0k [(838 - 738)], BPcgSeD, j3mdHajcWqn = (314 - 314);
    scanf ("%d", &BPcgSeD);
    for (cnBkrMLQd0 = (782 - 782); cnBkrMLQd0 < BPcgSeD; cnBkrMLQd0 = cnBkrMLQd0 + 1) {
        scanf ("%d", &lJCd0k[cnBkrMLQd0]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fvKThb60Cd = fvKThb60Cd + lJCd0k[cnBkrMLQd0];
    }
    JZPKFslNiAd = fvKThb60Cd / BPcgSeD;
    for (cnBkrMLQd0 = (387 - 387); cnBkrMLQd0 < BPcgSeD; cnBkrMLQd0 = cnBkrMLQd0 + 1) {
        if (lJCd0k[cnBkrMLQd0] > JZPKFslNiAd)
            NTUELBHYq4gz[cnBkrMLQd0] = lJCd0k[cnBkrMLQd0] - JZPKFslNiAd;
        else
            NTUELBHYq4gz[cnBkrMLQd0] = JZPKFslNiAd -lJCd0k[cnBkrMLQd0];
        Dfu6jNgIw = (NTUELBHYq4gz[cnBkrMLQd0] <= Dfu6jNgIw) ? Dfu6jNgIw : NTUELBHYq4gz[cnBkrMLQd0];
    }
    for (cnBkrMLQd0 = 0; cnBkrMLQd0 < BPcgSeD; cnBkrMLQd0 = cnBkrMLQd0 + 1)
        if (NTUELBHYq4gz[cnBkrMLQd0] == Dfu6jNgIw) {
            if (JZPKFslNiAd > lJCd0k[cnBkrMLQd0]) {
                printf ("%d", lJCd0k[cnBkrMLQd0]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            j3mdHajcWqn++;
        }
    for (cnBkrMLQd0 = 0; cnBkrMLQd0 < BPcgSeD; cnBkrMLQd0 = cnBkrMLQd0 + 1)
        if (lJCd0k[cnBkrMLQd0] > JZPKFslNiAd &&NTUELBHYq4gz[cnBkrMLQd0] == Dfu6jNgIw) {
            if (j3mdHajcWqn == 2)
                printf (",%d", lJCd0k[cnBkrMLQd0]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (j3mdHajcWqn == (564 - 563))
                printf ("%d", lJCd0k[cnBkrMLQd0]);
        };
}

