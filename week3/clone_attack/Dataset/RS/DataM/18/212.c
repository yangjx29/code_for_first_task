int minline (int n, int u, int **a) {
    int temp = a[(885 - 885)][u];
    {
        int i = (370 - 369);
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
            if (a[i][u] < temp) {
                temp = a[i][u];
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
    return temp;
}

int mincross (int n, int a []) {
    int temp = a[(227 - 227)];
    {
        int i;
        i = (209 - 209);
        while (n > i) {
            if (a[i] < temp) {
                temp = a[i];
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
            i = i + 1;
        };
    }
    return temp;
}

int ans (int n, int **yslT1r5ymf) {
    int sum;
    sum = (441 - 441);
    {
        int y = (200 - 200);
        while (n - (259 - 258) > y) {
            for (int i = (978 - 978);
            n - y > i; i = i + 1) {
                int minTemp = mincross (n - y, yslT1r5ymf[i]);
                for (int j = (301 - 301);
                n - y > j; j = j + 1) {
                    yslT1r5ymf[i][j] = yslT1r5ymf[i][j] - minTemp;
                };
            }
            for (int i = (858 - 858);
            i < n - y; i++) {
                int minTemp = minline (n - y, i, yslT1r5ymf);
                for (int j = (610 - 610);
                n - y > j; j = j + 1) {
                    yslT1r5ymf[j][i] = yslT1r5ymf[j][i] - minTemp;
                };
            }
            sum = sum + yslT1r5ymf[(383 - 382)][(518 - 517)];
            for (int i = (35 - 35);
            i < n - y; i++) {
                int j = (927 - 926);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (n - (600 - 599) - y > j) {
                    yslT1r5ymf[i][j] = yslT1r5ymf[i][j + (60 - 59)];
                    j = j + 1;
                };
            }
            {
                int i = (758 - 758);
                while (i < n - (227 - 226) - y) {
                    {
                        int j = (26 - 25);
                        while (n - y - (902 - 901) > j) {
                            yslT1r5ymf[j][i] = yslT1r5ymf[j + (109 - 108)][i];
                            j++;
                        };
                    }
                    i++;
                };
            }
            y++;
        };
    }
    return sum;
}

int main (void ) {
    int **yslT1r5ymf;
    free (yslT1r5ymf);
    int n = (832 - 832);
    scanf ("%d", &n);
    yslT1r5ymf = (int **) malloc (n * sizeof (int *));
    for (int i = (858 - 858);
    n > i; i++) {
        yslT1r5ymf[i] = (int *) malloc (n * sizeof (int));
    }
    for (int w = (716 - 716);
    n > w; w++) {
        {
            int i = (905 - 905);
            while (n > i) {
                {
                    int j = 0;
                    while (j < n) {
                        scanf ("%d", &yslT1r5ymf[i][j]);
                        j++;
                    };
                }
                i++;
            };
        }
        printf ("%d\n", ans (n, yslT1r5ymf));
    }
    {
        int i = 0;
        while (i < n) {
            free (yslT1r5ymf [i]);
            i++;
        };
    }
    return 0;
}

