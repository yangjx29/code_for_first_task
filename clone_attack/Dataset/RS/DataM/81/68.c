int npWOvD (int n, int m, int zNJvM7B2 [] [(699 - 694)]) {
    int t1, ylqLnAaMow, mVYf3Hz, i6kNvjneY, SLBOa9EvxA;
    if (n <= (318 - 314) && (377 - 377) <= n && m >= (948 - 948) && 4 >= m) {
        t1 = zNJvM7B2[n][0];
        ylqLnAaMow = zNJvM7B2[n][(384 - 383)];
        mVYf3Hz = zNJvM7B2[n][(249 - 247)];
        i6kNvjneY = zNJvM7B2[n][(481 - 478)];
        SLBOa9EvxA = zNJvM7B2[n][4];
        zNJvM7B2[n][0] = zNJvM7B2[m][0];
        zNJvM7B2[n][1] = zNJvM7B2[m][1];
        zNJvM7B2[n][(976 - 974)] = zNJvM7B2[m][2];
        zNJvM7B2[n][3] = zNJvM7B2[m][3];
        zNJvM7B2[n][4] = zNJvM7B2[m][4];
        zNJvM7B2[m][0] = t1;
        zNJvM7B2[m][1] = ylqLnAaMow;
        zNJvM7B2[m][2] = mVYf3Hz;
        zNJvM7B2[m][3] = i6kNvjneY;
        zNJvM7B2[m][4] = SLBOa9EvxA;
        return 1;
    }
    else
        return 0;
}

void  main () {
    int zNJvM7B2 [(515 - 510)] [5], n, m, i, QNKzmMh7Uj, q, j, a;
    for (i = 0; i < 5; i = i + 1) {
        for (j = 0; j < 5; j = j + 1) {
            scanf ("%d", &zNJvM7B2[i][j]);
        };
    }
    scanf ("%d%d", &n, &m);
    a = npWOvD (n, m, zNJvM7B2);
    if (a == 1) {
        for (q = 0; q < 5; q = q + 1) {
            for (QNKzmMh7Uj = 0; QNKzmMh7Uj < 4; QNKzmMh7Uj = QNKzmMh7Uj +1)
                printf ("%d ", zNJvM7B2[q][QNKzmMh7Uj]);
            if (QNKzmMh7Uj == 4)
                printf ("%d\n", zNJvM7B2[q][QNKzmMh7Uj]);
        };
    }
    if (a == 0)
        printf ("error");
}

