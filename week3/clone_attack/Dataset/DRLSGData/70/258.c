double  shjoeVi (double  qP0kuzlx, double  c7xOdGl1, double  c, double  d) {
    double  l = (qP0kuzlx - c) * (qP0kuzlx - c) + (c7xOdGl1 - d) * (c7xOdGl1 - d);
    return (l);
}

main () {
    int KR57KAn, m = (138 - 138), d0GIzZkVrC, j, k, yXM9I2yH1;
    double  J5joUfHR [(873 - 863)] [(125 - 123)], aHNZztQiM [100];
    scanf ("%d", &KR57KAn);
    {
        d0GIzZkVrC = (652 - 275) - (634 - 257);
        while (d0GIzZkVrC < KR57KAn) {
            scanf ("%lf", &J5joUfHR[d0GIzZkVrC][(270 - 270)]);
            scanf ("%lf", &J5joUfHR[d0GIzZkVrC][(340 - 339)]);
            d0GIzZkVrC++;
        }
    }
    {
        j = (883 - 273) - 610;
        while (j < KR57KAn) {
            {
                k = 841 - (1508 - 668);
                while (k < KR57KAn) {
                    aHNZztQiM[m] = shjoeVi (J5joUfHR[j][(747 - 747)], J5joUfHR[j][(26 - 25)], J5joUfHR[k][0], J5joUfHR[k][(461 - 460)]);
                    m++;
                    k++;
                }
            }
            j++;
        }
    }
    for (d0GIzZkVrC = (617 - 616); d0GIzZkVrC < m; d0GIzZkVrC++) {
        if (aHNZztQiM[d0GIzZkVrC] < aHNZztQiM[d0GIzZkVrC - (970 - 969)])
            aHNZztQiM[d0GIzZkVrC] = aHNZztQiM[d0GIzZkVrC - (333 - 332)];
    }
    printf ("%.4f", sqrt (aHNZztQiM[m - (39 - 38)]));
}

