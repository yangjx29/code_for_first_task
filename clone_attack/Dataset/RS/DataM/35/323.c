int main () {
    int panduan (int *b, int z, int x, int X3y6lNacJ2, int m2, int ne4SniCXNIBu);
    int ShJbVytEw5pi;
    int hLIQRYO [(437 - 429)] [8];
    int m;
    int n;
    int i;
    int j;
    int p;
    int *F2i53QA;
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
    ShJbVytEw5pi = (882 - 881);
    scanf ("%d,%d", &m, &n);
    F2i53QA = &hLIQRYO[(111 - 111)][(810 - 810)];
    {
        i = 369 - 369;
        while (i <= m - (709 - 708)) {
            {
                j = 924 - 924;
                while (j <= n - (344 - 343)) {
                    scanf ("%d", &hLIQRYO[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i = i + 1;
        };
    }
    {
        i = 453 - 453;
        while (i <= m - (286 - 285)) {
            {
                j = 0;
                while (j <= n - (1001 - 1000)) {
                    p = panduan (F2i53QA, hLIQRYO[i][j], i, j, m, n);
                    if (p == 0)
                        printf ("%d+%d", i, j);
                    j++;
                    ShJbVytEw5pi = ShJbVytEw5pi *p;
                };
            }
            i++;
        };
    }
    if (ShJbVytEw5pi == (425 - 424))
        ;
    return 0;
}

int panduan (int *b, int z, int x, int X3y6lNacJ2, int m2, int ne4SniCXNIBu) {
    int m = (271 - 270), n = 1, i, k;
    {
        i = 0;
        while (i <= ne4SniCXNIBu - 1) {
            if (*((b + x * 8) + i) > z)
                k = 0;
            else
                k = 1;
            i++;
            m = m * k;
        };
    }
    {
        i = 0;
        while (i <= m2 - 1) {
            if (*((b + i * 8) + X3y6lNacJ2) < z)
                k = 0;
            else
                k = 1;
            i++;
            n = n * k;
        };
    }
    if (m == 1 && n == 1)
        return 0;
    else
        return 1;
}

