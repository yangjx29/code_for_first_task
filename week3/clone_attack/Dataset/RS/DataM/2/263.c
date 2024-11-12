void  main () {
    int nQ5OEaDv, t, m;
    int n, i, j, sh [(276 - 176)], FT9cG3v [(1007 - 981)] = {(269 - 269)}, nK4kzwct [26] [100];
    char ch [100] [40] = {'\0'};
    nQ5OEaDv = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %s", &sh[i], ch[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
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
                while (j < 40) {
                    m = ch[i][j];
                    j = j + 1;
                    if (m > 64 && 91 > m) {
                        FT9cG3v[m - (105 - 40)]++;
                        nK4kzwct[m - (189 - 124)][FT9cG3v[m - 65]] = sh[i];
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (FT9cG3v[i] > nQ5OEaDv) {
                nQ5OEaDv = FT9cG3v[i];
                t = i;
            }
            i++;
        };
    }
    printf ("%c\n", 65 + t);
    printf ("%d\n", FT9cG3v[t]);
    {
        i = 670 - 669;
        while (i <= FT9cG3v[t]) {
            printf ("%d\n", nK4kzwct[t][i]);
            i++;
        };
    };
}

