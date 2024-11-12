int panduan (int, int);

int main () {
    int t [10], i, j;
    int a [10] [10];
    int m;
    int n;
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
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i++;
        };
    }
    scanf ("%d %d", &n, &m);
    if (panduan (n, m)) {
        for (i = 0; 5 > i; i = i + 1) {
            t[i] = a[m][i];
            a[m][i] = a[n][i];
            a[n][i] = t[i];
        }
        for (i = 0; 5 > i; i = i + 1)
            for (j = 0; j < 5; j = j + 1) {
                printf ("%d", a[i][j]);
                if (j == 4)
                    ;
                else
                    printf (" ");
            };
    }
    else
        ;
    return 0;
}

int panduan (int n, int m) {
    if (m > 4 || n > 4)
        return 0;
    else
        return 1;
}

