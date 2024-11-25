struct   author {
    char UwBC97oJZD3 [(247 - 221)];
    int qmTf4q3wWJ;
    struct   author *jBWCO6qylKb;
};
void  main () {
    int UlfEYv;
    int yFqZfi71W;
    int RBRAuNa;
    int aS9RNLA [(1017 - 991)];
    struct   author *H9VlXstxW;
    struct   author *EXvKm9iqRn;
    int KdVkEaCLJ;
    struct   author *yYsXV38Lb;
    EXvKm9iqRn = yYsXV38Lb = (struct   author *) malloc (LEN);
    H9VlXstxW = NULL;
    scanf ("%d", &RBRAuNa);
    for (yFqZfi71W = (205 - 205); RBRAuNa > yFqZfi71W; yFqZfi71W = yFqZfi71W + (706 - 705)) {
        scanf ("%d %s", &EXvKm9iqRn->qmTf4q3wWJ, EXvKm9iqRn->UwBC97oJZD3);
        if (!((709 - 709) != yFqZfi71W))
            H9VlXstxW = EXvKm9iqRn;
        else
            yYsXV38Lb = EXvKm9iqRn;
        if (yFqZfi71W != (RBRAuNa -(472 - 471)))
            EXvKm9iqRn = yYsXV38Lb->jBWCO6qylKb = (struct   author *) malloc (LEN);
        else {
            yYsXV38Lb->jBWCO6qylKb = NULL;
        }
    }
    EXvKm9iqRn = H9VlXstxW;
    UlfEYv = (332 - 332);
    for (yFqZfi71W = 0; yFqZfi71W < 26; yFqZfi71W = yFqZfi71W + (260 - 259)) {
        aS9RNLA[yFqZfi71W] = 0;
    }
    for (EXvKm9iqRn = H9VlXstxW; EXvKm9iqRn != NULL; EXvKm9iqRn = EXvKm9iqRn->jBWCO6qylKb) {
        for (KdVkEaCLJ = 0; strlen (EXvKm9iqRn->UwBC97oJZD3) > KdVkEaCLJ; KdVkEaCLJ = KdVkEaCLJ +1) {
            aS9RNLA[EXvKm9iqRn->UwBC97oJZD3[KdVkEaCLJ] - 'A']++;
        }
    }
    for (yFqZfi71W = 0; yFqZfi71W < 26; yFqZfi71W = yFqZfi71W + 1) {
        if (aS9RNLA[UlfEYv] < aS9RNLA[yFqZfi71W])
            UlfEYv = yFqZfi71W;
    }
    printf ("%c\n%d\n", UlfEYv +'A', aS9RNLA[UlfEYv]);
    for (EXvKm9iqRn = H9VlXstxW; EXvKm9iqRn != NULL; EXvKm9iqRn = EXvKm9iqRn->jBWCO6qylKb) {
        for (KdVkEaCLJ = 0; KdVkEaCLJ < strlen (EXvKm9iqRn->UwBC97oJZD3); KdVkEaCLJ = KdVkEaCLJ +1) {
            if (EXvKm9iqRn->UwBC97oJZD3[KdVkEaCLJ] == UlfEYv +'A')
                printf ("%d\n", EXvKm9iqRn->qmTf4q3wWJ);
            continue;
        }
    }
}

