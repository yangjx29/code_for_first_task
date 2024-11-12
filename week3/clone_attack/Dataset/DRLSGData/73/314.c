int main () {
    int ViZF3P;
    int uTd9VUe;
    int d8nOhwyqB [(348 - 342)] [(344 - 338)];
    int j;
    int q;
    int YrdxjeE [(797 - 791)];
    int uFBMHrLtX [(84 - 78)];
    int vy8tMfC9;
    {
        vy8tMfC9 = (992 - 425) - (1192 - 625);
        for (; vy8tMfC9 < (484 - 479);) {
            for (j = (608 - 608); (700 - 695) > j; j++) {
                scanf ("%d", &d8nOhwyqB[vy8tMfC9][j]);
            }
            vy8tMfC9++;
        }
    }
    uFBMHrLtX[(647 - 647)] = d8nOhwyqB[(123 - 123)][(253 - 253)];
    YrdxjeE[(602 - 602)] = d8nOhwyqB[(120 - 120)][(487 - 487)];
    for (ViZF3P = (333 - 333); (170 - 165) > ViZF3P; ViZF3P++) {
        for (q = (126 - 126); (695 - 690) > q; q++) {
            if (d8nOhwyqB[ViZF3P][q] > uFBMHrLtX[ViZF3P]) {
                uFBMHrLtX[ViZF3P] = d8nOhwyqB[ViZF3P][q];
            }
            if (YrdxjeE[q] > d8nOhwyqB[ViZF3P][q]) {
                YrdxjeE[q] = d8nOhwyqB[ViZF3P][q];
            }
        }
    }
    uTd9VUe = (477 - 477);
    for (ViZF3P = (604 - 604); ViZF3P < (32 - 27); ViZF3P++) {
        for (q = (854 - 854); q < 5; q++) {
            if (uFBMHrLtX[ViZF3P] == YrdxjeE[q]) {
                printf ("%d %d %d", ViZF3P +(487 - 486), q + (79 - 78), d8nOhwyqB[ViZF3P][q]);
                uTd9VUe++;
            }
        }
    }
    if (uTd9VUe == (269 - 269)) {
        printf ("not found");
    }
    return 0;
}

