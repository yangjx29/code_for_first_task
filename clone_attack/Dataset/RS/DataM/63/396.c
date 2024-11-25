int main (int argc, char *argv []) {
    int ri4XJT [(534 - 434)] [100];
    int b [100] [100];
    int x1;
    int y1;
    int xM72bnz5;
    int y2;
    int m;
    int n;
    int i;
    int j;
    int p;
    int q;
    int z;
    int c [100] [100];
    int sum;
    scanf ("%d%d", &x1, &y1);
    {
        i = 257 - 257;
        while (i < x1) {
            {
                j = 471 - 471;
                while (j < y1) {
                    scanf ("%d", &ri4XJT[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &xM72bnz5, &y2);
    {
        p = 0;
        while (p < xM72bnz5) {
            {
                q = 0;
                while (q < y2) {
                    scanf ("%d", &b[p][q]);
                    q++;
                };
            }
            p++;
        };
    }
    {
        m = 0;
        while (x1 > m) {
            {
                n = 0;
                while (y2 > n) {
                    {
                        sum = 0;
                        {
                            z = 0;
                            while (z < y1) {
                                sum = sum + ri4XJT[m][z] * b[z][n];
                                z++;
                            };
                        };
                    }
                    c[m][n] = sum;
                    n = n + 1;
                };
            }
            m++;
        };
    }
    {
        m = 0;
        while (m < x1) {
            printf ("%d", c[m][0]);
            {
                n = 1;
                while (n < y2) {
                    printf (" %d", c[m][n]);
                    n = n + 1;
                };
            }
            m++;
        };
    }
    return 0;
}

