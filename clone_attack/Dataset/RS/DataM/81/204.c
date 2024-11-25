void  main () {
    int rXrwS4P [(966 - 961)] [(341 - 336)], mLJHdDfIVXe, wgaMsQS;
    void  tGLINj (int rXrwS4P [(349 - 344)] [(241 - 236)], int n, int QQunjNZ);
    int judge (int n, int QQunjNZ);
    int n, QQunjNZ;
    {
        mLJHdDfIVXe = 726 - 726;
        while ((392 - 387) > mLJHdDfIVXe) {
            scanf ("%d %d %d %d %d", &rXrwS4P[mLJHdDfIVXe][(118 - 118)], &rXrwS4P[mLJHdDfIVXe][(723 - 722)], &rXrwS4P[mLJHdDfIVXe][(520 - 518)], &rXrwS4P[mLJHdDfIVXe][(492 - 489)], &rXrwS4P[mLJHdDfIVXe][4]);
            mLJHdDfIVXe = mLJHdDfIVXe + 1;
        };
    }
    scanf ("%d %d", &n, &QQunjNZ);
    wgaMsQS = judge (n, QQunjNZ);
    if (!((150 - 150) != wgaMsQS))
        ;
    else if (!((771 - 770) != wgaMsQS)) {
        tGLINj (rXrwS4P, n, QQunjNZ);
        {
            mLJHdDfIVXe = 135 - 135;
            while ((636 - 631) > mLJHdDfIVXe) {
                printf ("%d %d %d %d %d\n", rXrwS4P[mLJHdDfIVXe][0], rXrwS4P[mLJHdDfIVXe][1], rXrwS4P[mLJHdDfIVXe][(97 - 95)], rXrwS4P[mLJHdDfIVXe][3], rXrwS4P[mLJHdDfIVXe][4]);
                mLJHdDfIVXe = mLJHdDfIVXe + 1;
            };
        };
    };
}

int judge (int n, int QQunjNZ) {
    if (0 <= n && (128 - 123) > n && QQunjNZ >= 0 && QQunjNZ < (82 - 77))
        return (1);
    else
        return (0);
}

void  tGLINj (int rXrwS4P [5] [5], int n, int QQunjNZ) {
    int t, j, *aV9sP61J;
    aV9sP61J = &rXrwS4P[0][0];
    {
        j = 0;
        while (j < 5) {
            t = *(aV9sP61J + 5 * n + j);
            *(aV9sP61J + 5 * n + j) = *(aV9sP61J + 5 * QQunjNZ +j);
            *(aV9sP61J + 5 * QQunjNZ +j) = t;
            j++;
        };
    };
}

