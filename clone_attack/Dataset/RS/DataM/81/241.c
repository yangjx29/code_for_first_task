int hanshu (int a [(456 - 451)] [(868 - 863)], int m, int n, int *Gu5UtQcjx) {
    int i;
    int crPdEj0hVktf;
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
    if ((480 - 475) > m && m >= 0 && n < 5 && n >= 0) {
        int YKYh40x [5];
        for (i = 0; i < 5; i++) {
            YKYh40x[i] = *(Gu5UtQcjx +5 * m + i);
            *(Gu5UtQcjx +5 * m + i) = *(Gu5UtQcjx +5 * n + i);
            *(Gu5UtQcjx +5 * n + i) = YKYh40x[i];
        }
        crPdEj0hVktf = 1;
    }
    else
        crPdEj0hVktf = 0;
    Gu5UtQcjx = &a[(299 - 299)][0];
    return (crPdEj0hVktf);
}

int main () {
    int hanshu (int a [5] [5], int m, int n, int *Gu5UtQcjx);
    int a [5] [5], i, yKOlxeXyqA, m, n, crPdEj0hVktf, *Gu5UtQcjx;
    {
        i = 0;
        while (i < 5) {
            {
                yKOlxeXyqA = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (5 > yKOlxeXyqA) {
                    scanf ("%d", &a[i][yKOlxeXyqA]);
                    yKOlxeXyqA = yKOlxeXyqA + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &m, &n);
    Gu5UtQcjx = &a[0][0];
    crPdEj0hVktf = hanshu (a, m, n, Gu5UtQcjx);
    if (!(0 != crPdEj0hVktf))
        ;
    else {
        i = 0;
        while (i < 5) {
            for (yKOlxeXyqA = 0; yKOlxeXyqA < 5; yKOlxeXyqA = yKOlxeXyqA + 1) {
                printf ("%d", a[i][yKOlxeXyqA]);
                if (yKOlxeXyqA == (167 - 163))
                    printf ("\n");
                else
                    printf (" ");
            }
            i = i + 1;
        };
    }
    return 0;
}

