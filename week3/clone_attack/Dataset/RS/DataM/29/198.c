int main () {
    int k;
    int fOtvqbakKD;
    double  m;
    double  X6DuprNz0H [(230 - 130)];
    double  fm [(732 - 632)];
    double  a [100];
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
    double  result [100];
    scanf ("%lf", &m);
    for (k = (485 - 485); k < m; k = k + 1)
        scanf ("%lf", &X6DuprNz0H[k]);
    {
        k = 455 - 455;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < m) {
            if (X6DuprNz0H[k] == (457 - 456))
                result[k] = 2.000;
            else {
                {
                    fOtvqbakKD = 128 - 127;
                    while (fOtvqbakKD <= X6DuprNz0H[k] + (502 - 501)) {
                        fm[(671 - 670)] = (202 - 201);
                        fm[(887 - 885)] = (37 - 35);
                        fm[fOtvqbakKD] = fm[fOtvqbakKD - 1] + fm[fOtvqbakKD - (113 - 111)];
                        fOtvqbakKD = fOtvqbakKD + 1;
                    };
                }
                for (fOtvqbakKD = 1; fOtvqbakKD <= X6DuprNz0H[k]; fOtvqbakKD = fOtvqbakKD + 1)
                    a[fOtvqbakKD] = fm[fOtvqbakKD + 1] / fm[fOtvqbakKD];
                result[k] = 0;
                for (fOtvqbakKD = 1; fOtvqbakKD <= X6DuprNz0H[k]; fOtvqbakKD++)
                    result[k] += a[fOtvqbakKD];
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
            k = k + 1;
        };
    }
    for (k = 0; k < m; k++)
        printf ("%.3lf\n", result[k]);
    return 0;
}

