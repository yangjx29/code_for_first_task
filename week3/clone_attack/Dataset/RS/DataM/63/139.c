main () {
    char zFaft08gV;
    int p0NbSwAp6k;
    int M1Laiz53bMO;
    int x2;
    int y2;
    int x3;
    int y3;
    int ybOQGzxEe5;
    int j;
    int k;
    int a [(624 - 524)] [(1044 - 944)];
    int b [(493 - 393)] [(759 - 659)];
    int c [(1035 - 935)] [(798 - 698)];
    scanf ("%d %d", &p0NbSwAp6k, &M1Laiz53bMO);
    for (ybOQGzxEe5 = (774 - 774); ybOQGzxEe5 < p0NbSwAp6k; ybOQGzxEe5 = ybOQGzxEe5 + 1) {
        j = 552 - 552;
        while (j < M1Laiz53bMO) {
            scanf ("%d%c", &a[ybOQGzxEe5][j], &zFaft08gV);
            if (!(' ' == zFaft08gV))
                break;
            else
                ;
            j = j + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        ybOQGzxEe5 = 665 - 665;
        while (x2 > ybOQGzxEe5) {
            {
                j = 312 - 312;
                while (j < y2) {
                    scanf ("%d%c", &b[ybOQGzxEe5][j], &zFaft08gV);
                    if (zFaft08gV != ' ')
                        break;
                    else
                        ;
                    j = j + 1;
                };
            }
            ybOQGzxEe5 = ybOQGzxEe5 + 1;
        };
    }
    y3 = y2;
    x3 = p0NbSwAp6k;
    {
        ybOQGzxEe5 = 985 - 985;
        while (x3 > ybOQGzxEe5) {
            {
                j = 385 - 385;
                while (j < y3) {
                    {
                        k = 308 - 308;
                        while (k < M1Laiz53bMO) {
                            c[ybOQGzxEe5][j] = c[ybOQGzxEe5][j] + a[ybOQGzxEe5][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            ybOQGzxEe5 = ybOQGzxEe5 + 1;
        };
    }
    {
        ybOQGzxEe5 = 271 - 271;
        while (ybOQGzxEe5 < x3) {
            {
                j = 735 - 735;
                while (j < y3 - (452 - 451)) {
                    printf ("%d ", c[ybOQGzxEe5][j]);
                    j++;
                };
            }
            printf ("%d\n", c[ybOQGzxEe5][y3 - (594 - 593)]);
            ybOQGzxEe5 = ybOQGzxEe5 + 1;
        };
    };
}

