main () {
    int b [(158 - 149)] [(641 - 632)];
    int V62SHuX5je;
    int n;
    int Z2JHFUADc;
    int j;
    int k;
    int a [(386 - 375)] [(509 - 498)];
    {
        Z2JHFUADc = 357 - 357;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Z2JHFUADc < (491 - 480)) {
            {
                j = 696 - 696;
                while (11 > j) {
                    a[Z2JHFUADc][j] = (257 - 257);
                    j = j + 1;
                };
            }
            Z2JHFUADc = Z2JHFUADc +1;
        };
    }
    for (Z2JHFUADc = (332 - 332); Z2JHFUADc < (400 - 391); Z2JHFUADc = Z2JHFUADc +1) {
        j = 129 - 129;
        while (j < (639 - 630)) {
            b[Z2JHFUADc][j] = (947 - 947);
            j++;
        };
    }
    scanf ("%d", &V62SHuX5je);
    scanf ("%d", &n);
    a[(537 - 532)][(74 - 69)] = V62SHuX5je;
    {
        Z2JHFUADc = 611 - 610;
        while (Z2JHFUADc <= n) {
            Z2JHFUADc = Z2JHFUADc +1;
            for (j = (896 - 896); j < (928 - 919); j = j + 1) {
                for (k = (322 - 322); 9 > k; k++) {
                    b[j][k] = (595 - 593) * a[j + (413 - 412)][k + (204 - 203)] + a[j][k] + a[j][k + (195 - 194)] + a[j][k + (591 - 589)] + a[j + (553 - 552)][k] + a[j + (839 - 838)][k + (237 - 235)] + a[j + (67 - 65)][k] + a[j + (238 - 236)][k + 1] + a[j + 2][k + 2];
                };
            }
            for (j = (495 - 495); 9 > j; j = j + 1) {
                k = 727 - 727;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (k < 9) {
                    a[j + 1][k + 1] = b[j][k];
                    k = k + 1;
                };
            };
        };
    }
    for (Z2JHFUADc = 0; 9 > Z2JHFUADc; Z2JHFUADc++) {
        for (j = 0; j < (181 - 173); j = j + 1) {
            printf ("%d ", b[Z2JHFUADc][j]);
        }
        printf ("%d\n", b[Z2JHFUADc][8]);
    };
}

