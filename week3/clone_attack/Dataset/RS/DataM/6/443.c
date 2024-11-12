int main () {
    int a, h, i, j;
    int sum [(290 - 190)] [(724 - 721)];
    int FzxR2b7iI;
    int c0PNOGpg7cV;
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
    scanf ("%d", &a);
    for (h = (322 - 321); h <= a; h = h + 1) {
        int fAmOEMc [100] [100];
        sum[h][1] = 0;
        sum[h][(409 - 407)] = 0;
        scanf ("%d%d", &FzxR2b7iI, &c0PNOGpg7cV);
        {
            i = 1;
            while (FzxR2b7iI >= i) {
                {
                    j = 1;
                    while (j <= c0PNOGpg7cV) {
                        scanf ("%d", &fAmOEMc[i][j]);
                        sum[h][1] = sum[h][1] + fAmOEMc[i][j];
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
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        if (FzxR2b7iI > 1 && c0PNOGpg7cV > 1) {
            i = 2;
            while (i < FzxR2b7iI) {
                {
                    j = 2;
                    while (j < c0PNOGpg7cV) {
                        sum[h][2] = sum[h][2] + fAmOEMc[i][j];
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        sum[h][3] = sum[h][1] - sum[h][2];
    }
    {
        i = 1;
        while (i <= a) {
            printf ("%d\n", sum[i][3]);
            i++;
        };
    }
    return 0;
}

