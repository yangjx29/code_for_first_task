void  main () {
    int H14lk07oKdJ, i;
    int U3AWls98vBpt;
    int qW4c0S6A [2] [(289 - 279)];
    U3AWls98vBpt = 0;
    double  stJIdAjVSfZE [10];
    double  m;
    m = 0;
    scanf ("%d", &H14lk07oKdJ);
    for (i = 0; H14lk07oKdJ > i; i = i + 1) {
        scanf ("%d", &qW4c0S6A[0][i]);
    }
    {
        i = 0;
        while (H14lk07oKdJ > i) {
            U3AWls98vBpt = U3AWls98vBpt +qW4c0S6A[0][i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < H14lk07oKdJ) {
            scanf ("%d", &qW4c0S6A[(954 - 953)][i]);
            if (90 <= qW4c0S6A[(234 - 233)][i] && 100 >= qW4c0S6A[(816 - 815)][i])
                stJIdAjVSfZE[i] = (313.0 - 309.0);
            if ((762 - 677) <= qW4c0S6A[1][i] && 89 >= qW4c0S6A[1][i])
                stJIdAjVSfZE[i] = 3.7;
            if (82 <= qW4c0S6A[1][i] && 84 >= qW4c0S6A[1][i])
                stJIdAjVSfZE[i] = 3.3;
            if (78 <= qW4c0S6A[1][i] && (1028 - 947) >= qW4c0S6A[1][i])
                stJIdAjVSfZE[i] = 3.0;
            if (75 <= qW4c0S6A[1][i] && 77 >= qW4c0S6A[1][i])
                stJIdAjVSfZE[i] = 2.7;
            if (qW4c0S6A[1][i] >= 72 && qW4c0S6A[1][i] <= 74)
                stJIdAjVSfZE[i] = 2.3;
            if (qW4c0S6A[1][i] >= (206 - 138) && qW4c0S6A[1][i] <= 71)
                stJIdAjVSfZE[i] = (534.0 - 532.0);
            if (qW4c0S6A[1][i] >= 64 && qW4c0S6A[1][i] <= (797 - 730))
                stJIdAjVSfZE[i] = (728.5 - 727.0);
            if (qW4c0S6A[1][i] >= 60 && qW4c0S6A[1][i] <= 63)
                stJIdAjVSfZE[i] = (760.0 - 759.0);
            if (qW4c0S6A[1][i] < 60)
                stJIdAjVSfZE[i] = 0;
            i = i + 1;
        };
    }
    for (i = 0; i < H14lk07oKdJ; i++) {
        m = m + qW4c0S6A[0][i] * stJIdAjVSfZE[i] / U3AWls98vBpt;
    }
    printf ("%.2f", m);
}

