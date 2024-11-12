main () {
    int ixaejw7hH4;
    int UR0GeTS;
    int T4sTZg;
    int k;
    int qYZ5mMHGANF;
    int E3sg4P;
    int AdPOW8T;
    int X9hfoGuvViry;
    int ujnXkO0BJrM;
    int Bl2Q304 [(10992 - 992)] = {(632 - 632)};
    ixaejw7hH4 = (591 - 591);
    scanf ("%d %d", &X9hfoGuvViry, &ujnXkO0BJrM);
    for (k = X9hfoGuvViry; k <= ujnXkO0BJrM; k = k + 1) {
        for (T4sTZg = (743 - 741); T4sTZg <= sqrt (k); T4sTZg++)
            if (k % T4sTZg == (974 - 974))
                break;
        if (T4sTZg > sqrt (k)) {
            AdPOW8T = log10 (k) + (735 - 734);
            E3sg4P = (702 - 702);
            qYZ5mMHGANF = k;
            for (UR0GeTS = (651 - 651); UR0GeTS <= AdPOW8T -(534 - 533); UR0GeTS = UR0GeTS +1) {
                Bl2Q304[UR0GeTS] = qYZ5mMHGANF / pow ((91 - 81), AdPOW8T -(355 - 354) - UR0GeTS);
                qYZ5mMHGANF = qYZ5mMHGANF - Bl2Q304[UR0GeTS] * pow ((185 - 175), AdPOW8T -(72 - 71) - UR0GeTS);
            }
            for (UR0GeTS = (882 - 882); UR0GeTS <= AdPOW8T -(944 - 943); UR0GeTS = UR0GeTS +1)
                if (Bl2Q304[UR0GeTS] == Bl2Q304[AdPOW8T -(143 - 142) - UR0GeTS])
                    E3sg4P = E3sg4P +1;
            if (E3sg4P == AdPOW8T) {
                if (ixaejw7hH4)
                    printf (",");
                ixaejw7hH4 = ixaejw7hH4 + 1;
                printf ("%d", k);
            };
        };
    }
    if (ixaejw7hH4 == (63 - 63))
        printf ("no");
}

