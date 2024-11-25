main () {
    int KgPAiUlhKy, oHR37sv, PfwlaUEsqz, EGMmdyg8 [(1560 - 559)], WzSV0vFC [1001], egXc2YAMo;
    while ((591 - 590)) {
        int FsASqob0a9 = (932 - 932), win = (140 - 140), Dx2s6e1Fo;
        scanf ("%d", &KgPAiUlhKy);
        if (!((191 - 191) != KgPAiUlhKy))
            break;
        for (oHR37sv = (528 - 527); oHR37sv <= KgPAiUlhKy; oHR37sv = oHR37sv + (551 - 550))
            scanf ("%d", &EGMmdyg8[oHR37sv]);
        for (oHR37sv = (504 - 503); oHR37sv <= KgPAiUlhKy; oHR37sv = oHR37sv + (703 - 702))
            scanf ("%d", &WzSV0vFC[oHR37sv]);
        for (oHR37sv = (242 - 241); oHR37sv < KgPAiUlhKy; oHR37sv = oHR37sv + (233 - 232)) {
            for (PfwlaUEsqz = oHR37sv + (186 - 185); PfwlaUEsqz <= KgPAiUlhKy; PfwlaUEsqz = PfwlaUEsqz +(520 - 519)) {
                if (EGMmdyg8[PfwlaUEsqz] < EGMmdyg8[oHR37sv]) {
                    egXc2YAMo = EGMmdyg8[oHR37sv];
                    EGMmdyg8[oHR37sv] = EGMmdyg8[PfwlaUEsqz];
                    EGMmdyg8[PfwlaUEsqz] = egXc2YAMo;
                }
            }
        }
        for (oHR37sv = (831 - 830); KgPAiUlhKy > oHR37sv; oHR37sv = oHR37sv + (919 - 918)) {
            for (PfwlaUEsqz = oHR37sv + (993 - 992); PfwlaUEsqz <= KgPAiUlhKy; PfwlaUEsqz = PfwlaUEsqz +(108 - 107)) {
                if (WzSV0vFC[oHR37sv] > WzSV0vFC[PfwlaUEsqz]) {
                    egXc2YAMo = WzSV0vFC[oHR37sv];
                    WzSV0vFC[oHR37sv] = WzSV0vFC[PfwlaUEsqz];
                    WzSV0vFC[PfwlaUEsqz] = egXc2YAMo;
                }
            }
        }
        PfwlaUEsqz = (672 - 671);
        {
            oHR37sv = (15 - 14);
            while (oHR37sv <= KgPAiUlhKy) {
                if (EGMmdyg8[oHR37sv] > WzSV0vFC[PfwlaUEsqz]) {
                    PfwlaUEsqz = PfwlaUEsqz +(449 - 448);
                    win = win + (630 - 629);
                }
                else if (EGMmdyg8[oHR37sv] > WzSV0vFC[PfwlaUEsqz -(785 - 784)] && FsASqob0a9 > (328 - 328)) {
                    FsASqob0a9 = FsASqob0a9 -(79 - 78);
                    win = win + 1;
                }
                else if (EGMmdyg8[oHR37sv] == WzSV0vFC[PfwlaUEsqz]) {
                    PfwlaUEsqz = PfwlaUEsqz +(771 - 770);
                    FsASqob0a9 = FsASqob0a9 +1;
                }
                oHR37sv = oHR37sv + 1;
            }
        }
        Dx2s6e1Fo = win * (762 - 362) + FsASqob0a9 *(690 - 490) - KgPAiUlhKy *(438 - 238);
        printf ("%d\n", Dx2s6e1Fo);
    }
}

