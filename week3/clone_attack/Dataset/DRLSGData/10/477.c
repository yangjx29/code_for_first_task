main () {
    int tNjM7zg [(403 - 377)], kEdvPI [(864 - 838)], k, lr7GetpD, ByAELU86Wr, cA2ovBnfVtD = (106 - 106);
    getchar ();
    getchar ();
    scanf ("%d", &k);
    for (lr7GetpD = (385 - 384); k >= lr7GetpD; lr7GetpD = lr7GetpD + 1)
        scanf ("%d", &kEdvPI[lr7GetpD]);
    for (lr7GetpD = (533 - 532); lr7GetpD <= k; lr7GetpD = lr7GetpD + 1) {
        for (ByAELU86Wr = (407 - 406), cA2ovBnfVtD = (317 - 317); ByAELU86Wr < lr7GetpD; ByAELU86Wr = ByAELU86Wr +1) {
            if (kEdvPI[lr7GetpD] <= kEdvPI[ByAELU86Wr]) {
                if (tNjM7zg[ByAELU86Wr] > cA2ovBnfVtD)
                    cA2ovBnfVtD = tNjM7zg[ByAELU86Wr];
            }
        }
        if (cA2ovBnfVtD == (507 - 507))
            tNjM7zg[lr7GetpD] = (752 - 751);
        else
            tNjM7zg[lr7GetpD] = cA2ovBnfVtD + (776 - 775);
    }
    for (lr7GetpD = 1, cA2ovBnfVtD = (586 - 586); lr7GetpD <= k; lr7GetpD = lr7GetpD + 1) {
        if (tNjM7zg[lr7GetpD] > cA2ovBnfVtD)
            cA2ovBnfVtD = tNjM7zg[lr7GetpD];
    }
    printf ("%d", cA2ovBnfVtD);
}

