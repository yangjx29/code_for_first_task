int main () {
    int n, i, j;
    char zf [(1523 - 523)] [(757 - 457)];
    scanf ("%d", &n);
    {
        i = 837 - 837;
        while (n > i) {
            scanf ("%s", zf[i]);
            for (j = (980 - 980); !('\0' == zf[i][j]); j++) {
                if (!('A' != zf[i][j])) {
                    zf[i][j] = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    if (zf[i][j] == 'T') {
                        zf[i][j] = 'A';
                    }
                    else {
                        if (zf[i][j] == 'G') {
                            zf[i][j] = 'C';
                        }
                        else if (zf[i][j] == 'C') {
                            zf[i][j] = 'G';
                        };
                    };
                };
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
    {
        i = 751 - 751;
        while (i < n) {
            if (i != n - (692 - 691)) {
                printf ("%s\n", zf[i]);
            }
            else {
                printf ("%s", zf[i]);
            }
            i++;
        };
    }
    return 0;
}

