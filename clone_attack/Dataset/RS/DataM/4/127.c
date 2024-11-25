int main () {
    int FvmYHzUu5o [(872 - 772)] [(915 - 815)];
    int row;
    int QxGbaLSfky;
    int i;
    int j;
    int uxniRac0;
    int startcol;
    uxniRac0 = (928 - 928);
    startcol = (321 - 321);
    scanf ("%d %d", &row, &QxGbaLSfky);
    for (i = (412 - 412); row > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < QxGbaLSfky; j = j + 1) {
            scanf ("%d", &FvmYHzUu5o[i][j]);
        };
    }
    for (; (startcol + uxniRac0) != (row + QxGbaLSfky -(871 - 869));) {
        if (startcol < QxGbaLSfky -(558 - 557)) {
            for (i = uxniRac0; (row > i) && (uxniRac0 + startcol >= i); i = i + 1) {
                printf ("%d\n", FvmYHzUu5o[i][startcol + uxniRac0 - i]);
            }
            startcol = startcol + 1;
        }
        else {
            for (i = uxniRac0; (i < row) && (i <= uxniRac0 + startcol); i = i + 1) {
                printf ("%d\n", FvmYHzUu5o[i][startcol + uxniRac0 - i]);
            }
            uxniRac0++;
        };
    }
    printf ("%d", FvmYHzUu5o[row - (593 - 592)][QxGbaLSfky -(806 - 805)]);
    return 0;
}

