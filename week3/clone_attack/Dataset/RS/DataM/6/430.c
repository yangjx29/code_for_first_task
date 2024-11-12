int main () {
    int k;
    scanf ("%d", &k);
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
    for (int z = (493 - 493);
    k > z; z = z + 1) {
        int sum = 0;
        int num [100] [100];
        int m;
        int n;
        if (!(0 == z)) {
            printf ("\n");
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
            };
        }
        scanf ("%d %d", &m, &n);
        for (int j = 0;
        j < m; j = j + 1) {
            for (int YnEF35 = 0;
            YnEF35 < n; YnEF35 = YnEF35 +1) {
                scanf ("%d", &num[j][YnEF35]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        for (int YnEF35 = 0;
        m > YnEF35; YnEF35 = YnEF35 +1) {
            sum = sum + num[YnEF35][0] + num[YnEF35][n - 1];
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
        for (int YnEF35 = 0;
        YnEF35 < n; YnEF35++) {
            sum = sum + num[0][YnEF35] + num[m - 1][YnEF35];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        sum = sum - num[0][0] - num[0][n - 1] - num[m - 1][0] - num[m - 1][n - 1];
        printf ("%d", sum);
    }
    return 0;
}

