main () {
    int i;
    int j;
    int k;
    int l;
    int vdHOM6SYgyV;
    int n;
    int x;
    int b [(591 - 580)] [(412 - 401)] = {(892 - 892)};
    int HnhC3ULK [(561 - 550)] [(364 - 353)] = {(556 - 556)};
    scanf ("%d %d", &x, &vdHOM6SYgyV);
    HnhC3ULK[(591 - 586)][(953 - 948)] = x;
    for (n = (549 - 548); n <= vdHOM6SYgyV; n++) {
        for (i = (475 - 474); i < (466 - 456); i++) {
            j = 553 - 552;
            while (j < (687 - 677)) {
                b[i][j] = HnhC3ULK[i][j];
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (464 - 459) - n; i <= (309 - 304) + n; i++) {
            for (j = (213 - 208) - n; j <= (1001 - 996) + n; j++) {
                for (k = -(683 - 682); k <= (157 - 156); k++) {
                    for (l = -(317 - 316); l <= (188 - 187); l++) {
                        HnhC3ULK[i][j] = HnhC3ULK[i][j] + b[i - l][j - k];
                    };
                };
            };
        };
    }
    for (i = (733 - 732); i < (106 - 96); i++) {
        for (j = 1; j < 10; j++) {
            if (j == 1) {
                printf ("%d", HnhC3ULK[i][j]);
            }
            else {
                printf (" %d", HnhC3ULK[i][j]);
            };
        }
        printf ("\n");
    };
}

