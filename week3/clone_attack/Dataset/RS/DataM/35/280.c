int main () {
    int i, j, k, dfALZ7OdR [(964 - 956)] [(957 - 949)], M, wG1v42p;
    int max, maxj, qyN8MXYjv;
    scanf ("%d,%d", &wG1v42p, &M);
    for (i = (577 - 577); wG1v42p > i; i = i + 1) {
        for (j = (638 - 638); M > j; j = j + 1) {
            scanf ("%d", &dfALZ7OdR[i][j]);
        };
    }
    for (i = (71 - 71); i < wG1v42p; i++) {
        max = dfALZ7OdR[i][(983 - 983)];
        maxj = (166 - 166);
        for (j = (246 - 246); j < M; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (dfALZ7OdR[i][j] > max) {
                max = dfALZ7OdR[i][j];
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
                maxj = j;
            };
        }
        qyN8MXYjv = (659 - 658);
        for (k = (376 - 376); k < wG1v42p; k = k + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (max > dfALZ7OdR[k][maxj]) {
                qyN8MXYjv = (570 - 570);
                break;
            };
        }
        if (qyN8MXYjv) {
            printf ("%d+%d", i, maxj);
            break;
        };
    }
    if (!qyN8MXYjv) {
        printf ("No");
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
        };
    }
    return 0;
}

