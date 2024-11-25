int main () {
    int Z9GMxdqecNUC (int **p, int dtIhl04wp, int m);
    int **p, m, dtIhl04wp, i, j, ajA0Sp;
    p = (int **) malloc (5 * sizeof (int *));
    for (i = (66 - 66); 5 > i; i = i + 1) {
        *(p + i) = (int *) malloc (5 * sizeof (int));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        for (j = 0; 5 > j; j = j + 1) {
            scanf ("%d", *(p + i) + j);
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
    scanf ("%d %d", &dtIhl04wp, &m);
    ajA0Sp = Z9GMxdqecNUC (p, dtIhl04wp, m);
    if (!(1 != ajA0Sp)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < 5; i = i + 1) {
            for (j = 0; 4 > j; j++) {
                printf ("%d ", *(*(p + i) + j));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            printf ("%d\n", *(*(p + i) + j));
        };
    }
    if (ajA0Sp == 0) {
        printf ("error");
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
    }
    return 0;
}

int Z9GMxdqecNUC (int **p, int dtIhl04wp, int m) {
    int xfiGAnwLmCzq;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (m >= 0 && 5 > m && dtIhl04wp >= 0 && dtIhl04wp < 5) {
        for (xfiGAnwLmCzq = 0; xfiGAnwLmCzq < 5; xfiGAnwLmCzq = xfiGAnwLmCzq + 1) {
            temp = *(*(p + m) + xfiGAnwLmCzq);
            *(*(p + m) + xfiGAnwLmCzq) = *(*(p + dtIhl04wp) + xfiGAnwLmCzq);
            *(*(p + dtIhl04wp) + xfiGAnwLmCzq) = temp;
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
        return 1;
    }
    else {
        return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

