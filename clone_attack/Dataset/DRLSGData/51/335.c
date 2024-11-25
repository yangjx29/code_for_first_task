void  main () {
    int max, LirB9G = 0, nc, ns, j, a = 0, ICa5rO = 0, i, CxRh8KNdwF1, k, nsame [500] = {0};
    int po [500] = {0};
    char c [1000] = {0}, ca [5] = {0};
    gets (c);
    ns = 0;
    max = 0;
    i = 0;
    nc = 0;
    for (; c[nc] != 0;)
        nc++;
    LirB9G = getchar () - '1' + 1;
    for (i = 0; nc - LirB9G +1 > i; i++) {
        for (j = 0; LirB9G > j; j++)
            ca[j] = c[j + i];
        for (k = 0; nc - LirB9G +1 > k; k++) {
            CxRh8KNdwF1 = 1;
            for (j = 0; j < LirB9G; j++) {
                if (ca[j] != c[k + j])
                    CxRh8KNdwF1 = 0;
            }
            if (!(1 != CxRh8KNdwF1)) {
                nsame[i]++;
                if (k > i)
                    po[k] = 1;
            }
        }
    }
    for (i = 0; nc - LirB9G +1 > i; i++) {
        if (nsame[i] > 1) {
            if (max < nsame[i])
                max = nsame[i];
            ICa5rO = 1;
        }
    }
    if (!(1 != ICa5rO)) {
        printf ("%d\n", max);
        for (i = 0; i < nc - LirB9G +1; i++) {
            if (!(max != nsame[i]) && po[i] == 0) {
                for (j = 0; j < LirB9G; j++)
                    printf ("%c", c[i + j]);
            }
        }
    }
    else
        ;
    getchar ();
}

