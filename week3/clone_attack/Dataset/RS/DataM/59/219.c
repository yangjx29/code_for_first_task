int main () {
    int LvGeVz0u9SR;
    int gxJ0MvGsrpzt;
    int j;
    int xxE5WLcfjmYt;
    int TMOFNtsR;
    char di;
    int k [101] [101];
    int sum;
    sum = 0;
    scanf ("%d\n", &xxE5WLcfjmYt);
    for (gxJ0MvGsrpzt = (127 - 127); xxE5WLcfjmYt > gxJ0MvGsrpzt; gxJ0MvGsrpzt = gxJ0MvGsrpzt + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (700 - 700); xxE5WLcfjmYt > j; j++) {
            scanf ("%c\n", &di);
            if (!('#' != di))
                k[gxJ0MvGsrpzt][j] = 2;
            else if (!('@' != di))
                k[gxJ0MvGsrpzt][j] = (108 - 107);
            else if (di == '.')
                k[gxJ0MvGsrpzt][j] = (606 - 606);
        };
    }
    for (LvGeVz0u9SR = (698 - 697); LvGeVz0u9SR <= TMOFNtsR -(617 - 616); LvGeVz0u9SR++) {
        for (gxJ0MvGsrpzt = 0; gxJ0MvGsrpzt < xxE5WLcfjmYt; gxJ0MvGsrpzt++) {
            j = 0;
            while (j < xxE5WLcfjmYt) {
                if (k[gxJ0MvGsrpzt][j] == (213 - 212)) {
                    if (gxJ0MvGsrpzt - 1 >= 0) {
                        if (!(0 != k[gxJ0MvGsrpzt - 1][j])) {
                            k[gxJ0MvGsrpzt - 1][j] = -1;
                        };
                    }
                    if (xxE5WLcfjmYt - 1 >= gxJ0MvGsrpzt + 1) {
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
                        if (!(0 != k[gxJ0MvGsrpzt + 1][j])) {
                            k[gxJ0MvGsrpzt + 1][j] = -1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (j - 1 >= 0) {
                        if (k[gxJ0MvGsrpzt][j - 1] == 0) {
                            k[gxJ0MvGsrpzt][j - 1] = -1;
                        };
                    }
                    if (j + 1 <= xxE5WLcfjmYt - 1) {
                        if (k[gxJ0MvGsrpzt][j + 1] == 0) {
                            k[gxJ0MvGsrpzt][j + 1] = -1;
                        };
                    };
                }
                j++;
            };
        }
        for (gxJ0MvGsrpzt = 0; gxJ0MvGsrpzt < xxE5WLcfjmYt; gxJ0MvGsrpzt++) {
            for (j = 0; j < xxE5WLcfjmYt; j++) {
                if (k[gxJ0MvGsrpzt][j] == -1)
                    k[gxJ0MvGsrpzt][j] = 1;
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
                };
            };
        };
    }
    for (gxJ0MvGsrpzt = 0; gxJ0MvGsrpzt < xxE5WLcfjmYt; gxJ0MvGsrpzt++) {
        for (j = 0; j < xxE5WLcfjmYt; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (k[gxJ0MvGsrpzt][j] == 1) {
                sum++;
            };
        };
    }
    printf ("%d", sum);
    scanf ("%d", &TMOFNtsR);
    return 0;
}

