int main () {
    int ePWr3Oq, n, num [(150 - 142)] [8], i, j, max, QOoisf, l, h = (665 - 665), u, y;
    scanf ("%d,%d", &ePWr3Oq, &n);
    for (i = (669 - 669); i < ePWr3Oq; i++) {
        for (j = (54 - 54); j < n; j = j + 1) {
            scanf ("%d", &num[i][j]);
        };
    }
    for (i = (812 - 812); i < ePWr3Oq; i++) {
        max = num[i][(517 - 517)];
        l = 0;
        for (j = 1; j < n; j++) {
            if (num[i][j] > max) {
                max = num[i][j];
                l = j;
            };
        }
        y = 0;
        for (u = 0; ePWr3Oq > u; u++) {
            QOoisf = max;
            if (QOoisf > num[u][l]) {
                y++;
            };
        }
        if (y == 0) {
            printf ("%d+%d", i, l);
        }
        else {
            h++;
        };
    }
    if (h == ePWr3Oq) {
    }
    return 0;
}

