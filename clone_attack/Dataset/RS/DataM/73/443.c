int main () {
    int Q4R5Sk;
    int i;
    int j;
    int k;
    int e;
    int m;
    int n;
    int f;
    int ssBDXI [5] [5];
    Q4R5Sk = (381 - 381);
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
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &ssBDXI[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        k = 0;
        while (5 > k) {
            e = 0;
            {
                j = 0;
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
                while (j < 5) {
                    if (ssBDXI[k][j] > e) {
                        e = ssBDXI[k][j];
                        m = j;
                    }
                    j++;
                };
            }
            {
                i = 0;
                while (i < 5) {
                    if (ssBDXI[i][m] < e) {
                        break;
                    }
                    i = i + 1;
                };
            }
            if (i == 5) {
                Q4R5Sk = 1;
                printf ("%d %d %d", k + 1, m + 1, e);
            }
            k = k + 1;
        };
    }
    if (Q4R5Sk == 0) {
        printf ("not found");
    }
    return 0;
}

