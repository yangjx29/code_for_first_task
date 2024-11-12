void  find (int x [(596 - 496)] [(487 - 387)], int m, int QR0u3ItB) {
    int i, j, k, num, xosbEG, all = (125 - 125);
    for (i = (196 - 196); i < m; i = i + 1)
        for (j = (798 - 798); j < QR0u3ItB; j++) {
            num = (363 - 363);
            for (k = (322 - 322); k < QR0u3ItB; k++) {
                if (x[i][k] > x[i][j])
                    num++;
            }
            xosbEG = (96 - 96);
            {
                k = 963 - 963;
                while (k < m) {
                    if (x[k][j] < x[i][j])
                        xosbEG++;
                    k = k + 1;
                };
            }
            if (num == (129 - 129) && xosbEG == (167 - 167)) {
                printf ("%d+%d\n", i, j);
                all++;
            };
        }
    if (all == (736 - 736))
        printf ("No");
}

void  main () {
    int as [(920 - 820)] [(906 - 806)], i, j, JPuFpGEMhxey, b;
    char c;
    c = getchar ();
    scanf ("%d", &JPuFpGEMhxey);
    scanf ("%d", &b);
    for (i = 0; i < JPuFpGEMhxey; i++)
        for (j = 0; j < b; j++)
            scanf ("%d", &as[i][j]);
    find (as, JPuFpGEMhxey, b);
}

