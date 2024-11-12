void  main () {
    int FNjioqx;
    FNjioqx = (742 - 742);
    int PIme6n, CfRcWDXYkq2;
    int **kdRl01JTIqek;
    int nzf5nCaRsS;
    int f26wgm;
    int JVdfgDGR28Z;
    int H9OzNZ;
    int m;
    int c;
    int d;
    scanf ("%d,%d", &PIme6n, &CfRcWDXYkq2);
    kdRl01JTIqek = (int **) malloc (PIme6n * sizeof (int *));
    for (JVdfgDGR28Z = (581 - 581); JVdfgDGR28Z < PIme6n; JVdfgDGR28Z = JVdfgDGR28Z +1) {
        kdRl01JTIqek[JVdfgDGR28Z] = (int *) malloc (CfRcWDXYkq2 * sizeof (int));
        for (H9OzNZ = 0; H9OzNZ < CfRcWDXYkq2; H9OzNZ = H9OzNZ +1) {
            scanf ("%d", &kdRl01JTIqek[JVdfgDGR28Z][H9OzNZ]);
        };
    }
    for (JVdfgDGR28Z = 0; JVdfgDGR28Z < PIme6n; JVdfgDGR28Z = JVdfgDGR28Z +1) {
        for (H9OzNZ = 0; H9OzNZ < CfRcWDXYkq2; H9OzNZ = H9OzNZ +1) {
            m = kdRl01JTIqek[JVdfgDGR28Z][H9OzNZ];
            f26wgm = H9OzNZ;
            nzf5nCaRsS = JVdfgDGR28Z;
            for (c = 0; c < CfRcWDXYkq2; c = c + 1) {
                if (kdRl01JTIqek[JVdfgDGR28Z][c] > m)
                    break;
                if (c == CfRcWDXYkq2 -1) {
                    for (d = 0; d < PIme6n; d = d + 1) {
                        if (m > kdRl01JTIqek[d][H9OzNZ])
                            break;
                        if (d == PIme6n -1) {
                            FNjioqx = FNjioqx +1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            printf ("%d+%d\n", nzf5nCaRsS, f26wgm);
                        };
                    };
                };
            };
        };
    }
    if (FNjioqx == 0)
        printf ("No\n");
}

