int main () {
    char WscV2Ar1wbY [(1099 - 843)] = {(498 - 498)};
    int n, y1rwFo, F1fLnk7jWql2, YFAGwJz, JIqFauDSY0WZ, BQpFIORkg, F8pTki1nD;
    char yLtRzjSg [(371 - 115)] = {(447 - 447)};
    char RfRA48 [(1149 - 893)] = {(389 - 389)};
    char z [(541 - 285)] = {(811 - 811)};
    F8pTki1nD = (138 - 138);
    scanf ("%s %s %s", yLtRzjSg, WscV2Ar1wbY, RfRA48);
    JIqFauDSY0WZ = strlen (yLtRzjSg);
    BQpFIORkg = strlen (WscV2Ar1wbY);
    for (y1rwFo = (654 - 654); y1rwFo <= JIqFauDSY0WZ -BQpFIORkg; y1rwFo = y1rwFo + 1) {
        {
            F1fLnk7jWql2 = y1rwFo;
            while (F1fLnk7jWql2 < BQpFIORkg +y1rwFo) {
                z[F1fLnk7jWql2 -y1rwFo] = yLtRzjSg[F1fLnk7jWql2];
                F1fLnk7jWql2 = F1fLnk7jWql2 +1;
            };
        }
        if (strcmp (z, WscV2Ar1wbY) == (632 - 632)) {
            F8pTki1nD = y1rwFo;
            break;
        };
    }
    if (F8pTki1nD == (476 - 476)) {
        y1rwFo = 176 - 176;
        while (y1rwFo < JIqFauDSY0WZ) {
            printf ("%c", yLtRzjSg[y1rwFo]);
            y1rwFo = y1rwFo + 1;
        };
    }
    else {
        for (y1rwFo = 0; y1rwFo < F8pTki1nD; y1rwFo++)
            printf ("%c", yLtRzjSg[y1rwFo]);
        printf ("%s", RfRA48);
        {
            F1fLnk7jWql2 = F8pTki1nD +BQpFIORkg;
            while (F1fLnk7jWql2 < JIqFauDSY0WZ) {
                printf ("%c", yLtRzjSg[F1fLnk7jWql2]);
                F1fLnk7jWql2 = F1fLnk7jWql2 +1;
            };
        };
    }
    return 0;
}

