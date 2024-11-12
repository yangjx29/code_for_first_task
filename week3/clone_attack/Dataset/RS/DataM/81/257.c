void  main () {
    int change (int *p, int n, int m);
    int a [(937 - 932)] [(980 - 975)], tiGhEKM, j, (*p) [(182 - 177)], *zx0su8cbX;
    int m, n;
    p = a;
    for (tiGhEKM = (314 - 314); tiGhEKM < (52 - 47); tiGhEKM = tiGhEKM + 1) {
        for (j = 0; j < 4; j = j + 1)
            scanf ("%d", *(p + tiGhEKM) + j);
        scanf ("%d\n", *(p + tiGhEKM) + 4);
    }
    scanf ("%d%d", &m, &n);
    zx0su8cbX = *a;
    if (change (zx0su8cbX, n, m))
        for (tiGhEKM = 0; tiGhEKM < 5; tiGhEKM = tiGhEKM + 1) {
            for (j = 0; j < 4; j = j + 1)
                printf ("%d ", *(*(p + tiGhEKM) + j));
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
            printf ("%d\n", *(*(p + tiGhEKM) + 4));
        }
    else
        ;
}

int change (int *p, int n, int m) {
    int tiGhEKM, j, zx0su8cbX;
    if (n < 0 || 4 < n || m < 0 || m > 4)
        tiGhEKM = 0;
    else {
        for (j = 0; j < 5; j = j + 1) {
            zx0su8cbX = *(p + 5 * n + j);
            *(p + 5 * n + j) = *(p + 5 * m + j);
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
            *(p + 5 * m + j) = zx0su8cbX;
        }
        tiGhEKM = 1;
    }
    return (tiGhEKM);
}

