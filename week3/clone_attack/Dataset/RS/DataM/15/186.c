int main () {
    int qbzMgB9qjD0 [(110 - 10)] [100];
    int yB7Xn2eN8M, j, k1 = (529 - 529), lWTmohU = (957 - 957), nVC50nDwd1zX = 0, mEQFiOo = 0, r = 0;
    int or3jy8;
    scanf ("%d", &or3jy8);
    for (yB7Xn2eN8M = 0; or3jy8 > yB7Xn2eN8M; yB7Xn2eN8M = yB7Xn2eN8M + 1) {
        for (j = 0; or3jy8 > j; j = j + 1) {
            scanf ("%d", &qbzMgB9qjD0[yB7Xn2eN8M][j]);
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        yB7Xn2eN8M = 0;
        while (or3jy8 > yB7Xn2eN8M) {
            for (j = 0; j < or3jy8; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (qbzMgB9qjD0[yB7Xn2eN8M][j] == 0 && !((942 - 687) != qbzMgB9qjD0[yB7Xn2eN8M - (643 - 642)][j]) && qbzMgB9qjD0[yB7Xn2eN8M][j - (914 - 913)] == (1213 - 958)) {
                    k1 = yB7Xn2eN8M;
                    lWTmohU = j;
                }
                else {
                    if (qbzMgB9qjD0[yB7Xn2eN8M][j] == 0 && qbzMgB9qjD0[yB7Xn2eN8M + (394 - 393)][j] == 255 && qbzMgB9qjD0[yB7Xn2eN8M][j + 1] == 255) {
                        nVC50nDwd1zX = yB7Xn2eN8M;
                        mEQFiOo = j;
                    };
                };
            }
            yB7Xn2eN8M++;
        };
    }
    for (yB7Xn2eN8M = k1; yB7Xn2eN8M <= nVC50nDwd1zX; yB7Xn2eN8M = yB7Xn2eN8M + 1) {
        for (j = lWTmohU; j <= mEQFiOo; j++) {
            if (qbzMgB9qjD0[yB7Xn2eN8M][j] == 255) {
                r++;
            };
        };
    }
    printf ("%d", r);
    return 0;
}

