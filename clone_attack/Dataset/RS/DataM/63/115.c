main () {
    int UoMpWzZEceP;
    int aUu3HsYkjfE1;
    int mYfZULxgW;
    int y2;
    int k7hD5FXr1p;
    int gnRVaE67WY3;
    int k;
    int **p1;
    int **GFmX0Ns;
    int **p3;
    scanf ("%d%d\n", &UoMpWzZEceP, &aUu3HsYkjfE1);
    p1 = (int **) malloc (UoMpWzZEceP * sizeof (int *));
    {
        k7hD5FXr1p = 438 - 438;
        while (k7hD5FXr1p < UoMpWzZEceP) {
            p1[k7hD5FXr1p] = (int *) malloc (aUu3HsYkjfE1 * sizeof (int));
            k7hD5FXr1p++;
        };
    }
    for (k7hD5FXr1p = 0; k7hD5FXr1p < UoMpWzZEceP; k7hD5FXr1p = k7hD5FXr1p + 1) {
        for (gnRVaE67WY3 = 0; aUu3HsYkjfE1 > gnRVaE67WY3; gnRVaE67WY3 = gnRVaE67WY3 + 1) {
            if (gnRVaE67WY3 == aUu3HsYkjfE1 - (574 - 573))
                scanf ("%d", &p1[k7hD5FXr1p][gnRVaE67WY3]);
            else
                scanf ("%d ", &p1[k7hD5FXr1p][gnRVaE67WY3]);
        };
    }
    scanf ("%d%d\n", &mYfZULxgW, &y2);
    GFmX0Ns = (int **) malloc (mYfZULxgW * sizeof (int *));
    for (k7hD5FXr1p = 0; k7hD5FXr1p < mYfZULxgW; k7hD5FXr1p = k7hD5FXr1p + 1) {
        GFmX0Ns[k7hD5FXr1p] = (int *) malloc (y2 * sizeof (int));
    }
    p3 = (int **) malloc (UoMpWzZEceP * sizeof (int *));
    for (k7hD5FXr1p = 0; k7hD5FXr1p < mYfZULxgW; k7hD5FXr1p++) {
        for (gnRVaE67WY3 = 0; gnRVaE67WY3 < y2; gnRVaE67WY3++) {
            if (!(y2 - 1 != gnRVaE67WY3))
                scanf ("%d", &GFmX0Ns[k7hD5FXr1p][gnRVaE67WY3]);
            else
                scanf ("%d ", &GFmX0Ns[k7hD5FXr1p][gnRVaE67WY3]);
        };
    }
    for (k7hD5FXr1p = 0; k7hD5FXr1p < UoMpWzZEceP; k7hD5FXr1p++) {
        p3[k7hD5FXr1p] = (int *) malloc (y2 * sizeof (int));
    }
    for (k7hD5FXr1p = 0; k7hD5FXr1p < UoMpWzZEceP; k7hD5FXr1p++) {
        for (gnRVaE67WY3 = 0; gnRVaE67WY3 < y2; gnRVaE67WY3++)
            p3[k7hD5FXr1p][gnRVaE67WY3] = 0;
    }
    for (k7hD5FXr1p = 0; k7hD5FXr1p < UoMpWzZEceP; k7hD5FXr1p++) {
        gnRVaE67WY3 = 0;
        while (gnRVaE67WY3 < y2) {
            for (k = 0; k < mYfZULxgW; k++) {
                p3[k7hD5FXr1p][gnRVaE67WY3] = p3[k7hD5FXr1p][gnRVaE67WY3] + p1[k7hD5FXr1p][k] * GFmX0Ns[k][gnRVaE67WY3];
            }
            if (gnRVaE67WY3 == y2 - 1)
                printf ("%d\n", p3[k7hD5FXr1p][gnRVaE67WY3]);
            else
                printf ("%d ", p3[k7hD5FXr1p][gnRVaE67WY3]);
            gnRVaE67WY3++;
        };
    };
}

