void  main () {
    char num1 [40];
    unsigned  long  zqzCox = 0, uHcRyEeG [40], MKYC83;
    int TGngOyRw9Q, a2, hH1d5Sy, len, j;
    scanf ("%d%s%d", &TGngOyRw9Q, &num1, &a2);
    len = strlen (num1);
    for (hH1d5Sy = len - 1, j = 0; 0 <= hH1d5Sy; hH1d5Sy = hH1d5Sy - 1, j = j + 1) {
        if ('A' <= num1[hH1d5Sy] && 'Z' >= num1[hH1d5Sy])
            uHcRyEeG[hH1d5Sy] = 10 + num1[hH1d5Sy] - 'A';
        if ('a' <= num1[hH1d5Sy] && 'z' >= num1[hH1d5Sy])
            uHcRyEeG[hH1d5Sy] = 10 + num1[hH1d5Sy] - 'a';
        if ('0' <= num1[hH1d5Sy] && num1[hH1d5Sy] <= '9')
            uHcRyEeG[hH1d5Sy] = 1 + num1[hH1d5Sy] - '1';
        zqzCox = zqzCox + uHcRyEeG[hH1d5Sy] * (int) pow (TGngOyRw9Q, j);
    }
    for (hH1d5Sy = 0;; hH1d5Sy++) {
        MKYC83 = zqzCox / (int) pow (a2, hH1d5Sy);
        if (MKYC83 < a2)
            break;
    }
    for (; hH1d5Sy >= 0; hH1d5Sy--) {
        uHcRyEeG[hH1d5Sy] = zqzCox / (int) pow (a2, hH1d5Sy);
        zqzCox = zqzCox - (int) pow (a2, hH1d5Sy) * uHcRyEeG[hH1d5Sy];
        if (uHcRyEeG[hH1d5Sy] >= 0 && uHcRyEeG[hH1d5Sy] <= 9)
            printf ("%c", uHcRyEeG[hH1d5Sy] + 48);
        if (uHcRyEeG[hH1d5Sy] >= 10 && uHcRyEeG[hH1d5Sy] <= 35)
            printf ("%c", uHcRyEeG[hH1d5Sy] + 55);
    };
}

