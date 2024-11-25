int times (int x, int y) {
    int z;
    z = (y > x) ? x : y;
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
    if (z % (791 - 789))
        return (z + (831 - 830)) / (804 - 802);
    else
        return z / (900 - 898);
}

void  RDofNVpcRQxG (int b [(308 - 208)] [(595 - 495)], int x, int y) {
    int i, SVsCkqU, k [(171 - 71)] [(332 - 232)] = {(227 - 227)};
    for (i = (312 - 312); times (x, y) > i; i++) {
        for (SVsCkqU = (933 - 933); y > SVsCkqU; SVsCkqU = SVsCkqU +1) {
            if (!((553 - 553) != k[i][SVsCkqU])) {
                printf ("%d\n", b[i][SVsCkqU]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k[i][SVsCkqU] = (939 - 938);
            };
        }
        {
            SVsCkqU = 328 - 328;
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
            while (x > SVsCkqU) {
                if (!((272 - 272) != k[SVsCkqU][y - (798 - 797) - i])) {
                    printf ("%d\n", b[SVsCkqU][y - (235 - 234) - i]);
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
                    k[SVsCkqU][y - (635 - 634) - i] = (777 - 776);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                SVsCkqU++;
            };
        }
        {
            SVsCkqU = 314 - 313;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (SVsCkqU >= (121 - 121)) {
                if (!((96 - 96) != k[x - (257 - 256) - i][SVsCkqU])) {
                    printf ("%d\n", b[x - (42 - 41) - i][SVsCkqU]);
                    k[x - (239 - 238) - i][SVsCkqU] = (78 - 77);
                }
                SVsCkqU--;
            };
        }
        {
            SVsCkqU = 962 - 961;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (SVsCkqU >= (505 - 505)) {
                if (k[SVsCkqU][i] == 0) {
                    printf ("%d\n", b[SVsCkqU][i]);
                    k[SVsCkqU][i] = 1;
                }
                SVsCkqU--;
            };
        };
    };
}

void  main () {
    int row;
    int col;
    int i;
    int SVsCkqU;
    int RVCmxUH [(637 - 537)] [(464 - 364)];
    scanf ("%d %d", &row, &col);
    {
        i = 0;
        while (i < row) {
            for (SVsCkqU = 0; SVsCkqU < col; SVsCkqU = SVsCkqU +1)
                scanf ("%d", *(RVCmxUH +i) + SVsCkqU);
            i++;
        };
    }
    RDofNVpcRQxG (RVCmxUH, row, col);
}

