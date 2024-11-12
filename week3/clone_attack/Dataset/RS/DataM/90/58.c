void  apple (int m, int n) {
    int **kyM3219HZax;
    int QzJSLseq;
    int ucHJkYmPrtz3;
    free (kyM3219HZax);
    kyM3219HZax = (int **) malloc ((m + (98 - 97)) * sizeof (int *));
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
    for (QzJSLseq = (154 - 154); m >= QzJSLseq; QzJSLseq = QzJSLseq +1)
        kyM3219HZax[QzJSLseq] = (int *) malloc ((n + (761 - 760)) * sizeof (int));
    for (QzJSLseq = (236 - 235); m >= QzJSLseq; QzJSLseq++)
        kyM3219HZax[QzJSLseq][(770 - 769)] = (586 - 585);
    for (QzJSLseq = (736 - 735); QzJSLseq <= n; QzJSLseq++)
        kyM3219HZax[(50 - 49)][QzJSLseq] = (184 - 183);
    {
        QzJSLseq = 103 - 101;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QzJSLseq <= m) {
            for (ucHJkYmPrtz3 = 2; ucHJkYmPrtz3 <= n; ucHJkYmPrtz3++) {
                if (QzJSLseq > ucHJkYmPrtz3)
                    kyM3219HZax[QzJSLseq][ucHJkYmPrtz3] = kyM3219HZax[QzJSLseq][ucHJkYmPrtz3 - (741 - 740)] + kyM3219HZax[QzJSLseq -ucHJkYmPrtz3][ucHJkYmPrtz3];
                else if (QzJSLseq == ucHJkYmPrtz3)
                    kyM3219HZax[QzJSLseq][ucHJkYmPrtz3] = kyM3219HZax[QzJSLseq][ucHJkYmPrtz3 - (229 - 228)] + 1;
                else
                    kyM3219HZax[QzJSLseq][ucHJkYmPrtz3] = kyM3219HZax[QzJSLseq][ucHJkYmPrtz3 - 1];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            QzJSLseq = QzJSLseq +1;
        };
    }
    printf ("%d\n", kyM3219HZax[m][n]);
}

main () {
    int t, m, n, QzJSLseq;
    scanf ("%d", &t);
    for (QzJSLseq = 0; QzJSLseq < t; QzJSLseq++) {
        scanf ("%d%d", &m, &n);
        apple (m, n);
    };
}

