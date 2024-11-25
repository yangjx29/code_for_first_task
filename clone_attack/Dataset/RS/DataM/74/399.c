void  main () {
    int N8RplI5, PDnK9RzUxbd, p7M6bxgJrz, Tju06xMSylV = 0;
    int iBeDci3qIQs [100];
    int k2LpNSqYe (int iBeDci3qIQs, int g9sGL8M1DidJ);
    int h1FkXx5R (int LASC5X1oO, int xWDwA9S4);
    for (p7M6bxgJrz = 0; 99 >= p7M6bxgJrz; p7M6bxgJrz = p7M6bxgJrz + 1)
        iBeDci3qIQs[p7M6bxgJrz] = 0;
    scanf ("%d%d", &N8RplI5, &PDnK9RzUxbd);
    for (p7M6bxgJrz = N8RplI5; PDnK9RzUxbd >= p7M6bxgJrz; p7M6bxgJrz = p7M6bxgJrz + 1) {
        if (!(1 != k2LpNSqYe (p7M6bxgJrz, 2)) && !(h1FkXx5R (p7M6bxgJrz, 0) != p7M6bxgJrz))
            iBeDci3qIQs[Tju06xMSylV++] = p7M6bxgJrz;
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
    if (iBeDci3qIQs[0] == 0)
        ;
    else {
        printf ("%d", iBeDci3qIQs[0]);
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
        for (p7M6bxgJrz = 1; iBeDci3qIQs[p7M6bxgJrz] > 0; p7M6bxgJrz = p7M6bxgJrz + 1)
            printf (",%d", iBeDci3qIQs[p7M6bxgJrz]);
    };
}

int k2LpNSqYe (int iBeDci3qIQs, int g9sGL8M1DidJ) {
    if (g9sGL8M1DidJ == iBeDci3qIQs)
        return 1;
    else {
        if (iBeDci3qIQs % g9sGL8M1DidJ == 0)
            return 0;
        else
            return (k2LpNSqYe (iBeDci3qIQs, g9sGL8M1DidJ + 1));
    };
}

int h1FkXx5R (int LASC5X1oO, int xWDwA9S4) {
    if (LASC5X1oO == 0)
        return xWDwA9S4;
    else
        return (h1FkXx5R (LASC5X1oO / 10, xWDwA9S4 * 10 + LASC5X1oO % 10));
}

