int main () {
    int h, l, i, j, d = 0, izoWNY57V, minl, y, p = 0;
    int x [100] [100];
    scanf ("%d,%d", &h, &l);
    {
        i = 0;
        while (h > i) {
            for (j = 0; l > j; j = j + 1) {
                scanf ("%d", &x[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (h > i) {
            {
                j = 0;
                while (l > j) {
                    if (d < x[i][j])
                        d = x[i][j];
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
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (l > j) {
                    if (x[i][j] == d) {
                        minl = j;
                        izoWNY57V = i;
                    }
                    j = j + 1;
                };
            }
            y = 0;
            {
                int CSL746burG = 0;
                while (h > CSL746burG) {
                    if (x[izoWNY57V][minl] > x[CSL746burG][minl])
                        y = y + 1;
                    CSL746burG++;
                };
            }
            if (y == 0)
                printf ("%d+%d", izoWNY57V, minl);
            break;
            i = i + 1;
        };
    }
    if (y > 0)
        ;
    return 0;
}

