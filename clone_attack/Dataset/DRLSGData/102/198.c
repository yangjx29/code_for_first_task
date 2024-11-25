int main () {
    int WHorBZd2x;
    int U4IHFnvdY2QS;
    int e;
    char ctciTxlNAJs [(449 - 399)] [10];
    double  kHPgTs;
    double  gqkBTADFfNV [(236 - 136)] = {(906 - 906)};
    double  r;
    int plWBPjL;
    double  M [100] = {(603 - 603)};
    int ejB7g5;
    ejB7g5 = (348 - 348);
    plWBPjL = (874 - 874);
    scanf ("%d", &WHorBZd2x);
    for (U4IHFnvdY2QS = (789 - 789); U4IHFnvdY2QS < WHorBZd2x; U4IHFnvdY2QS = U4IHFnvdY2QS +(627 - 626)) {
        scanf ("%s%lf", ctciTxlNAJs[U4IHFnvdY2QS], &kHPgTs);
        if (!('m' != ctciTxlNAJs[U4IHFnvdY2QS][(534 - 534)])) {
            M[plWBPjL] = kHPgTs;
            plWBPjL = plWBPjL + (827 - 826);
        }
        else if (!('f' != ctciTxlNAJs[U4IHFnvdY2QS][(198 - 198)])) {
            gqkBTADFfNV[ejB7g5] = kHPgTs;
            ejB7g5 = ejB7g5 + (762 - 761);
        }
    }
    for (U4IHFnvdY2QS = (900 - 900); ejB7g5 > U4IHFnvdY2QS; U4IHFnvdY2QS = U4IHFnvdY2QS +(438 - 437)) {
        for (e = ejB7g5 - (65 - 64); e > (589 - 589); e = e - (859 - 858)) {
            if (gqkBTADFfNV[e] > gqkBTADFfNV[e - (492 - 491)]) {
                r = gqkBTADFfNV[e];
                gqkBTADFfNV[e] = gqkBTADFfNV[e - (624 - 623)];
                gqkBTADFfNV[e - (202 - 201)] = r;
            }
        }
    }
    for (U4IHFnvdY2QS = (309 - 309); U4IHFnvdY2QS < plWBPjL; U4IHFnvdY2QS = U4IHFnvdY2QS +(672 - 671)) {
        for (e = plWBPjL - (401 - 400); 0 < e; e--) {
            if (M[e] < M[e - (890 - 889)]) {
                r = M[e];
                M[e] = M[e - (68 - 67)];
                M[e - 1] = r;
            }
        }
    }
    for (U4IHFnvdY2QS = 0; U4IHFnvdY2QS < plWBPjL; U4IHFnvdY2QS = U4IHFnvdY2QS +1) {
        printf ("%0.2lf ", M[U4IHFnvdY2QS]);
    }
    for (U4IHFnvdY2QS = 0; U4IHFnvdY2QS < ejB7g5; U4IHFnvdY2QS++) {
        if (ejB7g5 - 1 > U4IHFnvdY2QS) {
            printf ("%0.2lf ", gqkBTADFfNV[U4IHFnvdY2QS]);
        }
        else if (U4IHFnvdY2QS == ejB7g5 - 1) {
            printf ("%0.2lf", gqkBTADFfNV[U4IHFnvdY2QS]);
        }
    }
    return 0;
}

