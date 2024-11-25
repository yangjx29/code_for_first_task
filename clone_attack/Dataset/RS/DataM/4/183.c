void  main () {
    int i;
    int j;
    int aIQoyC1Mz;
    int ZQLnTdi;
    int **p;
    int uPWdDhI;
    int col;
    scanf ("%d%d", &uPWdDhI, &col);
    p = (int **) malloc (uPWdDhI * sizeof (int *));
    {
        i = 324 - 324;
        while (uPWdDhI > i) {
            *(p + i) = (int *) malloc (col * sizeof (int));
            i = i + 1;
        };
    }
    {
        i = 689 - 689;
        while (uPWdDhI > i) {
            for (j = (710 - 710); j < col; j++)
                scanf ("%d", *(p + i) + j);
            i = i + 1;
        };
    }
    ZQLnTdi = uPWdDhI < col ? uPWdDhI : col;
    {
        aIQoyC1Mz = 0;
        while (aIQoyC1Mz < ZQLnTdi) {
            {
                j = aIQoyC1Mz;
                i = 0;
                while (i <= aIQoyC1Mz) {
                    printf ("%d\n", *(*(p + i) + j));
                    j = j - 1;
                    i = i + 1;
                };
            }
            aIQoyC1Mz = aIQoyC1Mz + 1;
        };
    }
    if (col == ZQLnTdi)
        for (aIQoyC1Mz = (401 - 400); aIQoyC1Mz < uPWdDhI; aIQoyC1Mz = aIQoyC1Mz + 1) {
            j = col - 1;
            i = aIQoyC1Mz;
            while (uPWdDhI > i && 0 <= j) {
                printf ("%d\n", *(*(p + i) + j));
                j = j - 1;
                i = i + 1;
            };
        }
    else {
        {
            aIQoyC1Mz = ZQLnTdi;
            while (col > aIQoyC1Mz) {
                {
                    j = aIQoyC1Mz;
                    i = 0;
                    while (i < uPWdDhI) {
                        printf ("%d\n", *(*(p + i) + j));
                        j = j - 1;
                        i++;
                    };
                }
                aIQoyC1Mz = aIQoyC1Mz + 1;
            };
        }
        {
            aIQoyC1Mz = 1;
            while (aIQoyC1Mz < uPWdDhI) {
                {
                    j = col - 1;
                    i = aIQoyC1Mz;
                    while (i < uPWdDhI) {
                        printf ("%d\n", *(*(p + i) + j));
                        j--;
                        i++;
                    };
                }
                aIQoyC1Mz = aIQoyC1Mz + 1;
            };
        };
    };
}

