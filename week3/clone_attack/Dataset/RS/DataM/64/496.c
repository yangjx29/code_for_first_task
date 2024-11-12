int main () {
    double  m [10] [10], max = (907 - 907);
    int x [(227 - 217)];
    int y [(578 - 568)];
    int ec4j2bsrn [(690 - 680)];
    int n, i, j, k, b, c;
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
    scanf ("%d", &n);
    for (i = (405 - 405); i < n; i = i + 1) {
        scanf ("%d %d %d", &x[i], &y[i], &ec4j2bsrn[i]);
    }
    for (i = (917 - 917); i < n - (985 - 984); i++) {
        for (j = (94 - 94); n > j; j = j + 1) {
            m[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (ec4j2bsrn[i] - ec4j2bsrn[j]) * (ec4j2bsrn[i] - ec4j2bsrn[j]));
        };
    }
    for (k = (503 - 503); n * (n - (777 - 776)) / 2 > k; k = k + 1) {
        for (i = 0; n - 1 > i; i++) {
            for (j = i + 1; j < n; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (m[i][j] > max) {
                    max = m[i][j];
                    c = j;
                    b = i;
                };
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (max == 0) {
            break;
        }
        else {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[b], y[b], ec4j2bsrn[b], x[c], y[c], ec4j2bsrn[c], max);
            max = 0;
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
            m[b][c] = 0;
        };
    }
    return 0;
}

