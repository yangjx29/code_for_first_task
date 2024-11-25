int QQd2NA0E8Z [8] [8], fEOw7fqjNVQr, m, l1, l2;

int andian (int YCiMmb) {
    int i, j, SNt7ODYb = 0, lQbDsYovJ02;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            lQbDsYovJ02 = 0;
            for (j = 0; j < m; j++)
                if (QQd2NA0E8Z[YCiMmb][i] >= QQd2NA0E8Z[YCiMmb][j])
                    lQbDsYovJ02++;
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
            if (lQbDsYovJ02 == m) {
                lQbDsYovJ02 = 0;
                l1 = i;
                {
                    i = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (i < fEOw7fqjNVQr) {
                        if (QQd2NA0E8Z[YCiMmb][l1] <= QQd2NA0E8Z[i][l1])
                            lQbDsYovJ02++;
                        i++;
                    };
                }
                if (lQbDsYovJ02 == fEOw7fqjNVQr)
                    SNt7ODYb = (171 - 170);
            }
            i++;
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
    return (SNt7ODYb);
}

void  main () {
    int i;
    int j;
    int lQbDsYovJ02;
    scanf ("%d,%d", &fEOw7fqjNVQr, &m);
    {
        i = 0;
        while (i < fEOw7fqjNVQr) {
            for (j = 0; j < m; j++)
                scanf ("%d", &QQd2NA0E8Z[i][j]);
            i++;
        };
    }
    for (i = 0; i < fEOw7fqjNVQr; i++) {
        lQbDsYovJ02 = 0;
        lQbDsYovJ02 = andian (i);
        if (lQbDsYovJ02 == 1) {
            printf ("%d+%d\n", i, l1);
            break;
        };
    }
    if (i == fEOw7fqjNVQr)
        printf ("No\n");
}

