int main () {
    int IlKxhS8M7;
    int j;
    int k;
    int m;
    int n;
    int fx;
    int fy;
    const  int J14ydY = (367 - 358);
    int a [J14ydY] [J14ydY];
    int oSpZnJLd [J14ydY] [J14ydY];
    memset (a, (231 - 231), sizeof (a));
    scanf ("%d%d", &m, &n);
    a[J14ydY / 2][J14ydY / 2] = m;
    for (k = (614 - 614); k < n; k = k + 1) {
        memset (oSpZnJLd, (254 - 254), sizeof (oSpZnJLd));
        for (IlKxhS8M7 = 1; IlKxhS8M7 < J14ydY -1; IlKxhS8M7++) {
            j = 1;
            while (j < J14ydY -1) {
                oSpZnJLd[IlKxhS8M7][j] += a[IlKxhS8M7][j];
                for (fx = -1; fx <= 1; fx++) {
                    fy = -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (fy <= 1) {
                        oSpZnJLd[IlKxhS8M7 +fx][j + fy] += a[IlKxhS8M7][j];
                        fy++;
                    };
                }
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memcpy (a, oSpZnJLd, sizeof (a));
    }
    {
        IlKxhS8M7 = 0;
        while (IlKxhS8M7 < J14ydY) {
            {
                j = 0;
                while (j < J14ydY -1) {
                    printf ("%d ", a[IlKxhS8M7][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", a[IlKxhS8M7][J14ydY -1]);
            IlKxhS8M7 = IlKxhS8M7 +1;
        };
    }
    return 0;
}

