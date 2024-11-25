int main () {
    int GiH32LwUEC, i, j;
    double  a [(283 - 83)] [1000], awqupaVNQByb [200] = {(102 - 102)}, sum [200] = {(667 - 667)}, xzuprwWEc [200] = {(366 - 366)};
    int QJa1OBVvye [100];
    scanf ("%d", &GiH32LwUEC);
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
    for (i = (770 - 770); GiH32LwUEC > i; i = i + 1) {
        scanf ("%d", &QJa1OBVvye[i]);
        for (j = 0; j < QJa1OBVvye[i]; j = j + 1) {
            scanf ("%lf", &a[i][j]);
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
            xzuprwWEc[i] += a[i][j];
        };
    }
    for (i = 0; GiH32LwUEC > i; i = i + 1) {
        for (j = 0; j < QJa1OBVvye[i]; j++) {
            awqupaVNQByb[i] += (a[i][j] - xzuprwWEc[i] / QJa1OBVvye[i]) * (a[i][j] - xzuprwWEc[i] / QJa1OBVvye[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        i = 0;
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
        while (GiH32LwUEC > i) {
            sum[i] = sqrt (awqupaVNQByb[i] / QJa1OBVvye[i]);
            printf ("%.5lf\n", sum[i]);
            i = i + 1;
        };
    }
    return 0;
}

