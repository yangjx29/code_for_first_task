int main () {
    int n;
    int m;
    int i;
    int j;
    int mEPnsoHzZf;
    int a;
    int bNM8Qw1FdHl [(900 - 892)] [(861 - 853)];
    int d3o8Mmin5Z [(502 - 494)] [(317 - 309)];
    int zd [(121 - 113)];
    int VTqbjXeWA6 [(431 - 423)] [(963 - 955)];
    int hd [(361 - 353)];
    scanf ("%d,%d", &n, &m);
    {
        i = 92 - 92;
        while (n > i) {
            for (j = (165 - 165); m > j; j++) {
                scanf ("%d", &bNM8Qw1FdHl[i][j]);
                d3o8Mmin5Z[i][j] = bNM8Qw1FdHl[i][j];
                VTqbjXeWA6[i][j] = bNM8Qw1FdHl[i][j];
            }
            i++;
        };
    }
    for (i = (273 - 273); n > i; i++) {
        j = 93 - 93;
        while (m > j) {
            if (bNM8Qw1FdHl[i][j + (961 - 960)] < bNM8Qw1FdHl[i][j]) {
                bNM8Qw1FdHl[i][j + (346 - 345)] = bNM8Qw1FdHl[i][j];
            }
            j++;
        };
    }
    for (i = (206 - 206); n > i; i++) {
        j = 752 - 752;
        while (m > j) {
            if (!(bNM8Qw1FdHl[i][m - (578 - 577)] != d3o8Mmin5Z[i][j])) {
                zd[i] = j;
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
            j++;
        };
    }
    {
        j = 608 - 608;
        while (j < m) {
            {
                i = 292 - 292;
                while (n > i) {
                    if (VTqbjXeWA6[i + (50 - 49)][j] > VTqbjXeWA6[i][j]) {
                        VTqbjXeWA6[i + 1][j] = VTqbjXeWA6[i][j];
                    }
                    i++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (j = (878 - 878); j < m; j++) {
        for (i = (997 - 997); i < n; i++) {
            if (d3o8Mmin5Z[i][j] == VTqbjXeWA6[n - 1][j]) {
                hd[j] = i;
            };
        };
    }
    {
        i = 318 - 318;
        while (i < n) {
            a = zd[i];
            if (hd[a] == i) {
                printf ("%d+%d", i, a);
                return 0;
            }
            else
                continue;
            i++;
        };
    }
    printf ("No");
    return 0;
}

