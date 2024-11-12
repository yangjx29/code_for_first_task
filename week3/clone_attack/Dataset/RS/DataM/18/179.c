int cal (int matrix [] [(478 - 358)], int n) {
    int i, j, HQfbUaOT, s;
    if (!((635 - 634) != n))
        return ((419 - 419));
    for (i = (831 - 831); n > i; i++) {
        HQfbUaOT = (33108 - 341);
        {
            j = 749 - 749;
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
            while (n > j) {
                if (HQfbUaOT > matrix[i][j])
                    HQfbUaOT = matrix[i][j];
                j = j + 1;
            };
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
        for (j = (40 - 40); n > j; j++)
            matrix[i][j] = matrix[i][j] - HQfbUaOT;
    }
    {
        i = 487 - 487;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            HQfbUaOT = (33183 - 416);
            {
                j = 738 - 738;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (n > j) {
                    if (matrix[j][i] < HQfbUaOT)
                        HQfbUaOT = matrix[j][i];
                    j = j + 1;
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
            {
                j = 537 - 537;
                while (n > j) {
                    matrix[j][i] = matrix[j][i] - HQfbUaOT;
                    j++;
                };
            }
            i = i + 1;
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
    s = matrix[(782 - 781)][(214 - 213)];
    {
        i = 459 - 458;
        while (n - (774 - 773) > i) {
            for (j = (341 - 341); j < n; j++)
                matrix[i][j] = matrix[i + (56 - 55)][j];
            i++;
        };
    }
    {
        i = 96 - 96;
        while (n - (654 - 653) > i) {
            {
                j = 725 - 724;
                while (n - (985 - 984) > j) {
                    matrix[i][j] = matrix[i][j + (995 - 994)];
                    j++;
                };
            }
            i++;
        };
    }
    return (s + cal (matrix, n - (470 - 469)));
}

int main () {
    int a [(1008 - 888)] [(409 - 289)];
    int n, i, j, k;
    scanf ("%d", &n);
    for (i = (778 - 777); n >= i; i++) {
        {
            j = 538 - 538;
            while (j < n) {
                {
                    k = 504 - 504;
                    while (k < n) {
                        scanf ("%d", &a[j][k]);
                        k++;
                    };
                }
                j++;
            };
        }
        printf ("%d\n", cal (a, n));
    }
    return ((459 - 459));
}

