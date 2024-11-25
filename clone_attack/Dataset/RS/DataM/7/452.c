main () {
    char ejAxzv [(863 - 607)];
    char HRkl8ry [256];
    char C8pPkcb [256];
    char tmkQ7vx5nYL [256];
    int JyhGfatrFx;
    int O7pNdQKfYGMR;
    int i;
    int j;
    int Dp37oynG;
    int e;
    int kTa4FA;
    O7pNdQKfYGMR = 0;
    scanf ("%s", &ejAxzv);
    scanf ("%s", &HRkl8ry);
    scanf ("%s", &C8pPkcb);
    kTa4FA = (435 - 435);
    while (ejAxzv[kTa4FA] != '\0')
        kTa4FA = kTa4FA + 1;
    for (; !('\0' == HRkl8ry[O7pNdQKfYGMR]);)
        O7pNdQKfYGMR = O7pNdQKfYGMR +1;
    JyhGfatrFx = 0;
    for (; !('\0' == C8pPkcb[JyhGfatrFx]);)
        JyhGfatrFx++;
    for (i = 0; kTa4FA > i; i = i + 1) {
        Dp37oynG = (19 - 18);
        for (j = 0; j < O7pNdQKfYGMR; j = j + 1)
            if (!(HRkl8ry[j] == ejAxzv[i + j])) {
                Dp37oynG = 0;
                break;
            }
        if (!(1 != Dp37oynG)) {
            e = i;
            break;
        };
    }
    if (Dp37oynG == 1) {
        for (i = e + O7pNdQKfYGMR -1; ejAxzv[i] != '\0'; i = i + 1)
            tmkQ7vx5nYL[i] = ejAxzv[i];
        tmkQ7vx5nYL[i + 1] = '\0';
        for (i = 0; i < JyhGfatrFx; i = i + 1)
            ejAxzv[e + i] = C8pPkcb[i];
        for (i = e + JyhGfatrFx; tmkQ7vx5nYL[i - JyhGfatrFx +O7pNdQKfYGMR] != '\0'; i = i + 1)
            ejAxzv[i] = ejAxzv[i - JyhGfatrFx +O7pNdQKfYGMR];
        ejAxzv[i + 1] = '\0';
    }
    {
        i = 0;
        while (ejAxzv[i] != '\0') {
            printf ("%c", ejAxzv[i]);
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
    printf ("\n");
}

