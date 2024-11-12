int main () {
    int n, a [(1009 - 909)] [100], i, j, k, ikGJfen2;
    scanf ("%d", &n);
    for (i = (514 - 513); n >= i; i++) {
        int sum;
        sum = (198 - 198);
        {
            j = 470 - 470;
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
                for (k = 0; n > k; k = k + 1)
                    scanf ("%d", &a[j][k]);
                j++;
            };
        }
        {
            ikGJfen2 = 0;
            while (n - 1 > ikGJfen2) {
                for (j = 0; n - ikGJfen2 > j; j++) {
                    int min;
                    min = a[j][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (k = 0; n - ikGJfen2 > k; k++) {
                        if (min > a[j][k])
                            min = a[j][k];
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
                    for (k = 0; n - ikGJfen2 > k; k++)
                        a[j][k] = a[j][k] - min;
                }
                {
                    j = 0;
                    while (n - ikGJfen2 > j) {
                        int min;
                        min = a[0][j];
                        for (k = 0; n - ikGJfen2 > k; k++) {
                            if (min > a[k][j])
                                min = a[k][j];
                        }
                        for (k = 0; n - ikGJfen2 > k; k++) {
                            a[k][j] = a[k][j] - min;
                        }
                        j++;
                    };
                }
                sum = sum + a[1][1];
                {
                    j = 1;
                    while (n - ikGJfen2 - 1 > j) {
                        a[0][j] = a[0][j + 1];
                        j++;
                    };
                }
                for (j = 1; j < n - ikGJfen2; j++)
                    a[j][0] = a[j + 1][0];
                for (j = 1; n - ikGJfen2 - 1 > j; j++) {
                    k = 1;
                    while (k < n - ikGJfen2 - 1) {
                        a[j][k] = a[j + 1][k + 1];
                        k++;
                    };
                }
                ikGJfen2++;
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

