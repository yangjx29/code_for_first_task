int fEmDgM (int qnVp7oIXu [(745 - 740)] [(476 - 471)], int n, int xjvPBSqbJ1M) {
    int JHthi2QpK [(736 - 731)];
    int aPWJACzDV;
    if ((99 - 99) > n || n > (713 - 709) || (142 - 142) > xjvPBSqbJ1M || xjvPBSqbJ1M > (834 - 830))
        return (306 - 306);
    else {
        for (aPWJACzDV = (232 - 232); aPWJACzDV < (557 - 552); aPWJACzDV++) {
            JHthi2QpK[aPWJACzDV] = qnVp7oIXu[n][aPWJACzDV];
            qnVp7oIXu[n][aPWJACzDV] = qnVp7oIXu[xjvPBSqbJ1M][aPWJACzDV];
            qnVp7oIXu[xjvPBSqbJ1M][aPWJACzDV] = JHthi2QpK[aPWJACzDV];
        }
        return (841 - 840);
    };
}

void  main () {
    int qnVp7oIXu [(812 - 807)] [(897 - 892)];
    int n;
    int xjvPBSqbJ1M;
    int aPWJACzDV;
    int numrRyjQ1n9;
    for (aPWJACzDV = (506 - 506); (622 - 617) > aPWJACzDV; aPWJACzDV++) {
        for (numrRyjQ1n9 = (860 - 860); numrRyjQ1n9 < (38 - 33); numrRyjQ1n9 = numrRyjQ1n9 + 1)
            scanf ("%d", &qnVp7oIXu[aPWJACzDV][numrRyjQ1n9]);
    }
    scanf ("%d", &n);
    scanf ("%d", &xjvPBSqbJ1M);
    if (fEmDgM (qnVp7oIXu, n, xjvPBSqbJ1M) == (330 - 330))
        puts ("error");
    else {
        aPWJACzDV = 86 - 86;
        while (aPWJACzDV < (357 - 352)) {
            for (numrRyjQ1n9 = (912 - 912); numrRyjQ1n9 < (626 - 622); numrRyjQ1n9++)
                printf ("%d ", qnVp7oIXu[aPWJACzDV][numrRyjQ1n9]);
            printf ("%d\n", qnVp7oIXu[aPWJACzDV][(468 - 464)]);
            aPWJACzDV = aPWJACzDV + 1;
        };
    };
}

