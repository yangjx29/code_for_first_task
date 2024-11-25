void  main () {
    struct   patient {
        char num [(597 - 587)];
        int mgNH6U;
    }
    f2mshr9M [100];
    int GqSWbDsMFmf;
    int jia0zc;
    int A8w2mr;
    int u6IJsov1Kqm;
    int u58iLxztdeV4;
    int fxRrJ5w8W [100] = {(891 - 891)};
    scanf ("%d\n", &u6IJsov1Kqm);
    for (A8w2mr = 0; u6IJsov1Kqm > A8w2mr; A8w2mr = A8w2mr +(931 - 930)) {
        scanf ("%s %d\n", f2mshr9M[A8w2mr].num, &f2mshr9M[A8w2mr].mgNH6U);
        fxRrJ5w8W[A8w2mr] = f2mshr9M[A8w2mr].mgNH6U;
    }
    for (u58iLxztdeV4 = 0; u58iLxztdeV4 < u6IJsov1Kqm - (496 - 495); u58iLxztdeV4 = u58iLxztdeV4 + 1)
        for (A8w2mr = 0; u6IJsov1Kqm - 1 - u58iLxztdeV4 > A8w2mr; A8w2mr = A8w2mr +1)
            if (fxRrJ5w8W[A8w2mr +1] > fxRrJ5w8W[A8w2mr]) {
                jia0zc = fxRrJ5w8W[A8w2mr];
                fxRrJ5w8W[A8w2mr] = fxRrJ5w8W[A8w2mr +1];
                fxRrJ5w8W[A8w2mr +1] = jia0zc;
            }
    for (A8w2mr = 0; A8w2mr < u6IJsov1Kqm; A8w2mr = A8w2mr +1)
        if (fxRrJ5w8W[A8w2mr] < 60) {
            GqSWbDsMFmf = A8w2mr;
            break;
        }
    for (u58iLxztdeV4 = 0; GqSWbDsMFmf > u58iLxztdeV4; u58iLxztdeV4 = u58iLxztdeV4 + 1)
        for (A8w2mr = 0; A8w2mr < u6IJsov1Kqm; A8w2mr++)
            if (f2mshr9M[A8w2mr].mgNH6U == fxRrJ5w8W[u58iLxztdeV4] && (!(0 != u58iLxztdeV4) || fxRrJ5w8W[u58iLxztdeV4] != fxRrJ5w8W[u58iLxztdeV4 - 1]))
                printf ("%s\n", f2mshr9M[A8w2mr].num);
    for (A8w2mr = 0; A8w2mr < u6IJsov1Kqm; A8w2mr++)
        if (f2mshr9M[A8w2mr].mgNH6U < 60)
            printf ("%s\n", f2mshr9M[A8w2mr].num);
}

