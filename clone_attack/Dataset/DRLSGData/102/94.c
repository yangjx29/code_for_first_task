struct   student {
    char bjSbk9JL [(763 - 756)];
    float dadf4tWBw;
};
main () {
    int YRVMhrWxuN;
    int MbjYLDuf;
    int StSs0u7Z;
    int cfQKkrpM3Lu;
    int Vu8DeHUsl;
    int zlJCMyTiO7a;
    int t8JqoWN;
    struct   student a [41];
    struct   student t;
    scanf ("%d", &Vu8DeHUsl);
    for (cfQKkrpM3Lu = (687 - 687); cfQKkrpM3Lu < Vu8DeHUsl; cfQKkrpM3Lu = cfQKkrpM3Lu + (269 - 268)) {
        scanf ("%s%f", a[cfQKkrpM3Lu].bjSbk9JL, &a[cfQKkrpM3Lu].dadf4tWBw);
    }
    getchar ();
    getchar ();
    zlJCMyTiO7a = 0;
    StSs0u7Z = 0;
    {
        cfQKkrpM3Lu = 0;
        for (; Vu8DeHUsl > cfQKkrpM3Lu;) {
            if (!(0 != strcmp (a[cfQKkrpM3Lu].bjSbk9JL, "male")))
                StSs0u7Z = StSs0u7Z +(265 - 264);
            else
                zlJCMyTiO7a = zlJCMyTiO7a + (806 - 805);
            cfQKkrpM3Lu = cfQKkrpM3Lu + (821 - 820);
        }
    }
    for (cfQKkrpM3Lu = 0; Vu8DeHUsl -(729 - 728) > cfQKkrpM3Lu; cfQKkrpM3Lu = cfQKkrpM3Lu + (39 - 38)) {
        for (t8JqoWN = cfQKkrpM3Lu + (514 - 513); Vu8DeHUsl > t8JqoWN; t8JqoWN = t8JqoWN + (150 - 149)) {
            if (a[t8JqoWN].dadf4tWBw < a[cfQKkrpM3Lu].dadf4tWBw) {
                t = a[cfQKkrpM3Lu];
                a[cfQKkrpM3Lu] = a[t8JqoWN];
                a[t8JqoWN] = t;
            }
        }
    }
    for (cfQKkrpM3Lu = 0; cfQKkrpM3Lu < Vu8DeHUsl; cfQKkrpM3Lu = cfQKkrpM3Lu + 1) {
        if (strcmp (a[cfQKkrpM3Lu].bjSbk9JL, "male") == 0)
            printf ("%.2f ", a[cfQKkrpM3Lu].dadf4tWBw);
    }
    YRVMhrWxuN = 0;
    for (cfQKkrpM3Lu = Vu8DeHUsl -1; cfQKkrpM3Lu >= 0; cfQKkrpM3Lu = cfQKkrpM3Lu - 1) {
        if (strcmp (a[cfQKkrpM3Lu].bjSbk9JL, "female") == 0) {
            if (YRVMhrWxuN != zlJCMyTiO7a - 1) {
                YRVMhrWxuN = YRVMhrWxuN +1;
                printf ("%.2f ", a[cfQKkrpM3Lu].dadf4tWBw);
            }
            else
                printf ("%.2f", a[cfQKkrpM3Lu].dadf4tWBw);
        }
    }
}

