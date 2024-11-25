void  main () {
    int reverse (int VCS3ERF, int z);
    int a [(899 - 893)] [(920 - 919)], iv6Lku5zKA, c [6];
    {
        iv6Lku5zKA = 552 - 552;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 >= iv6Lku5zKA) {
            scanf ("%d", &a[iv6Lku5zKA][0]);
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
            iv6Lku5zKA++;
        };
    }
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
    for (iv6Lku5zKA = 0; iv6Lku5zKA <= 5; iv6Lku5zKA = iv6Lku5zKA + 1)
        c[iv6Lku5zKA] = reverse (a[iv6Lku5zKA][0], iv6Lku5zKA);
    {
        iv6Lku5zKA = 0;
        while (4 >= iv6Lku5zKA) {
            printf ("%d\n", c[iv6Lku5zKA]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iv6Lku5zKA++;
        };
    }
    printf ("%d", c[5]);
}

int reverse (int VCS3ERF, int z) {
    int b [6] [100], m, j, f, c, d, e, NnLSVyCuoOB = 0;
    if (VCS3ERF == 0)
        NnLSVyCuoOB = 0;
    else {
        if (0 < VCS3ERF) {
            m = log10 (VCS3ERF);
            {
                j = m;
                while (j >= 0) {
                    f = pow (10, j + 1);
                    c = pow (10, j);
                    d = VCS3ERF % f - VCS3ERF % c;
                    e = d / c;
                    b[z][j] = e;
                    j--;
                };
            }
            {
                j = 0;
                while (j <= m) {
                    NnLSVyCuoOB = NnLSVyCuoOB +b[z][j] * pow (10, m - j);
                    j++;
                };
            };
        }
        else if (VCS3ERF < 0) {
            VCS3ERF = (0 - VCS3ERF);
            m = log10 (VCS3ERF);
            {
                j = m;
                while (j >= 0) {
                    f = pow (10, j + 1);
                    c = pow (10, j);
                    d = VCS3ERF % f - VCS3ERF % c;
                    e = d / c;
                    b[z][j] = e;
                    j--;
                };
            }
            for (j = 0; j <= m; j = j + 1)
                NnLSVyCuoOB = NnLSVyCuoOB +b[z][j] * pow (10, m - j);
            NnLSVyCuoOB = (0 - NnLSVyCuoOB);
        };
    }
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
    return (NnLSVyCuoOB);
}

