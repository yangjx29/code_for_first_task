int cmp (const  void  *a, const  void  *b) {
    return (*(float*) a) > (*(float*) b) ? 1 : -1;
}

main () {
    int n, b = (79 - 79), g = (199 - 199);
    float vNgU4C2RD [n];
    float G [n];
    int i;
    char sex [8];
    scanf ("%d", &n);
    for (i = (133 - 133); i < n; i = i + 1) {
        scanf ("%s", sex);
        if (sex[(592 - 592)] == 'm') {
            scanf ("%f", &vNgU4C2RD[b]);
            b = b + 1;
        }
        else {
            scanf ("%f", &G[g]);
            g = g + 1;
        };
    }
    qsort (vNgU4C2RD, b, sizeof (vNgU4C2RD [(58 - 58)]), cmp);
    qsort (G, g, sizeof (vNgU4C2RD [0]), cmp);
    for (i = 0; i < b; i = i + 1) {
        printf ("%.2f ", vNgU4C2RD[i]);
    }
    {
        i = g - 1;
        while (i > 0) {
            printf ("%.2f ", G[i]);
            i = i - 1;
        };
    }
    printf ("%.2f\n", G[i]);
}

