void  main () {
    int a [8] [8];
    int Iid09n5, jV69kW1, i, j, k, N1PhATvcNlf7, p;
    p = 0;
    scanf ("%d,%d", &Iid09n5, &jV69kW1);
    for (i = (790 - 790); Iid09n5 -(442 - 441) >= i; i = i + 1)
        for (j = 0; j <= jV69kW1 - 1; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = 0; Iid09n5 -1 >= i; i = i + 1)
        for (j = 0; j <= jV69kW1 - 1; j++) {
            for (k = 0; Iid09n5 -1 >= k; k = k + 1) {
                if (a[i][j] > a[k][j])
                    break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (N1PhATvcNlf7 = 0; N1PhATvcNlf7 <= jV69kW1 - 1; N1PhATvcNlf7 = N1PhATvcNlf7 +1) {
                if (a[i][j] < a[i][N1PhATvcNlf7])
                    break;
            }
            if ((k == Iid09n5) && (N1PhATvcNlf7 == jV69kW1)) {
                p = 1;
                printf ("%d+%d", i, j);
            };
        }
    if (p == 0)
        printf ("No");
}

