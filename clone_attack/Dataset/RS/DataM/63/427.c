int main () {
    int LXpFnvNJ [(508 - 407)] [101];
    int z2 [101] [101];
    int dApKRwSY [101] [101];
    int xBFkc6, newzSNgaLtrs, CoMnpywh0xQ, QS3QzO, Fcs68O, m5EnPMFvXrt;
    scanf ("%d%d", &xBFkc6, &CoMnpywh0xQ);
    for (QS3QzO = (776 - 775); xBFkc6 >= QS3QzO; QS3QzO = QS3QzO +1) {
        Fcs68O = 584 - 583;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Fcs68O <= CoMnpywh0xQ) {
            scanf ("%d", &LXpFnvNJ[QS3QzO][Fcs68O]);
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
            Fcs68O = Fcs68O +1;
        };
    }
    scanf ("%d%d", &CoMnpywh0xQ, &newzSNgaLtrs);
    for (QS3QzO = 1; CoMnpywh0xQ >= QS3QzO; QS3QzO = QS3QzO +1)
        for (Fcs68O = 1; Fcs68O <= newzSNgaLtrs; Fcs68O = Fcs68O +1)
            scanf ("%d", &z2[QS3QzO][Fcs68O]);
    for (QS3QzO = 1; QS3QzO <= xBFkc6; QS3QzO = QS3QzO +1)
        for (Fcs68O = 1; Fcs68O <= newzSNgaLtrs; Fcs68O = Fcs68O +1) {
            dApKRwSY[QS3QzO][Fcs68O] = (327 - 327);
            for (m5EnPMFvXrt = 1; m5EnPMFvXrt <= CoMnpywh0xQ; m5EnPMFvXrt = m5EnPMFvXrt + 1)
                dApKRwSY[QS3QzO][Fcs68O] = dApKRwSY[QS3QzO][Fcs68O] + LXpFnvNJ[QS3QzO][m5EnPMFvXrt] * z2[m5EnPMFvXrt][Fcs68O];
        }
    for (QS3QzO = 1; QS3QzO <= xBFkc6; QS3QzO++) {
        printf ("%d", dApKRwSY[QS3QzO][1]);
        for (Fcs68O = 2; Fcs68O <= newzSNgaLtrs; Fcs68O++)
            printf (" %d", dApKRwSY[QS3QzO][Fcs68O]);
    };
}

