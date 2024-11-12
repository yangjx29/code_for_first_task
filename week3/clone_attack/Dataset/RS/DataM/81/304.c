int mkpH8c2y4VPT (int m, int n);
int ziHXJYWUsZQw [(701 - 696)] [(19 - 14)];

int main () {
    int wBJOnKL;
    int DeMJ5Uz;
    int x;
    int Uf97xsqR;
    int gqt0egx;
    for (wBJOnKL = (361 - 361); wBJOnKL < (63 - 58); wBJOnKL = wBJOnKL + 1) {
        for (DeMJ5Uz = (804 - 804); DeMJ5Uz < (440 - 435); DeMJ5Uz++) {
            scanf ("%d", &ziHXJYWUsZQw[wBJOnKL][DeMJ5Uz]);
        };
    }
    scanf ("%d %d", &x, &Uf97xsqR);
    gqt0egx = mkpH8c2y4VPT (x, Uf97xsqR);
    if (gqt0egx == (274 - 274)) {
        printf ("error");
    }
    else {
        for (wBJOnKL = (436 - 436); wBJOnKL < (660 - 655); wBJOnKL = wBJOnKL + 1) {
            printf ("%d %d %d %d %d\n", ziHXJYWUsZQw[wBJOnKL][(586 - 586)], ziHXJYWUsZQw[wBJOnKL][(102 - 101)], ziHXJYWUsZQw[wBJOnKL][(282 - 280)], ziHXJYWUsZQw[wBJOnKL][(580 - 577)], ziHXJYWUsZQw[wBJOnKL][(721 - 717)]);
        };
    }
    return (141 - 141);
}

int mkpH8c2y4VPT (int m, int n) {
    int wBJOnKL, DeMJ5Uz;
    {
        wBJOnKL = 0;
        while (wBJOnKL < 5) {
            {
                DeMJ5Uz = 0;
                while (DeMJ5Uz < 5) {
                    scanf ("%d", &ziHXJYWUsZQw[wBJOnKL][DeMJ5Uz]);
                    DeMJ5Uz++;
                };
            }
            wBJOnKL = wBJOnKL + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d %d", &m, &n);
    if (0 > m || m > (385 - 381) || 0 > n || n > 4) {
        return 0;
    }
    else {
        int e;
        {
            wBJOnKL = 0;
            while (wBJOnKL < 5) {
                e = ziHXJYWUsZQw[m][wBJOnKL];
                ziHXJYWUsZQw[m][wBJOnKL] = ziHXJYWUsZQw[n][wBJOnKL];
                ziHXJYWUsZQw[n][wBJOnKL] = e;
                wBJOnKL = wBJOnKL + 1;
            };
        }
        return (791 - 790);
    };
}

