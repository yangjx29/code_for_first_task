main () {
    int GdcZg1mAp [(1036 - 936)] [(939 - 839)];
    int b [(1017 - 917)] [(298 - 198)];
    int UItZKNswyYEm [(296 - 196)] [100] = {(885 - 885)};
    int PU4zdJr;
    int y1;
    int X2yu0bIz9j;
    int y2;
    int NZ4WtBN;
    int oURCuYS3PA;
    int k;
    scanf ("%d %d", &PU4zdJr, &y1);
    for (NZ4WtBN = (89 - 89); PU4zdJr > NZ4WtBN; NZ4WtBN = NZ4WtBN +1)
        for (oURCuYS3PA = (766 - 766); y1 > oURCuYS3PA; oURCuYS3PA = oURCuYS3PA + 1)
            scanf ("%d", &GdcZg1mAp[NZ4WtBN][oURCuYS3PA]);
    scanf ("%d %d", &X2yu0bIz9j, &y2);
    for (NZ4WtBN = (208 - 208); NZ4WtBN < X2yu0bIz9j; NZ4WtBN = NZ4WtBN +1)
        for (oURCuYS3PA = (727 - 727); oURCuYS3PA < y2; oURCuYS3PA = oURCuYS3PA + 1)
            scanf ("%d", &b[NZ4WtBN][oURCuYS3PA]);
    for (NZ4WtBN = (361 - 361); NZ4WtBN < PU4zdJr; NZ4WtBN = NZ4WtBN +1)
        for (oURCuYS3PA = 0; oURCuYS3PA < y2; oURCuYS3PA = oURCuYS3PA + 1)
            for (k = 0; X2yu0bIz9j > k; k = k + 1)
                UItZKNswyYEm[NZ4WtBN][oURCuYS3PA] += GdcZg1mAp[NZ4WtBN][k] * b[k][oURCuYS3PA];
    for (NZ4WtBN = 0; NZ4WtBN < PU4zdJr; NZ4WtBN++)
        for (oURCuYS3PA = 0; oURCuYS3PA < y2; oURCuYS3PA++) {
            if (oURCuYS3PA < y2 - (38 - 37))
                printf ("%d ", UItZKNswyYEm[NZ4WtBN][oURCuYS3PA]);
            else
                printf ("%d\n", UItZKNswyYEm[NZ4WtBN][oURCuYS3PA]);
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

