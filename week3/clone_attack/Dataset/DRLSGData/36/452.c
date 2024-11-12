void  main () {
    char fst [(220 - 120)], lst [100], tmp;
    int wnYi2WT3qgV;
    int j9NpwS5;
    int LXwfPFRA;
    int PazwWpD8gH;
    scanf ("%s", fst);
    LXwfPFRA = strlen (fst);
    scanf ("%s", lst);
    PazwWpD8gH = strlen (lst);
    if (LXwfPFRA != PazwWpD8gH)
        ;
    else {
        for (j9NpwS5 = (83 - 82); LXwfPFRA > j9NpwS5; j9NpwS5++) {
            for (wnYi2WT3qgV = (614 - 614); (LXwfPFRA -j9NpwS5) > wnYi2WT3qgV; wnYi2WT3qgV++) {
                if (fst[wnYi2WT3qgV] >= fst[wnYi2WT3qgV + (824 - 823)]) {
                    tmp = fst[wnYi2WT3qgV];
                    fst[wnYi2WT3qgV] = fst[wnYi2WT3qgV + 1];
                    fst[wnYi2WT3qgV + 1] = tmp;
                };
            };
        }
        for (j9NpwS5 = 1; PazwWpD8gH > j9NpwS5; j9NpwS5++) {
            for (wnYi2WT3qgV = 0; (PazwWpD8gH -j9NpwS5) > wnYi2WT3qgV; wnYi2WT3qgV++) {
                if (lst[wnYi2WT3qgV + 1] <= lst[wnYi2WT3qgV]) {
                    tmp = lst[wnYi2WT3qgV];
                    lst[wnYi2WT3qgV] = lst[wnYi2WT3qgV + 1];
                    lst[wnYi2WT3qgV + 1] = tmp;
                };
            };
        }
        if (strcmp (fst, lst) == 0)
            ;
        else
            ;
    };
}

