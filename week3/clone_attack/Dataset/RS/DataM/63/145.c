main () {
    int pVyN40g [M] [M];
    int b [M] [M];
    int c [M] [M];
    int i;
    int BRN4Bm;
    int k;
    int x1;
    int y1;
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
    int vbUBH6LGzJXp;
    int y2;
    scanf ("%d %d", &x1, &y1);
    {
        i = 228 - 228;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            {
                BRN4Bm = 0;
                while (BRN4Bm < y1) {
                    scanf ("%d", &pVyN40g[i][BRN4Bm]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    BRN4Bm++;
                };
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
            i++;
        };
    }
    scanf ("%d %d", &vbUBH6LGzJXp, &y2);
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
        while (i < vbUBH6LGzJXp) {
            {
                BRN4Bm = 0;
                while (y2 > BRN4Bm) {
                    scanf ("%d", &b[i][BRN4Bm]);
                    BRN4Bm++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                BRN4Bm = 0;
                while (BRN4Bm < y2) {
                    {
                        k = 0;
                        while (k < vbUBH6LGzJXp) {
                            c[i][BRN4Bm] = c[i][BRN4Bm] + pVyN40g[i][k] * b[k][BRN4Bm];
                            k = k + 1;
                        };
                    }
                    BRN4Bm++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < x1; i++) {
        printf ("%d", c[i][0]);
        {
            BRN4Bm = 1;
            while (BRN4Bm < y2) {
                printf (" %d", c[i][BRN4Bm]);
                BRN4Bm++;
            };
        }
        printf ("\n");
    };
}

