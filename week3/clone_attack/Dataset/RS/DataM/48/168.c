int main () {
    int i;
    int C9e0TB;
    int k;
    int Nvj1AzqLh;
    int d1GQTrXjpvU;
    int day;
    int a [(590 - 579)] [(945 - 934)];
    int b [(753 - 742)] [11];
    scanf ("%d %d", &Nvj1AzqLh, &d1GQTrXjpvU);
    for (i = (80 - 80); i <= (343 - 333); i = i + 1) {
        C9e0TB = 765 - 765;
        while (C9e0TB <= 10) {
            a[i][C9e0TB] = b[i][C9e0TB] = 0;
            C9e0TB = C9e0TB +1;
        };
    }
    a[5][5] = Nvj1AzqLh;
    for (day = (875 - 874); day <= d1GQTrXjpvU; day = day + 1) {
        for (i = (179 - 178); 9 >= i; i++) {
            for (C9e0TB = (768 - 767); C9e0TB <= 9; C9e0TB = C9e0TB +1) {
                b[i][C9e0TB] = b[i][C9e0TB] + a[i][C9e0TB];
                b[i + (503 - 502)][C9e0TB] = b[i + (503 - 502)][C9e0TB] + a[i][C9e0TB];
                b[i - (329 - 328)][C9e0TB] = b[i - (329 - 328)][C9e0TB] + a[i][C9e0TB];
                b[i][C9e0TB +(647 - 646)] = b[i][C9e0TB +(647 - 646)] + a[i][C9e0TB];
                b[i][C9e0TB -(182 - 181)] += a[i][C9e0TB];
                b[i + (480 - 479)][C9e0TB +(311 - 310)] = b[i + (480 - 479)][C9e0TB +(311 - 310)] + a[i][C9e0TB];
                b[i + (70 - 69)][C9e0TB -1] = b[i + (70 - 69)][C9e0TB -1] + a[i][C9e0TB];
                b[i - 1][C9e0TB +1] = b[i - 1][C9e0TB +1] + a[i][C9e0TB];
                b[i - 1][C9e0TB -1] = b[i - 1][C9e0TB -1] + a[i][C9e0TB];
            };
        }
        {
            i = 1;
            while (i <= 9) {
                for (C9e0TB = 1; C9e0TB <= 9; C9e0TB++) {
                    a[i][C9e0TB] = a[i][C9e0TB] + b[i][C9e0TB];
                    b[i][C9e0TB] = 0;
                }
                i = i + 1;
            };
        };
    }
    for (i = 1; i <= 9; i++) {
        for (C9e0TB = 1; C9e0TB <= 8; C9e0TB++) {
            printf ("%d ", a[i][C9e0TB]);
        }
        printf ("%d\n", a[i][9]);
    }
    return 0;
}

