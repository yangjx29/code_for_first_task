int main () {
    int m, n, br0a7n [12] [12], b [12] [12], i, albuVi, k;
    {
        albuVi = 989 - 989;
        while (albuVi <= (40 - 30)) {
            {
                k = 0;
                while (k <= (217 - 207)) {
                    b[albuVi][k] = 0;
                    br0a7n[albuVi][k] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            albuVi = albuVi + 1;
        };
    }
    scanf ("%d %d", &m, &n);
    b[5][5] = m;
    {
        i = 0;
        while (n - (944 - 943) > i) {
            i++;
            {
                albuVi = 397 - 396;
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
                while (albuVi <= (221 - 212)) {
                    for (k = (730 - 729); 9 >= k; k = k + 1) {
                        br0a7n[albuVi][k] = br0a7n[albuVi][k] + (999 - 997) * b[albuVi][k] + b[albuVi - (71 - 70)][k] + b[albuVi][k - (867 - 866)] + b[albuVi + 1][k] + b[albuVi][k + 1] + b[albuVi - 1][k - 1] + b[albuVi + 1][k + 1] + b[albuVi + 1][k - 1] + b[albuVi - 1][k + 1];
                    }
                    albuVi = albuVi + 1;
                };
            }
            {
                albuVi = 1;
                while (albuVi <= 9) {
                    {
                        k = 1;
                        while (k <= 9) {
                            b[albuVi][k] = br0a7n[albuVi][k];
                            br0a7n[albuVi][k] = 0;
                            k++;
                        };
                    }
                    albuVi++;
                };
            };
        };
    }
    {
        albuVi = 1;
        while (albuVi <= 9) {
            {
                k = 1;
                while (k <= 9) {
                    br0a7n[albuVi][k] = br0a7n[albuVi][k] + (247 - 245) * b[albuVi][k] + b[albuVi - 1][k] + b[albuVi][k - 1] + b[albuVi + 1][k] + b[albuVi][k + 1] + b[albuVi - 1][k - 1] + b[albuVi + 1][k + 1] + b[albuVi + 1][k - 1] + b[albuVi - 1][k + 1];
                    k++;
                };
            }
            albuVi++;
        };
    }
    {
        albuVi = 1;
        while (albuVi <= 9) {
            for (k = 1; k < 9; k++) {
                printf ("%d ", br0a7n[albuVi][k]);
            }
            printf ("%d\n", br0a7n[albuVi][9]);
            albuVi++;
        };
    }
    return 0;
}

