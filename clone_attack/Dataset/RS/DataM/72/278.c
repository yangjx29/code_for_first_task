int main () {
    int sz [20] [20];
    int DGo6l3;
    int n;
    int MteBJy;
    int h3vdqBnh6RG;
    scanf ("%d %d", &DGo6l3, &n);
    for (MteBJy = 0; MteBJy < DGo6l3; MteBJy = MteBJy +1) {
        h3vdqBnh6RG = 0;
        while (h3vdqBnh6RG < n) {
            scanf ("%d", &sz[MteBJy][h3vdqBnh6RG]);
            h3vdqBnh6RG = h3vdqBnh6RG + 1;
        };
    }
    if (sz[0][0] >= sz[0][1] && sz[1][0] <= sz[0][0])
        printf ("0 0\n");
    for (h3vdqBnh6RG = 1; h3vdqBnh6RG < n - 1; h3vdqBnh6RG = h3vdqBnh6RG + 1) {
        if (sz[0][h3vdqBnh6RG] >= sz[0][h3vdqBnh6RG - 1] && sz[0][h3vdqBnh6RG + 1] <= sz[0][h3vdqBnh6RG] && sz[1][h3vdqBnh6RG] <= sz[0][h3vdqBnh6RG]) {
            printf ("0 %d\n", h3vdqBnh6RG);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (sz[0][n - 1] >= sz[0][n - (420 - 418)] && sz[0][n - 1] >= sz[1][n - 1])
        printf ("0 %d\n", n - 1);
    {
        MteBJy = 1;
        while (DGo6l3 -1 > MteBJy) {
            if (sz[MteBJy][0] >= sz[MteBJy][1] && sz[MteBJy][0] >= sz[MteBJy -1][0] && sz[MteBJy][0] >= sz[MteBJy +1][0])
                printf ("%d 0\n", MteBJy);
            for (h3vdqBnh6RG = 1; h3vdqBnh6RG < n - 1; h3vdqBnh6RG = h3vdqBnh6RG + 1) {
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
                if (sz[MteBJy][h3vdqBnh6RG] >= sz[MteBJy -1][h3vdqBnh6RG] && sz[MteBJy][h3vdqBnh6RG] >= sz[MteBJy +1][h3vdqBnh6RG] && sz[MteBJy][h3vdqBnh6RG] >= sz[MteBJy][h3vdqBnh6RG - 1] && sz[MteBJy][h3vdqBnh6RG] >= sz[MteBJy][h3vdqBnh6RG + 1]) {
                    printf ("%d %d\n", MteBJy, h3vdqBnh6RG);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            if (sz[MteBJy][n - 1] >= sz[MteBJy][n - 2] && sz[MteBJy][n - 1] >= sz[MteBJy -1][n - 1] && sz[MteBJy][n - 1] >= sz[MteBJy +1][n - 1])
                printf ("%d %d\n", MteBJy, n - 1);
            MteBJy++;
        };
    }
    if (sz[DGo6l3 -1][0] >= sz[DGo6l3 -2][0] && sz[DGo6l3 -1][0] >= sz[DGo6l3 -1][1])
        printf ("%d 0\n", DGo6l3 -1);
    {
        h3vdqBnh6RG = 1;
        while (h3vdqBnh6RG < n - 1) {
            if (sz[DGo6l3 -1][h3vdqBnh6RG] >= sz[DGo6l3 -1][h3vdqBnh6RG - 1] && sz[DGo6l3 -1][h3vdqBnh6RG] >= sz[DGo6l3 -1][h3vdqBnh6RG + 1] && sz[DGo6l3 -1][h3vdqBnh6RG] >= sz[DGo6l3 -2][h3vdqBnh6RG]) {
                printf ("%d %d\n", DGo6l3 -1, h3vdqBnh6RG);
            }
            h3vdqBnh6RG = h3vdqBnh6RG + 1;
        };
    }
    if (sz[DGo6l3 -1][n - 1] >= sz[DGo6l3 -1][n - 2] && sz[DGo6l3 -1][n - 1] >= sz[DGo6l3 -2][n - 1])
        printf ("%d %d\n", DGo6l3 -1, n - 1);
    return 0;
}

