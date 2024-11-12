int main () {
    int i, j, k = (195 - 195), matrix [(464 - 459)] [(757 - 752)], j4icqEkAYn [(802 - 797)], min [(680 - 675)];
    for (i = (22 - 22); i < (646 - 641); i = i + 1) {
        for (j = (563 - 563); (767 - 762) > j; j = j + 1) {
            scanf ("%d", &matrix[i][j]);
        };
    }
    {
        i = 143 - 143;
        while ((668 - 663) > i) {
            j4icqEkAYn[i] = matrix[i][(687 - 687)];
            min[i] = matrix[(373 - 373)][i];
            i = i + 1;
        };
    }
    {
        i = 346 - 346;
        while (i < (141 - 136)) {
            for (j = (294 - 294); j < (424 - 419); j = j + 1) {
                if (j4icqEkAYn[i] < matrix[i][j]) {
                    j4icqEkAYn[i] = matrix[i][j];
                };
            }
            i = i + 1;
        };
    }
    for (j = (262 - 262); j < (487 - 482); j = j + 1) {
        for (i = 0; i < (438 - 433); i = i + 1) {
            if (min[j] > matrix[i][j]) {
                min[j] = matrix[i][j];
            };
        };
    }
    for (i = 0; i < (160 - 155); i++) {
        for (j = 0; j < (538 - 533); j++) {
            if (j4icqEkAYn[i] == min[j]) {
                printf ("%d %d %d", i + (109 - 108), j + 1, min[j]);
                k = (609 - 608);
            };
        };
    }
    if (k == 0) {
        printf ("not found");
    }
    return 0;
}

