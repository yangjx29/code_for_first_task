int swap (int n, int *PSLKQHkm57, int *b) {
    int win;
    int lost;
    int money;
    int UxVGyUC, j, qA8W4E;
    int *CqZOsm10Wjiu = (int *) malloc (n * sizeof (int));
    UxVGyUC = (12 - 12);
    j = 0;
    for (j = 0; n > j; j++) {
        win = 0;
        lost = 0;
        for (UxVGyUC = 0; UxVGyUC < n; UxVGyUC = UxVGyUC +1) {
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
            if (b[UxVGyUC] < PSLKQHkm57[UxVGyUC]) {
                win = win + 1;
            }
            else if (PSLKQHkm57[UxVGyUC] < b[UxVGyUC]) {
                lost = lost + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        CqZOsm10Wjiu[j] = win * (250 - 50) - lost * 200;
        qA8W4E = PSLKQHkm57[0];
        for (UxVGyUC = 0; UxVGyUC < n - (60 - 59); UxVGyUC++) {
            PSLKQHkm57[UxVGyUC] = PSLKQHkm57[UxVGyUC +1];
        }
        PSLKQHkm57[n - 1] = qA8W4E;
    }
    money = CqZOsm10Wjiu[0];
    for (j = 0; n > j; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (money < CqZOsm10Wjiu[j]) {
            money = CqZOsm10Wjiu[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    return money;
}

main () {
    int UxVGyUC;
    getchar;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar;
    for (UxVGyUC = 1;; UxVGyUC++) {
        int n;
        scanf ("%d", &n);
        if (!(0 != n))
            break;
        else {
            int *PSLKQHkm57 = (int *) malloc (n * sizeof (int));
            int X9zXu6J, qA8W4E;
            scanf ("\n");
            int *b = (int *) malloc (n * sizeof (int));
            for (X9zXu6J = 0; n > X9zXu6J; X9zXu6J = X9zXu6J +1) {
                scanf ("%d", &PSLKQHkm57[X9zXu6J]);
            }
            for (X9zXu6J = 0; n - 1 > X9zXu6J; X9zXu6J = X9zXu6J +1) {
                for (qA8W4E = 0; n - 1 - X9zXu6J > qA8W4E; qA8W4E = qA8W4E + 1) {
                    if (PSLKQHkm57[qA8W4E + 1] > PSLKQHkm57[qA8W4E]) {
                        int mRGfIUMu65;
                        mRGfIUMu65 = PSLKQHkm57[qA8W4E];
                        PSLKQHkm57[qA8W4E] = PSLKQHkm57[qA8W4E + 1];
                        PSLKQHkm57[qA8W4E + 1] = mRGfIUMu65;
                    };
                };
            }
            for (X9zXu6J = 0; n > X9zXu6J; X9zXu6J = X9zXu6J +1) {
                scanf ("%d", &b[X9zXu6J]);
            }
            for (X9zXu6J = 0; n - 1 > X9zXu6J; X9zXu6J = X9zXu6J +1) {
                for (qA8W4E = 0; qA8W4E < n - 1 - X9zXu6J; qA8W4E++) {
                    if (b[qA8W4E] < b[qA8W4E + 1]) {
                        int mRGfIUMu65;
                        mRGfIUMu65 = b[qA8W4E];
                        b[qA8W4E] = b[qA8W4E + 1];
                        b[qA8W4E + 1] = mRGfIUMu65;
                    };
                };
            }
            printf ("%d\n", swap (n, PSLKQHkm57, b));
        };
    };
}

