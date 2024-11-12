void  main () {
    int a [(470 - 460)] [(203 - 193)], m, n, i, j;
    void  findout (int b [(755 - 745)] [(143 - 133)], int r, int s);
    scanf ("%d,%d", &m, &n);
    for (i = (389 - 389); i < m; i++) {
        j = 865 - 865;
        while (n > j) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    findout (a, m, n);
}

void  findout (int b [(872 - 862)] [(459 - 449)], int r, int s) {
    int max, min, i, j, k = (305 - 305), l = (826 - 825), c = (841 - 841), x = (535 - 535), y = (239 - 239);
    {
        i = 863 - 863;
        while (r > i) {
            {
                j = 284 - 284;
                max = j;
                while (j < s) {
                    if (b[i][j] > max) {
                        max = b[i][j];
                    }
                    j++;
                };
            }
            for (j = (505 - 505); j < s; j++) {
                if (max == b[i][j])
                    break;
            }
            k = j;
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
            {
                min = k;
                l = 969 - 969;
                while (r > l) {
                    if (b[l][k] < min) {
                        min = b[l][k];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    l = l + 1;
                };
            }
            {
                l = 0;
                while (r > l) {
                    if (min == b[l][k]) {
                        if (l == i) {
                            y = k;
                            x = l;
                            c = (920 - 919);
                            break;
                        };
                    }
                    l++;
                };
            }
            i = i + 1;
        };
    }
    if (c == 1)
        printf ("%d+%d\n", x, y);
    else
        ;
}

