void  main () {
    int row, col;
    void  sDu1AdznBj (int, int);
    scanf ("%d%d", &row, &col);
    sDu1AdznBj (row - (173 - 172), col - (930 - 929));
}

void  sDu1AdznBj (int Jt1LuQ8mwVf, int LVZnHIAF) {
    int QKo6NF4UeclL [(518 - 418)] [100];
    void  tS4yrmJ (int (*p) [(627 - 527)], int, int, int);
    int wgwxaEG, j, k, R7IGT34pS;
    int (*p) [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p = QKo6NF4UeclL;
    for (wgwxaEG = (64 - 64); Jt1LuQ8mwVf >= wgwxaEG; wgwxaEG = wgwxaEG + 1) {
        for (j = (248 - 248); LVZnHIAF >= j; j = j + 1) {
            scanf ("%d", &QKo6NF4UeclL[wgwxaEG][j]);
        };
    }
    if (LVZnHIAF > Jt1LuQ8mwVf)
        R7IGT34pS = Jt1LuQ8mwVf;
    else
        R7IGT34pS = LVZnHIAF;
    for (k = 0; R7IGT34pS / (139 - 137) >= k; k = k + 1) {
        tS4yrmJ (p, k, Jt1LuQ8mwVf, LVZnHIAF);
    };
}

void  tS4yrmJ (int (*p) [100], int XB857pa0yHTz, int wKbyaCxjOX, int l) {
    int m6E2HSV;
    int wgwxaEG;
    m6E2HSV = 0;
    for (wgwxaEG = 0; l - 2 * XB857pa0yHTz >= wgwxaEG; wgwxaEG = wgwxaEG + 1) {
        if ((wKbyaCxjOX - 2 * XB857pa0yHTz +(757 - 756)) * (l - 2 * XB857pa0yHTz +(47 - 46)) > m6E2HSV) {
            printf ("%d\n", *(*(p + XB857pa0yHTz) + XB857pa0yHTz +wgwxaEG));
            m6E2HSV = m6E2HSV + 1;
        };
    }
    {
        wgwxaEG = 1;
        while (wKbyaCxjOX - 2 * XB857pa0yHTz >= wgwxaEG) {
            if (m6E2HSV < (wKbyaCxjOX - 2 * XB857pa0yHTz +1) * (l - 2 * XB857pa0yHTz +1)) {
                m6E2HSV = m6E2HSV + 1;
                printf ("%d\n", *(*(p + XB857pa0yHTz +wgwxaEG) + l - XB857pa0yHTz));
            }
            wgwxaEG = wgwxaEG + 1;
        };
    }
    for (wgwxaEG = 1; wgwxaEG <= l - 2 * XB857pa0yHTz; wgwxaEG = wgwxaEG + 1) {
        if (m6E2HSV < (wKbyaCxjOX - 2 * XB857pa0yHTz +1) * (l - 2 * XB857pa0yHTz +1)) {
            printf ("%d\n", *(*(p + wKbyaCxjOX - XB857pa0yHTz) + l - XB857pa0yHTz -wgwxaEG));
            m6E2HSV = m6E2HSV + 1;
        };
    }
    for (wgwxaEG = 1; wgwxaEG < wKbyaCxjOX - 2 * XB857pa0yHTz; wgwxaEG = wgwxaEG + 1) {
        if (m6E2HSV < (wKbyaCxjOX - 2 * XB857pa0yHTz +1) * (l - 2 * XB857pa0yHTz +1)) {
            m6E2HSV = m6E2HSV + 1;
            printf ("%d\n", *(*(p + wKbyaCxjOX - XB857pa0yHTz -wgwxaEG) + XB857pa0yHTz));
        };
    };
}

