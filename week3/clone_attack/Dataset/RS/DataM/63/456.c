int main () {
    int a [(857 - 357)] [500];
    int b [500] [500];
    int c [500] [500];
    int h;
    int j;
    int k;
    int x1;
    int y1;
    int x2;
    int cRFEPGl;
    scanf ("%d %d", &x1, &y1);
    for (h = (546 - 546); x1 > h; h = h + 1) {
        j = 182 - 182;
        while (y1 > j) {
            scanf ("%d", &a[h][j]);
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
            j = j + 1;
        };
    }
    scanf ("%d %d", &x2, &cRFEPGl);
    {
        h = 627 - 627;
        while (x2 > h) {
            {
                j = 372 - 372;
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
                while (cRFEPGl > j) {
                    scanf ("%d", &b[h][j]);
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            h = h + 1;
        };
    }
    {
        h = 797 - 797;
        while (h < x1) {
            {
                j = 0;
                while (j < cRFEPGl) {
                    c[h][j] = 0;
                    {
                        k = 0;
                        while (k < y1) {
                            c[h][j] = c[h][j] + a[h][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    if (j == cRFEPGl - 1)
                        printf ("%d\n", c[h][j]);
                    else
                        printf ("%d ", c[h][j]);
                    j = j + 1;
                };
            }
            h = h + 1;
        };
    };
}

