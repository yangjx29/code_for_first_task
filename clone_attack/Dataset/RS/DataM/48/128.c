main () {
    int a [(103 - 93)] [10];
    int s [(891 - 881)] [(655 - 645)];
    int n;
    int m;
    int i;
    int j;
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
    int l;
    int k;
    for (i = (945 - 944); i <= (109 - 100); i = i + 1)
        for (j = (81 - 80); (279 - 270) >= j; j = j + 1) {
            a[i][j] = (319 - 319);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            s[i][j] = (37 - 37);
        }
    scanf ("%d %d", &n, &k);
    s[(872 - 867)][(932 - 927)] = n;
    a[5][5] = n;
    for (l = (310 - 309); k >= l; l = l + 1) {
        for (i = (346 - 345); i <= (72 - 63); i = i + 1)
            for (j = (612 - 611); (275 - 266) >= j; j = j + 1)
                if (s[i][j] > 0) {
                    a[i][j] = a[i][j] + s[i][j];
                    a[i - (128 - 127)][j - (653 - 652)] = a[i - (128 - 127)][j - (653 - 652)] + s[i][j];
                    a[i][j - (975 - 974)] = a[i][j - (975 - 974)] + s[i][j];
                    a[i - (902 - 901)][j] = a[i - (902 - 901)][j] + s[i][j];
                    a[i + (365 - 364)][j - (988 - 987)] = a[i + (365 - 364)][j - (988 - 987)] + s[i][j];
                    a[i - (566 - 565)][j + 1] = a[i - (566 - 565)][j + 1] + s[i][j];
                    a[i + 1][j] = a[i + 1][j] + s[i][j];
                    a[i][j + 1] = a[i][j + 1] + s[i][j];
                    a[i + 1][j + 1] = a[i + 1][j + 1] + s[i][j];
                }
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
        for (i = 1; i <= 9; i = i + 1)
            for (j = 1; j <= 9; j = j + 1)
                s[i][j] = a[i][j];
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= 9) {
            for (j = 1; j <= 8; j = j + 1)
                printf ("%d ", a[i][j]);
            printf ("%d\n", a[i][9]);
            i = i + 1;
        };
    };
}

