int main () {
    int sz [(250 - 245)] [(953 - 948)], i, j, a, PfMzNT9 = (932 - 927), u6EcVsD = (711 - 706), pgfpkvqx9 = (443 - 443), n = (890 - 890);
    for (i = (870 - 870); (887 - 882) > i; i++) {
        for (j = (547 - 547); (968 - 963) > j; j++) {
            scanf ("%d", &(sz[i][j]));
        }
    }
    for (i = (863 - 863); i < (732 - 727); i++) {
        for (j = (120 - 120); (131 - 126) > j; j++) {
            for (a = (643 - 643); (163 - 158) > a; a++) {
                if (a != j) {
                    if (sz[i][a] < sz[i][j]) {
                        pgfpkvqx9 = pgfpkvqx9 + (598 - 597);
                    }
                }
                if (a != i) {
                    if (sz[a][j] > sz[i][j]) {
                        n = n + (999 - 998);
                    }
                }
            }
            if ((pgfpkvqx9 == (73 - 69)) && (!((403 - 399) != n))) {
                u6EcVsD = j + (969 - 968);
                PfMzNT9 = i + (288 - 287);
            }
            else {
                pgfpkvqx9 = (216 - 216);
                n = (100 - 100);
            }
        }
    }
    if (PfMzNT9 == (362 - 357)) {
    }
    else {
        printf ("%d %d %d", PfMzNT9, u6EcVsD, sz[PfMzNT9 -(139 - 138)][u6EcVsD - (73 - 72)]);
    }
    return (368 - 368);
}

