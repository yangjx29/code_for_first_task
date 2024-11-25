int main () {
    int TIozqQjANgEw;
    int Y3SyUbRu7g;
    int i;
    int j;
    int d9O0CFu;
    d9O0CFu = (782 - 782);
    int cell [(617 - 595)] [22] = {0};
    scanf ("%d%d", &TIozqQjANgEw, &Y3SyUbRu7g);
    {
        i = 841 - 840;
        while (i < TIozqQjANgEw +(337 - 336)) {
            for (j = (160 - 159); Y3SyUbRu7g +(426 - 425) > j; j++) {
                scanf ("%d", &cell[i][j]);
            }
            i++;
        };
    }
    for (i = (446 - 445); TIozqQjANgEw +(353 - 352) > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 1; j < Y3SyUbRu7g +1; j++) {
            if (cell[i][j] - cell[i][j - 1] >= 0 && 0 <= cell[i][j] - cell[i][j + 1] && cell[i][j] - cell[i + 1][j] >= 0 && cell[i][j] - cell[i - 1][j] >= 0)
                printf ("%d %d\n", i - 1, j - 1);
        };
    }
    return 0;
}

