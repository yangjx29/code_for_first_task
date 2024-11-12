int main () {
    int a [101] [101];
    int b [101] [101];
    int fraSFBEI [101] [101];
    int x1, zAGtU7D2, Pgq0rmn, y2, c5coWIPTSyuk, utk4zly2PVE, nHZM1BNfEnDO;
    int xOi3AKXvYgC, BjkQtWc0iNV, k;
    scanf ("%d %d", &x1, &Pgq0rmn);
    for (xOi3AKXvYgC = (557 - 557); xOi3AKXvYgC < x1; xOi3AKXvYgC = xOi3AKXvYgC + 1) {
        BjkQtWc0iNV = 973 - 973;
        while (Pgq0rmn > BjkQtWc0iNV) {
            scanf ("%d", &a[xOi3AKXvYgC][BjkQtWc0iNV]);
            BjkQtWc0iNV = BjkQtWc0iNV +1;
        };
    }
    scanf ("%d %d", &zAGtU7D2, &y2);
    for (xOi3AKXvYgC = 0; xOi3AKXvYgC < zAGtU7D2; xOi3AKXvYgC = xOi3AKXvYgC + 1)
        for (BjkQtWc0iNV = 0; BjkQtWc0iNV < y2; BjkQtWc0iNV = BjkQtWc0iNV +1)
            scanf ("%d", &b[xOi3AKXvYgC][BjkQtWc0iNV]);
    for (xOi3AKXvYgC = 0; xOi3AKXvYgC < x1; xOi3AKXvYgC = xOi3AKXvYgC + 1) {
        for (BjkQtWc0iNV = 0; BjkQtWc0iNV < y2; BjkQtWc0iNV = BjkQtWc0iNV +1) {
            fraSFBEI[xOi3AKXvYgC][BjkQtWc0iNV] = 0;
            {
                k = 0;
                while (k < Pgq0rmn) {
                    fraSFBEI[xOi3AKXvYgC][BjkQtWc0iNV] = fraSFBEI[xOi3AKXvYgC][BjkQtWc0iNV] + a[xOi3AKXvYgC][k] * b[k][BjkQtWc0iNV];
                    k++;
                };
            };
        };
    }
    for (xOi3AKXvYgC = 0; xOi3AKXvYgC < x1; xOi3AKXvYgC++) {
        printf ("%d", fraSFBEI[xOi3AKXvYgC][0]);
        {
            BjkQtWc0iNV = 217 - 216;
            while (BjkQtWc0iNV < y2) {
                printf (" %d", fraSFBEI[xOi3AKXvYgC][BjkQtWc0iNV]);
                BjkQtWc0iNV = BjkQtWc0iNV +1;
            };
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

