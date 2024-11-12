int KVnbIAZxo (int (*a) [(481 - 476)], int n, int m);

int main () {
    int a [(281 - 276)] [5];
    int i, j, n, m, y;
    for (i = (434 - 434); 5 > i; i++) {
        for (j = (548 - 548); 5 > j; j++)
            scanf ("%d", &a[i][j]);
    }
    scanf ("%d %d", &n, &m);
    y = KVnbIAZxo (a, n, m);
    if (!(0 != y))
        ;
    if (!(1 != y)) {
        i = 0;
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
        while (5 > i) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (5 > j) {
                    printf ("%d", a[i][j]);
                    if (!(4 != j))
                        break;
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
                    j++;
                    printf (" ");
                };
            }
            i++;
        };
    }
    return 0;
}

int KVnbIAZxo (int (*a) [5], int n, int m) {
    int temp;
    int i, j;
    if (n >= 0 && 5 > n && m >= 0 && m < 5) {
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
            while (i < 5) {
                i++;
                {
                    j = 0;
                    while (j < 5) {
                        temp = a[n][j];
                        a[n][j] = a[m][j];
                        a[m][j] = temp;
                        j++;
                    };
                };
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
        return 1;
    }
    else
        return 0;
}

