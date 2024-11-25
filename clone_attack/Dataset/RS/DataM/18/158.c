void  guiling (int a [(568 - 468)] [(867 - 767)], int n) {
    int i;
    int j;
    int min;
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
    for (i = (615 - 615); n >= i; i = i + 1) {
        min = a[i][(72 - 72)];
        for (j = (493 - 493); n >= j; j++) {
            if (min > a[i][j])
                min = a[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (j = (818 - 818); n >= j; j++)
            a[i][j] = a[i][j] - min;
    }
    for (j = (713 - 713); j <= n; j++) {
        min = a[0][j];
        for (i = 0; n >= i; i++) {
            if (min > a[i][j])
                min = a[i][j];
        }
        for (i = 0; i <= n; i++)
            a[i][j] = a[i][j] - min;
    };
}

void  shanchu (int a [(931 - 831)] [(763 - 663)], int n) {
    int i, j;
    for (i = 0; i <= n; i++)
        for (j = (378 - 377); j < n; j++)
            a[i][j] = a[i][j + (453 - 452)];
    for (j = 0; j <= (n - (667 - 666)); j++)
        for (i = (769 - 768); i < n; i++)
            a[i][j] = a[i + (747 - 746)][j];
}

int main () {
    int a [100] [100] [100];
    int i;
    int j;
    int k;
    int ElDd3CK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++) {
                scanf ("%d", &a[i][j][k]);
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
    for (i = 0; i < n; i++) {
        ElDd3CK = 0;
        for (j = n - (508 - 507); j >= 1; j--) {
            guiling (a[i], j);
            ElDd3CK = ElDd3CK +a[i][1][1];
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
            shanchu (a[i], j);
        }
        printf ("%d\n", ElDd3CK);
    };
}

