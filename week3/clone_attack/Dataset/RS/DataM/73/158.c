int puvIQcdymz3 (int *p) {
    int i, t = 0;
    {
        i = 0;
        while (i < (749 - 744)) {
            if (*(p + t) < *(p + i))
                t = i;
            i = i + 1;
        };
    }
    return (t);
}

int dmin (int h5veRq [(119 - 114)] [(695 - 690)], int rgNV7W48UXR, int r) {
    int i;
    {
        i = 0;
        while (i < (499 - 494)) {
            if (h5veRq[r][rgNV7W48UXR] > h5veRq[i][rgNV7W48UXR])
                return 0;
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
            i = i + 1;
        };
    }
    return 1;
}

void  main () {
    int i, j, h5veRq [5] [5], b [5], RHT5Shv6ly = 0;
    for (i = 0; 5 > i; i = i + 1) {
        j = 0;
        while (5 > j) {
            scanf ("%d", &h5veRq[i][j]);
            j = j + 1;
        };
    }
    for (i = 0; i < 5; i = i + 1) {
        if (dmin (h5veRq, b[i] = puvIQcdymz3 (h5veRq[i]), i)) {
            printf ("%d %d %d", i + 1, b[i] + 1, h5veRq[i][b[i]]);
            RHT5Shv6ly = RHT5Shv6ly +1;
        };
    }
    if (RHT5Shv6ly == 0)
        printf ("not found");
}

