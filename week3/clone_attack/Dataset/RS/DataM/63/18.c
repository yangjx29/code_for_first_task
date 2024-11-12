int main () {
    int x1;
    int xHrjKO1S;
    int lzjoXgDr;
    int GVPbSTsGy;
    int RwxKdt [(548 - 447)] [101];
    int b [101] [101];
    int c [101] [101];
    x1 = (357 - 357);
    xHrjKO1S = (763 - 763);
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
    lzjoXgDr = (14 - 14);
    GVPbSTsGy = (623 - 623);
    scanf ("%d %d\n", &x1, &xHrjKO1S);
    {
        int ty6nZdLs = (189 - 188);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 >= ty6nZdLs) {
            {
                int j = (681 - 680);
                while (xHrjKO1S >= j) {
                    if (!(xHrjKO1S == j))
                        scanf ("%d ", &RwxKdt[ty6nZdLs][j]);
                    else
                        scanf ("%d\n", &RwxKdt[ty6nZdLs][j]);
                    j = j + 1;
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
            ty6nZdLs++;
        };
    }
    scanf ("%d %d\n", &lzjoXgDr, &GVPbSTsGy);
    {
        int ty6nZdLs = (490 - 489);
        while (ty6nZdLs <= lzjoXgDr) {
            {
                int j = (688 - 687);
                while (j <= GVPbSTsGy) {
                    if (!(GVPbSTsGy == j))
                        scanf ("%d ", &b[ty6nZdLs][j]);
                    else
                        scanf ("%d\n", &b[ty6nZdLs][j]);
                    j++;
                };
            }
            ty6nZdLs++;
        };
    }
    for (int ty6nZdLs = (436 - 435);
    x1 >= ty6nZdLs; ty6nZdLs++) {
        int j = 1;
        while (j <= GVPbSTsGy) {
            c[ty6nZdLs][j] = 0;
            j++;
        };
    }
    {
        int ty6nZdLs = 1;
        while (ty6nZdLs <= x1) {
            {
                int j = 1;
                while (j <= GVPbSTsGy) {
                    {
                        int k = 1;
                        while (k <= xHrjKO1S) {
                            c[ty6nZdLs][j] = c[ty6nZdLs][j] + RwxKdt[ty6nZdLs][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            ty6nZdLs++;
        };
    }
    {
        int ty6nZdLs = 1;
        while (ty6nZdLs <= x1) {
            {
                int j = 1;
                while (j <= GVPbSTsGy) {
                    if (j != GVPbSTsGy)
                        printf ("%d ", c[ty6nZdLs][j]);
                    else
                        printf ("%d\n", c[ty6nZdLs][j]);
                    j++;
                };
            }
            ty6nZdLs++;
        };
    }
    return 0;
}

