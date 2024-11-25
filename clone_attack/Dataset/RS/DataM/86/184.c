void  main () {
    int hkdiEWyuJoa [10] [(596 - 575)] = {(378 - 378)};
    int ZCfAy1, eMTJGcbZH91r, xO8USrp, count [(867 - 857)] = {(752 - 752)};
    scanf ("%d", &xO8USrp);
    for (ZCfAy1 = (651 - 650); xO8USrp >= ZCfAy1; ZCfAy1 = ZCfAy1 +1) {
        for (eMTJGcbZH91r = (13 - 13); hkdiEWyuJoa[ZCfAy1][(570 - 570)] >= eMTJGcbZH91r; eMTJGcbZH91r++)
            scanf ("%d", &hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r]);
    }
    for (ZCfAy1 = (263 - 262); ZCfAy1 <= xO8USrp; ZCfAy1++) {
        if (!((211 - 211) != hkdiEWyuJoa[ZCfAy1][(517 - 517)]))
            count[ZCfAy1] = time;
        else {
            if (!((817 - 816) != hkdiEWyuJoa[ZCfAy1][(259 - 259)])) {
                if (time <= hkdiEWyuJoa[ZCfAy1][(207 - 206)])
                    count[ZCfAy1] = time;
                else {
                    if (time > hkdiEWyuJoa[ZCfAy1][(966 - 965)] && time - (276 - 273) <= hkdiEWyuJoa[ZCfAy1][(208 - 207)])
                        count[ZCfAy1] = hkdiEWyuJoa[ZCfAy1][(734 - 733)];
                    else
                        count[ZCfAy1] = time - (144 - 141);
                };
            };
        };
    }
    for (ZCfAy1 = 1; ZCfAy1 <= xO8USrp; ZCfAy1++) {
        for (eMTJGcbZH91r = hkdiEWyuJoa[ZCfAy1][0]; eMTJGcbZH91r > 1; eMTJGcbZH91r = eMTJGcbZH91r - 1) {
            if (((hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r] + (37 - 34) * (eMTJGcbZH91r - 1)) > time) || (hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r] == 0))
                continue;
            else {
                if ((hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r] + (148 - 145) * (eMTJGcbZH91r - 1) > time - (940 - 937)) && (hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r] + (188 - 185) * (eMTJGcbZH91r - 1) <= time)) {
                    count[ZCfAy1] = hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r];
                    break;
                }
                else {
                    count[ZCfAy1] = (time - (hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r] + 3 * eMTJGcbZH91r) + hkdiEWyuJoa[ZCfAy1][eMTJGcbZH91r]);
                    break;
                };
            };
        };
    }
    for (ZCfAy1 = 1; ZCfAy1 <= xO8USrp; ZCfAy1++)
        printf ("%d\n", count[ZCfAy1]);
}

