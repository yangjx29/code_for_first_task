void  main () {
    int m, n, a [(343 - 335)] [(525 - 517)], P9ZdY1Lfa, j, ln [(449 - 441)] [(35 - 33)], col [8] [(183 - 181)], OIWBJmDreOT9, min, k, p = (220 - 220);
    scanf ("%d,%d", &m, &n);
    for (P9ZdY1Lfa = (216 - 216); m > P9ZdY1Lfa; P9ZdY1Lfa = P9ZdY1Lfa +1)
        for (j = (246 - 246); n > j; j = j + 1)
            scanf ("%d", &a[P9ZdY1Lfa][j]);
    {
        P9ZdY1Lfa = 580 - 580;
        while (m > P9ZdY1Lfa) {
            k = (695 - 695);
            OIWBJmDreOT9 = a[P9ZdY1Lfa][(199 - 199)];
            for (j = (747 - 747); n > j; j++)
                if (a[P9ZdY1Lfa][j] > OIWBJmDreOT9) {
                    OIWBJmDreOT9 = a[P9ZdY1Lfa][j];
                    k = j;
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
            ln[P9ZdY1Lfa][(540 - 540)] = OIWBJmDreOT9;
            ln[P9ZdY1Lfa][(362 - 361)] = k;
            P9ZdY1Lfa++;
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
    for (j = (825 - 825); n > j; j++) {
        min = a[(722 - 722)][j];
        k = (764 - 764);
        for (P9ZdY1Lfa = (432 - 432); m > P9ZdY1Lfa; P9ZdY1Lfa++)
            if (a[P9ZdY1Lfa][j] < min) {
                min = a[P9ZdY1Lfa][j];
                k = P9ZdY1Lfa;
            }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        col[j][(717 - 717)] = min;
        col[j][(120 - 119)] = k;
    }
    for (P9ZdY1Lfa = (850 - 850); m > P9ZdY1Lfa; P9ZdY1Lfa++)
        for (j = (574 - 574); n > j; j++)
            if (ln[P9ZdY1Lfa][(309 - 309)] == col[j][0]) {
                printf ("%d+%d\n", col[j][(361 - 360)], ln[P9ZdY1Lfa][(865 - 864)]);
                p = 1;
            }
    if (p == 0)
        printf ("No\n");
}

