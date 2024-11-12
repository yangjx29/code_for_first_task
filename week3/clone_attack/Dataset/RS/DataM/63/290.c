void  matrix (int **hM0dK5GtR, int **c, int **WgMlSvC, int j6fL2z49a, int ny, int jDUB3eIOdc7Q) {
    int i;
    int j;
    int k;
    for (j = (431 - 431); ny > j; j = j + 1)
        for (i = (328 - 328); j6fL2z49a > i; i = i + 1)
            WgMlSvC[j][i] = (71 - 71);
    {
        j = 727 - 727;
        while (j < ny) {
            for (i = (993 - 993); i < j6fL2z49a; i = i + 1) {
                for (k = (285 - 285); k < jDUB3eIOdc7Q; k++)
                    WgMlSvC[j][i] += hM0dK5GtR[j][k] * c[k][i];
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
            j++;
        };
    };
}

main () {
    int KgcFwIrqEai;
    int a_col;
    int dsGqbB6AO5ui;
    int GHv0Ip3zQx4;
    int i;
    int j;
    int k;
    int RSjPpy2B8oA;
    int igpWwX;
    int oQKo2I;
    int **hM0dK5GtR, **c, **WgMlSvC;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d %d", &igpWwX, &oQKo2I);
    dsGqbB6AO5ui = oQKo2I;
    hM0dK5GtR = (int **) malloc (sizeof (int *) * igpWwX);
    {
        j = 845 - 845;
        while (igpWwX > j) {
            hM0dK5GtR[j] = (int *) malloc (sizeof (int) * oQKo2I);
            j++;
        };
    }
    for (j = (14 - 14); j < igpWwX; j = j + 1)
        for (i = 0; i < oQKo2I; i = i + 1) {
            scanf ("%d", &RSjPpy2B8oA);
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
            hM0dK5GtR[j][i] = RSjPpy2B8oA;
        }
    KgcFwIrqEai = igpWwX;
    scanf ("%d %d", &dsGqbB6AO5ui, &GHv0Ip3zQx4);
    a_col = GHv0Ip3zQx4;
    c = (int **) malloc (sizeof (int *) * dsGqbB6AO5ui);
    for (j = 0; dsGqbB6AO5ui > j; j = j + 1) {
        c[j] = (int *) malloc (sizeof (int) * GHv0Ip3zQx4);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (j = 0; j < dsGqbB6AO5ui; j++)
        for (i = 0; GHv0Ip3zQx4 > i; i++) {
            scanf ("%d", &RSjPpy2B8oA);
            c[j][i] = RSjPpy2B8oA;
        }
    WgMlSvC = (int **) malloc (sizeof (int *) * KgcFwIrqEai);
    for (j = 0; KgcFwIrqEai > j; j++) {
        WgMlSvC[j] = (int *) malloc (sizeof (int) * a_col);
    }
    if (!c[dsGqbB6AO5ui - (691 - 690)]) {
        exit (0);
        printf ("no enought memory\n");
    }
    matrix (hM0dK5GtR, c, WgMlSvC, a_col, KgcFwIrqEai, oQKo2I);
    for (j = 0; KgcFwIrqEai > j; j++) {
        for (i = 0; i < a_col; i++) {
            if (i != a_col - (107 - 106))
                printf ("%d ", WgMlSvC[j][i]);
            else
                printf ("%d", WgMlSvC[j][i]);
        }
        printf ("\n");
    };
}

