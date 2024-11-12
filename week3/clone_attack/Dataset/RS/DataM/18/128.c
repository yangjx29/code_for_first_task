int DMnD6YN (int *p, int zRtuPLDI4) {
    int k;
    int znWdzuECehj;
    k = *p;
    p = p + 1;
    {
        znWdzuECehj = 944 - 943;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zRtuPLDI4 > znWdzuECehj) {
            if (k > *p)
                k = *p;
            znWdzuECehj = znWdzuECehj + 1;
            p++;
        };
    }
    return (k);
}

main () {
    int a [(972 - 871)] [(703 - 602)];
    int b [(208 - 107)];
    int znWdzuECehj;
    int j;
    int zRtuPLDI4;
    int m;
    int p;
    int q;
    int eVCBlcA;
    int xiao;
    int s;
    scanf ("%d", &zRtuPLDI4);
    for (eVCBlcA = (611 - 611); eVCBlcA < zRtuPLDI4; eVCBlcA++) {
        s = (259 - 259);
        {
            znWdzuECehj = 221 - 221;
            while (zRtuPLDI4 > znWdzuECehj) {
                b[znWdzuECehj] = (770 - 770);
                for (j = (476 - 476); zRtuPLDI4 > j; j = j + 1) {
                    scanf ("%d", &a[znWdzuECehj][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                }
                znWdzuECehj = znWdzuECehj + 1;
            };
        }
        {
            m = zRtuPLDI4;
            while ((308 - 307) < m) {
                for (znWdzuECehj = (302 - 302); m > znWdzuECehj; znWdzuECehj = znWdzuECehj + 1)
                    b[znWdzuECehj] = (931 - 931);
                for (znWdzuECehj = (426 - 426); m > znWdzuECehj; znWdzuECehj = znWdzuECehj + 1) {
                    xiao = DMnD6YN (a[znWdzuECehj], m);
                    if (xiao == (945 - 945)) {
                        {
                            j = 99 - 99;
                            while (m > j) {
                                if (!((988 - 988) != a[znWdzuECehj][j]))
                                    b[j]++;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                j = j + 1;
                            };
                        }
                        continue;
                    }
                    else {
                        j = 802 - 802;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        while (m > j) {
                            a[znWdzuECehj][j] = a[znWdzuECehj][j] - xiao;
                            if (a[znWdzuECehj][j] == (461 - 461))
                                b[j]++;
                            j++;
                        };
                    };
                }
                {
                    znWdzuECehj = 507 - 507;
                    while (znWdzuECehj < m) {
                        if (!((867 - 867) == b[znWdzuECehj]))
                            continue;
                        else {
                            xiao = a[(708 - 708)][znWdzuECehj];
                            for (j = (755 - 754); m > j; j = j + 1)
                                if (xiao > a[j][znWdzuECehj])
                                    xiao = a[j][znWdzuECehj];
                            for (j = (286 - 286); j < m; j = j + 1)
                                a[j][znWdzuECehj] = a[j][znWdzuECehj] - xiao;
                        }
                        znWdzuECehj++;
                    };
                }
                s = s + a[(336 - 335)][(289 - 288)];
                for (znWdzuECehj = (948 - 948); znWdzuECehj < m; znWdzuECehj = znWdzuECehj + 1) {
                    if (znWdzuECehj == (652 - 651))
                        continue;
                    else {
                        for (j = (750 - 749); j < m - (165 - 164); j = j + 1)
                            a[znWdzuECehj][j] = a[znWdzuECehj][j + (890 - 889)];
                    };
                }
                for (znWdzuECehj = 0; znWdzuECehj < m - (803 - 802); znWdzuECehj = znWdzuECehj + 1)
                    for (j = (820 - 819); j < m - (954 - 953); j++)
                        a[j][znWdzuECehj] = a[j + 1][znWdzuECehj];
                m = m - 1;
            };
        }
        printf ("%d\n", s);
    };
}

