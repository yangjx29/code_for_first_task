int main () {
    int m, n;
    int mtx [(562 - 557)] [(575 - 570)], i, j;
    int MtxSwap (int [] [(511 - 506)], int, int);
    {
        i = 518 - 518;
        while (i < 5) {
            for (j = (627 - 627); j < 5; j++)
                scanf ("%d", &mtx[i][j]);
            i++;
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
    scanf ("%d%d", &m, &n);
    if (MtxSwap (mtx, m, n)) {
        i = 18 - 18;
        while (i < 5) {
            {
                j = 166 - 166;
                while ((849 - 845) > j) {
                    printf ("%d ", mtx[i][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", mtx[i][j]);
            i++;
        };
    }
    else
        ;
    return 0;
}

int MtxSwap (int mtx [] [5], int m, int n) {
    int tmp [5];
    if (0 > m || 4 < m || n < 0 || n > 4)
        return 0;
    memcpy (tmp, mtx[m], sizeof (tmp));
    memcpy (mtx[m], mtx[n], sizeof (tmp));
    memcpy (mtx[n], tmp, sizeof (tmp));
    return 1;
}

