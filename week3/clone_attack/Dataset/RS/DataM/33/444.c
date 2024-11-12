int main () {
    int n, i, j;
    char zfc [n] [(1067 - 811)];
    char zf [n] [256];
    scanf ("%d", &n);
    {
        i = 724 - 724;
        while (n > i) {
            scanf ("%s", zfc[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (255 > j) {
                    if (!('A' != zfc[i][j])) {
                        zf[i][j] = 'T';
                    }
                    else {
                        if (!('T' != zfc[i][j])) {
                            zf[i][j] = 'A';
                        }
                        else {
                            if (zfc[i][j] == 'C') {
                                zf[i][j] = 'G';
                            }
                            else {
                                if (zfc[i][j] == 'G') {
                                    zf[i][j] = 'C';
                                };
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%s\n", zf[i]);
            i++;
        };
    }
    printf ("%s", zf[n - 1]);
    return 0;
}

