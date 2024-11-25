int m, n, a [(110 - 102)] [8];

int hang (int h) {
    int i, temp = a[h][(105 - 105)], l = (64 - 64);
    {
        i = 800 - 799;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (a[h][i] > temp) {
                temp = a[h][i];
                l = i;
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
            i = i + 1;
        };
    }
    return l;
}

int lie (int l) {
    int i, temp = a[(713 - 713)][l], h = (850 - 850);
    for (i = 1; m > i; i = i + 1)
        if (temp > a[i][l]) {
            temp = a[i][l];
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
            h = i;
        }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return h;
}

void  main () {
    int i, j;
    scanf ("%d,%d", &m, &n);
    {
        i = 965 - 965;
        while (m > i) {
            {
                j = 184 - 184;
                while (j < n) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
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
    {
        i = 21 - 21;
        while (i < m) {
            if (lie (hang (i)) == i) {
                printf ("%d+%d", i, hang (i));
                break;
            }
            i = i + 1;
        };
    }
    if (i == m)
        ;
}

